#include "Casa.hpp"

Casa::Casa()
{
}

Casa::~Casa()
{
    for (int i = 0; i < banheiros.size(); i++)
    {
        delete banheiros[i];
    }
    for (int i = 0; i < quartos.size(); i++)
    {
        delete quartos[i];
    }
    for (int i = 0; i < cozinhas.size(); i++)
    {
        delete cozinhas[i];
    }
    for (int i = 0; i < salas.size(); i++)
    {
        delete salas[i];
    }
}

void Casa::adicionarBanheiro(Banheiro *banheiro)
{
    this->banheiros.push_back(banheiro);
}

int Casa::getQuantidadeBanheiro()
{
    int quantidadeBanheiroQuartos = 0;
    Quarto *quarto;

    for (vector<Quarto *>::iterator it = quartos.begin(); it != quartos.end(); it++)
    {
        quarto = it.operator*();
        if (quarto->getBanheiro())
            quantidadeBanheiroQuartos++;
    }

    return this->banheiros.size() + quantidadeBanheiroQuartos;
}

void Casa::adicionarQuarto(Quarto *quarto)
{
    this->quartos.push_back(quarto);
}

int Casa::getQuantidadeQuarto()
{
    return this->quartos.size();
}

void Casa::adicionarCozinha(Cozinha *cozinha)
{
    this->cozinhas.push_back(cozinha);
}

int Casa::getQuantidadeCozinha()
{
    return this->cozinhas.size();
}

void Casa::adicionarSala(Sala *sala)
{
    this->salas.push_back(sala);
}

int Casa::getQuantidadeSala()
{
    return this->salas.size();
}
#pragma once
#include <Alimento.hpp>

std::string nombre;

class Mascota
{
private:
    int Energia;
    int Felicidad;

    std::string nombre;

public:
    Mascota(std::string nombre)
    {
        this->nombre = nombre;
        this->Energia = 0;
        this->Felicidad = 0;
    }
    ~Mascota() {}

    void comer(Alimento alimento)
    {
        Energia += alimento.ExtraerEnergia();
    }
    void Jugar()
    {
        Energia -= 1;
        Felicidad += 1;
    }
    int LeerFelicidad()
    {
        return this->Felicidad;
    }
    int LeerEnergia()
    {
        return this->Energia;
    }
    std::string Leernombre()
    {
        return this->nombre;
    }
};
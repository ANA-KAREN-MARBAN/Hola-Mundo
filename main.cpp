#include <list>
#include <iostream>
#include <Mascota.hpp>
#include <Alimento.hpp>

// using namespace std;

int main()
{
    std::list<Mascota> mascotas;

    Alimento a1(5);
    Alimento a2(2);

    Mascota m1("Firulais");
    Mascota m2("Roko");

    mascotas.push_back(m1);
    mascotas.push_back(m2);

    m1.comer(a1);
    m2.comer(a2);

    for (auto &&Mascota : mascotas)
    {
        std ::cout
            << Mascota.Leernombre()
            << ":"
            << Mascota.LeerEnergia()
            << std::endl;
    }

    return 0;
};

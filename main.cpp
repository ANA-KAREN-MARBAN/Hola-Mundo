#include <iostream>
#include <Mascota.hpp>
#include <Alimento.hpp>

using namespace std;

int main()
{
    Mascota m1;
    Mascota m2;

    Alimento a1(5);
    Alimento a2(2);

    m1.comer(a1);
    m2.comer(a2);

    cout << "Mascota 1 Energia:"<< m1.LeerEnergia() << endl
    <<"Mascota 2 Energia:" << m2.LeerEnergia()<<endl;

    return 0;
};


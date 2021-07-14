#include <iostream>
#include "utils/printFunc.h"
#include <array>
#include <algorithm>

#define DEVMODE 1
#if DEVMODE
#define LOG(x) print(x)
#else
#define LOG(x) x
#endif

bool changeEnough(const std::array<int, 4> &cantidad_monedas, const float debe)
{

    // Se transforma a centavos para evitar trabajar en floats
    int debe_in_cents = debe * 100;

    // Valor de las monedas en centavos
    enum Centavos
    {
        quarter = 25,
        dime = 10,
        nickel = 5,
        penny = 1
    };

    std::array<int, 4> valores_moneda = {quarter, dime, nickel, penny};

    // Variables del for loop
    int valor_moneda,
        qty_de_monedas,
        monedas_necesitadas,
        monedas_que_se_pueden_usar;

    for (size_t i = 0; i < 4 && debe_in_cents != 0; i++)
    {
        valor_moneda = valores_moneda[i];
        qty_de_monedas = cantidad_monedas[i];

        if (debe_in_cents < valor_moneda)
            continue;

        monedas_necesitadas = debe_in_cents / valor_moneda;

        monedas_que_se_pueden_usar = monedas_necesitadas < qty_de_monedas
                                         ? monedas_necesitadas
                                         : qty_de_monedas;

        debe_in_cents -= monedas_que_se_pueden_usar * valor_moneda;
    }
    return debe_in_cents == 0;
}

int main()
{

    std::array<int, 4>
        v1;
    v1 = {2, 100, 0, 0};
    print(changeEnough(v1, 14.11));

    v1 = {0, 0, 20, 5};
    print(changeEnough(v1, 0.75));

    v1 = {30, 40, 20, 5};
    print(changeEnough(v1, 12.55));

    v1 = {10, 0, 0, 50};
    print(changeEnough(v1, 3.85));

    v1 = {1, 0, 5, 219};
    print(changeEnough(v1, 19.99));

    /* 
       * intro Regex
       * hash maps
    */
}
#pragma once
#include <iostream>

template <typename T>
void print(T whatever, char finisher = '\n')
{
    using namespace std;
    cout << whatever << finisher;
}

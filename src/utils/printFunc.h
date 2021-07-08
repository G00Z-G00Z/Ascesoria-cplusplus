#pragma once
#include <iostream>

template <typename T>
void print(T whatever, char finisher = '\n')
{
    std::cout << whatever << finisher;
}
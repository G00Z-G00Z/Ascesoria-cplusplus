#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include "./utils/printFunc.h"

#define DEVMODE 1
#if DEVMODE
#define LOG(x) print(x)
#else
#define LOG(x) x
#endif

bool forbbidenLetter(const char forbidden, std::string array_words[], int size)
{
    for (size_t i = 0; i < size; i++)
        for (auto &&letra : array_words[i])
            if (letra == forbidden)
                return false;

    return true;
}

int main()
{
    std::string arr[] = {"hola", "como", "estas"};

    forbbidenLetter('h', arr, 3);
}
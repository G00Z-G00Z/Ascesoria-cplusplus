#include <string>
#include <array>

bool forbbidenLetter(const char forbidden, std::string array_words[], int size)
{
    for (size_t i = 0; i < size; i++)
        for (auto &&letra : array_words[i])
            if (letra == forbidden)
                return false;

    return true;
}

template <typename T, int size>
bool forbbidenLetter(const char forbidden, std::array<T, size> array_words)
{

    for (auto &&palabra : array_words)
    {
        for (auto &&letra : array_words[i])
            if (letra == forbidden)
                return false;
    }

    return true;
}

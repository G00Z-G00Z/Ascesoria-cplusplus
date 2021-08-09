#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

template <typename T, int size>
void printArray(T *arr)
{
    for (size_t i = 0; i < size; i++)
    {
        if (i % 2 != 0)
            continue;
        cout << arr[i] << endl;
    }
}

int main()
{
    int size = 5;
    char arrChar[size] = {'a', 'b', 'c', 'd', 'e'};
    int arrInt[size] = {1, 2, 3, 4, 5};
}
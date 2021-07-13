template <typename T, int size>
void printArray(T arr[size])
{
    for (size_t i = 0; i < size; i++)
    {
        print(arr[i]);
    }
}

{
    int arr[5] = {1, 2, 3, 4, 5};

    printArray<int, 5>(arr);
}
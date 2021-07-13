#pragma once
template <typename T>
using list = std::initializer_list<T>;

bool possiblyPerfect(list<char> list1, list<char> list2)
{

    char missing = '_';

    if (list1.size() != list2.size())
        return false;

    for (
        auto it1 = list1.begin(), it2 = list2.begin();
        it1 != list1.end();
        it1++, it2++)
    {
        if (
            (*it1) == missing or
            (*it2) == missing or
            (*it1) == (*it2))
            continue;

        return false;
    }

    return true;
}

// print(possiblyPerfect({'B', 'A', '_', '_'}, {'B', 'A', 'C', 'C'})) => true;

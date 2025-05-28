

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template <typename T>
void iter(T* array, size_t size, void(*func)(T &))
{
    for (size_t i = 0 ; i < size; i++)
    {
        func(array[i]);
    }

}


template <typename T>
void printData(T &s)
{
    std::cout << "Array element: " << s << std::endl;
}

void setIntArray(int * array, size_t size, int value)
{
    for (size_t i = 0; i < size; i++)
    {
        array[i] = value;
    }
}

void setStrArray(std::string * array, size_t size, std::string value)
{
    for (size_t i = 0; i < size; i++)
    {
        array[i] = value;
    }
}

// template <typename T>
// void setArray(T & arr)
// {
//     arr = 
// }

// template <typename T>
// void apply(T* array, int size, void (*func)(T const&));


#endif
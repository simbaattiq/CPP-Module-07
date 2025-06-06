

#ifndef TEMPLATES_HPP
#define TEMPLATES_HPP

#include <iostream>
#include <string>

template <typename T>
void swap(T& x, T& y)
{
    T tmp = x;
    
    x = y;
    y = tmp;
}

template <typename T>
T max(T x, T y)
{
    if (x > y)
        return x;
    return y;
}

template <typename T>
T min(T x, T y)
{
    if (x < y)
        return x;
    return y;
}


#endif
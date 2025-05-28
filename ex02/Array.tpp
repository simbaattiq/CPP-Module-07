
#ifndef ARRAY_TPP
#define ARRAY_TPP

#include "Array.hpp"

template <typename T>
Array<T>::Array(void)
{
    _size = 0;
    ptr = NULL;
    // ptr = new T();
}

template <typename T>
Array<T>::Array(unsigned int n )
{
    if (n > 0)
    {
        _size = n;
        ptr = new T[n]();
    }
    else
    {
        _size = 0;
        // ptr = new T();
        ptr = NULL;

    }
}
template <typename T>
Array<T>::Array(const Array & other)
{
    _size = other._size;

    if (_size > 0)
    {
        ptr = new T[_size];
        for (size_t i = 0; i < _size; i++)
            ptr[i] = other.ptr[i];
    }
    else
        ptr = NULL;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array & other)
{
    if (this != &other) 
    {
        delete[] ptr;
        _size = other._size;

        if (_size > 0)
        {
            ptr = new T[_size];
            for (size_t i = 0; i < _size; i++)
                ptr[i] = other.ptr[i];
        }
        else
            ptr = NULL;
    }
    return *this;
}


template <typename T>
T& Array<T>::operator[](size_t index)
{
    if (index < _size)
        return (ptr[index]);
    throw std::out_of_range("Array Index is out of range");
}

template <typename T>
unsigned int  Array<T>::size(void)
{
    return (_size);
}

template <typename T>
Array<T>::~Array(void)
{
    if (ptr)
        delete [] ptr;
}

template <typename T>
void Array<T>::errase(void)
{
    if (ptr)
    {
        delete [] ptr;
        ptr = NULL;
    }
}

#endif
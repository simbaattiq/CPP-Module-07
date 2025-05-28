

#ifndef ARRAY_HPP
#define ARRAY_HPP


#include <iostream>
#include <string>

template <typename T>
class Array
{
private:
    T *ptr;
    unsigned int _size;

public:
    Array(void);
    ~Array(void);
    Array(const Array & other);
    Array& operator=(const Array & other);

    Array(unsigned int n );

    T& operator[](size_t index);

    unsigned int size(void);

    void errase(void);

};


#include "Array.tpp"

#endif
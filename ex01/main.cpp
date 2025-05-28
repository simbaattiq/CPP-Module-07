

#include "Iter.hpp"

int main()
{
    /* String Array */
    
    std::string arr[10];
    // std::string *arr = new std::string[10];
    setStrArray(arr, 10, "Default");
    arr[0] = "pppppp";
    ::iter(arr, 10, printData);
    // delete arr;

    /* Integer Array */
    int *i = new int[10];
    // int i[10] = new int[10];
    setIntArray(i, 10, 99);
    i[0] = 88888;
    ::iter(i, 10, printData);
    // delete i;

    return 0;
}
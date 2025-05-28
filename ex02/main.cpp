

#include "Array.hpp"

int main(void)
{

    try
    {
        unsigned int maxSize = 10;

        /* Testing Empty Array*/
        // Array<int> emptyArray;
        // std::cout << "Size of empty array: " << emptyArray.size() << '\n';
        // std::cout << "Empty array index: 0, content: \n" << emptyArray[0] << '\n'; // throw out_of_range exception

    

        /* INT Array */
        Array<int> intArray(maxSize);

        /* setting the array */
        for (size_t i = 0; i < intArray.size(); i++)
            intArray[i] = i * 10;
    

        /* printing the array */
        std::cout << "Int Array size: " << intArray.size() << '\n';
        std::cout << "Int Array content: \n";
        for (size_t i = 0; i < intArray.size(); i++)
            std::cout << "Index: " << i << ", Value: " << intArray[i] << " \n";

        /* Copy Constructor */
        Array<int> intArr2(intArray);

        // /* Assignment Operator */
        // Array<int> intArr2(intArray);

        /* Deleting the first Array */
        intArray.errase();


        /* printing the array with the second ptr*/
        std::cout << "Assigned Array size: " << intArr2.size() << '\n';
        std::cout << "Assigned Int Array content: \n";
        for (size_t i = 0; i < intArr2.size(); i++)
            std::cout << "Index: " << i << ", Value: " << intArr2[i] << " \n";



        // /* Testing std::string Array */

        // Array<std::string> strArray(maxSize);

        // /* setting the array */
        // for (size_t i = 0; i < strArray.size(); i++)
        //     strArray[i] = "Default";
        // /* printing the array */
        // std::cout << "String Array size: " << strArray.size() << '\n';
        // std::cout << "String Array content: \n";
        // for (size_t i = 0; i < strArray.size(); i++)
        //     std::cout << "Index: " << i << ", Value: " << strArray[i] << " \n";


        // /* Copy Constructor */
        // Array<std::string> strArray2(strArray);

        // // /* Assignment Operator */
        // // Array<std::string> strArray2(strArray);

        // /* Deleting the first Array */
        // strArray.errase();


        // /* printing the array with the second ptr*/
        // std::cout << "Assigned string Array size: " << strArray2.size() << '\n';
        // std::cout << "Assigned string Array content: \n";
        // for (size_t i = 0; i < strArray2.size(); i++)
        //     std::cout << "Index: " << i << ", Value: " << strArray2[i] << " \n";
    }
    catch (std::exception &e)
    {
        std::cerr << "Error: " << e.what() << '\n';
    }

    return 0;
}
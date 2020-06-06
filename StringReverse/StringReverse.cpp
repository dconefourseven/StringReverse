// StringReverse.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void stringReverse(char* _str)
{
    // Work out the length of the string
    int length = strlen(_str);
    // Start one index at the beginning
    int index = 0;
    // Start one at the end (the last char before the null terminator)
    int endIndex = length-1;

    // Only go half way since by then, the operation will be complete.
    while (index < length / 2)
    {
        // Perform the swap without needing a temp
        _str[index] = _str[index] + _str[endIndex];
        _str[endIndex] = _str[index] - _str[endIndex];
        _str[index] = _str[index] - _str[endIndex];
        
        // Advance the indices 
        ++index;
        --endIndex;
    }
}

int main()
{
    char hello[13] = "Hello World!";
    std::cout << hello << std::endl;
    stringReverse(hello);
    std::cout << hello << std::endl;

    char car[4] = "car";
    std::cout << car << std::endl;
    stringReverse(car);
    std::cout << car << std::endl;

    char alphabet[27] = "abcdefghijklmnopqrstuvwxyz";
    std::cout << alphabet << std::endl;
    stringReverse(alphabet);
    std::cout << alphabet << std::endl;

    char brownFox[45] = "The quick brown fox jumps over the lazy dog.";
    std::cout << brownFox << std::endl;
    stringReverse(brownFox);
    std::cout << brownFox << std::endl;
}
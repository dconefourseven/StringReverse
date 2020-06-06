// StringReverse.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void stringReverse(char* _str)
{
    int length = strlen(_str);
    int index = 0;
    int endIndex = length-1;
    while (index < length / 2)
    {
        _str[index] = _str[index] + _str[endIndex];
        _str[endIndex] = _str[index] - _str[endIndex];
        _str[index] = _str[index] - _str[endIndex];
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
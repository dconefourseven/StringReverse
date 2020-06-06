// StringReverse.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cassert>

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

void testStrings();
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

    testStrings();
}

void testStrings()
{
    // Test the the initial input strings are reversed correctly.
    char hello[13] = "Hello World!";
    stringReverse(hello);
    assert(strcmp(hello, "!dlroW olleH") == 0);

    char car[4] = "car";
    stringReverse(car);
    assert(strcmp(car, "rac") == 0);

    char alphabet[27] = "abcdefghijklmnopqrstuvwxyz";
    stringReverse(alphabet);
    assert(strcmp(alphabet, "zyxwvutsrqponmlkjihgfedcba") == 0);

    char brownFox[45] = "The quick brown fox jumps over the lazy dog.";
    stringReverse(brownFox);
    assert(strcmp(brownFox, ".god yzal eht revo spmuj xof nworb kciuq ehT") == 0);

    // Test that they are reversed back to their original state.

    stringReverse(hello);
    assert(strcmp(hello, "Hello World!") == 0);

    stringReverse(car);
    assert(strcmp(car, "car") == 0);

    stringReverse(alphabet);
    assert(strcmp(alphabet, "abcdefghijklmnopqrstuvwxyz") == 0);

    stringReverse(brownFox);
    assert(strcmp(brownFox, "The quick brown fox jumps over the lazy dog.") == 0);
}
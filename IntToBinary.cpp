
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

void printArray(char array[])
{
    for (int i = 1; i < 8; i++)
    {
        if (array[i] == '1' || array[i] == '0')
        {
            cout << array[i];
        }
        else
        {
            cout << 'x';
        }
    }
}

int getOffset(char unalignedArray[])
{
    int offset = 0;
    for (int i = 0; i < 9; i++)
    {
        if (unalignedArray[i] == '\0')
        {
            offset = 8 - i;
            break;
        }
    }
    return offset;
}

void getAlignedArray(char unalignedArray[], char alignedArray[], int offset)
{
    for (int i = offset; i < 8; i++)
    {
        alignedArray[i] = unalignedArray[i - offset];
    }
}

main()
{
    int someValue;
    cout << "Enter an integer value to convert to binary >";
    cin >> someValue;
    char toBinary[9] = {};
    itoa(someValue, toBinary, 2);
    int binaryOffset = getOffset(toBinary);
    char binaryAligned[9] = {};
    getAlignedArray(toBinary, binaryAligned, binaryOffset);
    printArray(binaryAligned);
}

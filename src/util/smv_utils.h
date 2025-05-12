#ifndef UCLASMVUTILS
#define UCLASMVUTILS

#include "ids.h"

union DoubleCaster//this is for type casting between double and int array
{
    double num;
    uint8_t arr[8];
};

int getIDField(int first, int last)
{
    return (first << 7) + last;
}

int getFirst(int id)
{
    return ((id & (0b1111 << 7)) >> 7) & 0b1111; 
}

int getLast(int id)
{
    return id & 0b1111; //grab the last 4 bits
}

#endif

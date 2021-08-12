#define NELEMS(x)  (sizeof(x) / sizeof((x)[0]))

#include <iostream>
#include <cstdlib>

int randomRange(int min, int max) 
{
    srand((unsigned) time(0));
    return min + (rand() % max);
}

double randomRange(double fMin, double fMax) 
{
    srand((unsigned) time(0));
    double f = (double)rand() / RAND_MAX;
    return fMin + f * (fMax - fMin);
}

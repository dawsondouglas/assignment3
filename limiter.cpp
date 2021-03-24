#include "limiter.h"

Limiter::Limiter(int limit)
{
    Limiter::limit = (limit / 100.0);
}

Limiter::~Limiter()
{
}

void Limiter::processBuffer(unsigned char* buffer, int bufferSize)
{
    int highest = 0;

    for (int i = 0; i < bufferSize; i++)
    {
        if ((int)buffer[i] > highest)
        {
            highest = (int)buffer[i];
        }       
    }

    for (int i = 0; i < bufferSize; i++)
    {
        if ((int)buffer[i] > highest * Limiter::limit)
        {
            buffer[i] -= (int)buffer[i] - (highest * Limiter::limit);
        }        
    }    
}
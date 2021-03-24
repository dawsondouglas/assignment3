#include "noisegate.h"

Noisegate::Noisegate(float threshold)
{
    Noisegate::threshold = threshold / 100.;
}

Noisegate::~Noisegate()
{
}

void Noisegate::processBuffer(unsigned char* buffer, int bufferSize)
{
    int upperBound = Noisegate::threshold * 255;
    int lowerBound = upperBound - 128;

    for (int i = 0; i < bufferSize; i++)
    {
        if ((int)buffer[i] <= upperBound && (int)buffer[i] >= lowerBound)
        {
            buffer[i] = 128;
        }       
    }   
}
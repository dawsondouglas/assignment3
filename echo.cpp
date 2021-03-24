#include "echo.h"

Echo::Echo(int delay)
{
    Echo::delay = delay;
}
Echo::~Echo()
{

}
void Echo::processBuffer(unsigned char* buffer, int bufferSize)
{
    uint8_t sample[bufferSize];
    uint8_t delayed[bufferSize];

    for (int i = 0; i < bufferSize; i++)
    {
        sample[i] = buffer[i];
        if (i >= Echo::delay - 1)
        {
           delayed[i] = buffer[i - Echo::delay - 1] * .4;
        }
    }
    for (int i = Echo::delay - 1; i < bufferSize; i++)
    {
        buffer[i] = sample[i] + delayed[i];
    }
    
}
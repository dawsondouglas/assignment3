#ifndef ECHO_CODE
#define ECHO_CODE

#include "Processor.h"

class Echo : public Processor
{
    int delay;
public:
    Echo(int delay);
    ~Echo();
    void processBuffer(unsigned char* buffer, int bufferSize) override;
};

#endif

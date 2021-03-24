#ifndef NOISEGATE_CODE
#define NOISEGATE_CODE

#include "Processor.h"

class Noisegate : public Processor
{
    float threshold;
public:
    Noisegate(float threshold);
    ~Noisegate();
    void processBuffer(unsigned char* buffer, int bufferSize) override;
};




#endif

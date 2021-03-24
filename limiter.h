#ifndef LIMITER_CODE
#define LIMITER_CODE

#include "Processor.h"

class Limiter : public Processor
{
    double limit;
public:
    Limiter(int limit);
    ~Limiter();
    void processBuffer(unsigned char* buffer, int bufferSize) override;
};
#endif 

#include <iostream>
#include <string>
#include "Wav.h"
#include "Processor.h"
#include "echo.h"
#include "limiter.h"
#include "noisegate.h"


const std::string testfile = "testing.wav";
const std::string echofile = "echos.wav";
const std::string limitfile = "limit.wav";
const std::string noisefile = "noise.wav";
int main() {
    // Uncomment these lines when ready.

    Wav wav;
    wav.readFile(testfile);   
    Processor *echoProcessor = new Echo(22050); //Echo delay is in terms of samples, 44.1khz standard to 1 sec
    echoProcessor->processBuffer(wav.getBuffer(),wav.getBufferSize());
    wav.writeFile(echofile);
    wav.readFile(testfile);
    Processor *limitProcessor = new Limiter(80);
    limitProcessor->processBuffer(wav.getBuffer(),wav.getBufferSize());
    wav.writeFile(limitfile);
    wav.readFile(testfile);
    Processor *noisegateProcessor = new Noisegate(55);
    noisegateProcessor->processBuffer(wav.getBuffer(),wav.getBufferSize());
    wav.writeFile(noisefile);

    return 0;
}

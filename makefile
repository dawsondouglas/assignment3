audioprocessor: main.cpp wav.o echo.o limiter.o noisegate.o
	g++ -std=c++11 -o audioprocessor main.cpp wav.o echo.o limiter.o noisegate.o 

echo.o: echo.cpp echo.h 
	g++ -c -std=c++11 echo.cpp

limiter.o: limiter.cpp limiter.h
	g++ -c -std=c++11 limiter.cpp

noisegate.o: noisegate.cpp noisegate.h
	g++ -c -std=c++11 noisegate.cpp

wav.o: Wav.cpp Wav.h WaveHeader.h
	g++ -c -std=c++11 Wav.cpp WaveHeader.h

clean:
	rm *.o audioprocessor

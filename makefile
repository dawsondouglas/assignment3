audioprocessor: main.cpp wav.o echo.o limiter.o noisegate.o
	g++ -std=c++11 main.cpp wav.o echo.o limiter.o noisegate.o -o audioprocessor

echo.o: echo.cpp echo.h 
	g++ -c -std=c++11 echo.cpp

limiter.o: limiter.cpp limiter.h
	g++ -c -std=c++11 limiter.cpp

noisegate.o: noisegate.cpp noisegate.h
	g++ -c -std=c++11 noisegate.cpp

wav.o: Wav.cpp Wav.h Waveheader.h
	g++ -c -std=c++11 Wav.cpp Waveheader.h

clean:
	rm *.o audioprocessor

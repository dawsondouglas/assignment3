audioprocessor: main.cpp wav.o
	g++ -std=c++11 main.cpp wav.o -o audioprocessor

wav.o: wav.cpp wav.h
	g++ -c -std=c++11 wav.cpp

clean:
	rm *.o audioprocessor

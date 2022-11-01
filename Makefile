sample: sample.o imageio.o 
	g++ -o sample sample.o imageio.o

main: main.o functions.o imageio.o
	g++ -o main main.o functions.o imageio.o

main.o: main.cpp functions.h imageio.h
	g++ -c main.cpp

functions.o: functions.cpp functions.h imageio.h
	g++ -c functions.cpp

sample.o: sample.cpp imageio.h

imageio.o: imageio.cpp imageio.h

clean:
	rm -f main sample functions imageio main.o sample.o imageio.o functions.o

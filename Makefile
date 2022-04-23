LIBFLAGS = -L lib -l SDL2 -l SDL2_image -l SDL2main
INCLUDEFLAGS = -I include
all:
	g++ -std=c++17 $(INCLUDEFLAGS) -c utils.cpp $(LIBFLAGS)
	g++ -std=c++17 $(INCLUDEFLAGS) -c painter.cpp $(LIBFLAGS)
	g++ -std=c++17 $(INCLUDEFLAGS) -c main.cpp $(LIBFLAGS)
	g++ -std=c++17 $(INCLUDEFLAGS) utils.o  painter.o main.o -o main $(LIBFLAGS)
	g++ -std=c++17 $(INCLUDEFLAGS) -c painterTest.cpp $(LIBFLAGS)
	g++ -std=c++17 $(INCLUDEFLAGS) utils.o  painter.o painterTest.o  -lcppunit -o painterTest $(LIBFLAGS)
run:
	chmod +x main
	./main

test:
	chmod +x guessitTest
	./guessitTest

clean:
	rm -rf *.o main painterTest

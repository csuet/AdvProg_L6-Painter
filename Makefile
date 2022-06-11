LIBFLAGS = -lmingw32 -lSDL2main -lSDL2
all:
	g++ -std=c++17 -Isrc/include -Lsrc/lib -c utils.cpp $(LIBFLAGS)
	g++ -std=c++17 -Isrc/include -Lsrc/lib -c painter.cpp $(LIBFLAGS)
	g++ -std=c++17 -Isrc/include -Lsrc/lib -c main.cpp $(LIBFLAGS)
	g++ -std=c++17 -Isrc/include -Lsrc/lib utils.o  painter.o main.o -o main $(LIBFLAGS)
	g++ -std=c++17 -Isrc/include -Lsrc/lib -c painterTest.cpp $(LIBFLAGS)
	g++ -std=c++17 -Isrc/include -Lsrc/lib utils.o  painter.o painterTest.o  -lcppunit -o painterTest $(LIBFLAGS)
run:
	chmod +x main
	./main

test:
	chmod +x painterTest
	./painterTest

clean:
	rm -rf *.o main painterTest

main.o:
	g++ -g main.cpp address.cpp date.cpp -o main.o

run:
	g++ -g main.cpp address.cpp date.cpp -o main.o
	./main.o

clean:
	rm *.o

valgrind: 
	valgrind ./main.o

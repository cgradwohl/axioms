output: main.o cow.o animal.o
	clang main.o cow.o animal.o -o myProgram

main.o: main.c
	clang -c main.c

cow.o: cow.c
	clang -c cow.c

animal.o: animal.c
	clang -c animal.c

clean:
	rm *.o myProgram
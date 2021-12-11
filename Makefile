open: open.o
	gcc open.o -o open
open.o: open.c
	gcc -c open.c
clean:
	rm -rf *.o

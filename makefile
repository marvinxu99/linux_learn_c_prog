all: use_math.o

use_math.o:
	gcc -Wall use_math.c -lm -o use_math.o

clean: 
	rm use_math.o

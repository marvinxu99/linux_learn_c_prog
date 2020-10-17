all: use_math

use_math: use_math.c
	gcc -Wall use_math.c -lm -o use_math.o

clean: 
	rm use_math.o

all: avg_temp

avg_temp: weather.o avg_temp.o
	gcc -std=c11 -Wall -fmax-errors=10 -Wextra -o avg_temp weather.o avg_temp.o

weather.o: weather.c
	gcc -std=c11 -Wall -fmax-errors=10 -Wextra -c -o weather.o weather.c

avg_temp.o: avg_temp.c weather.h
	gcc -std=c11 -Wall -fmax-errors=10 -Wextra -c -o avg_temp.o avg_temp.c

clean: 
	rm avg_temp *.o

gcc -c -o weatherstats.o weatherstats.c
gcc -c -o weatherio.o weatherio.c

ar rcs libweather.a weatherio.o weatherstats.o

gcc -std=c11 -Wall -fmax-errors=10 -Wextra -o avg_temp avg_temp.o -L. -lweather


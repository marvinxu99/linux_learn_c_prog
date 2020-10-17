#include <stdio.h>

// and header file weather.h:
double averageTemp(double *temps, int numOfTemps);

// source file weather.c:
double averageTemp(double *temps, int numOfTemps) {
	double result = 0.0;
	int i;
	for (i=0; i<numOfTemps; i++) {
		result = result + temps[i];
	}
	result = result / (double) numOfTemps;
	return result;
}

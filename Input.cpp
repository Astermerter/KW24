#include "Input.h"
#include <cstdio>

void Inp_X_and_Y_arr(float* x, float* y, int* n, FILE* fl)
{
	float buf;

	while (fscanf_s(fl, "%f", &buf) != EOF)
	{
		*(x + *n) = buf;
		fscanf_s(fl, "%f", &buf);
		*(y + *n) = buf;
		(*n)++;
	}
}
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

char singUpTheNode(float* mainArr, float* x, float* y, int* n)
{
	*n = *(mainArr + 1);

	for (int i = 0; i < *n; i += 2)
	{
		*(x + (i / 2)) = *(mainArr + 2 + i);
		*(y + (i / 2)) = *(mainArr + 3 + i);
	}

	if (*mainArr == 1)
	{
		return 'L';
	}
	if (*mainArr == 2)
	{
		return 'S';
	}
	if (*mainArr == 3)
	{
		return 'K';
	}
	return 'E';
}
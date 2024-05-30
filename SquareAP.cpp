#include "OtherFunc.h"
#include "SquareAP.h"

void AddInfInAllArr(float* x, float* y, int n, float *A_arr, float *B_arr, float *C_arr)
{

	for (int i = 0; i < n - 2; i++)
	{
		*(A_arr + i) = find_Av_a(*x, *y, *(x + 1), *(y + 1), *(x + 2), *(y + 2));
		*(B_arr + i) = find_Av_b(*x, *y, *(x + 1), *(y + 1), *(x + 2), *(y + 2));
		*(C_arr + i) = find_Av_c(*x, *y, *(x + 1), *(y + 1), *(x + 2), *(y + 2));
	}
}

int find_Av_a(float x1, float y1, float x2, float y2, float x3, float y3)
{
	float A;

	A = y1 / ((x1 - x2) * (x1 - x3)) + y2 / ((x2 - x1) * (x2 - x3)) + y3 / ((x3 - x1) * (x3 - x2));

	return A;
}

int find_Av_b(float x1, float y1, float x2, float y2, float x3, float y3)
{
	float B;

	B = y1 * (-x2 - x3) / ((x1 - x2) * (x1 - x3)) + y2 * (-x1 - x3) / ((x2 - x1) * (x2 - x3)) + y3 * (-x1 - x2) / ((x3 - x1) * (x3 - x2));

	return B;
}

int find_Av_c(float x1, float y1, float x2, float y2, float x3, float y3)
{
	float C;

	C = y1 * x3 * x2 / ((x1 - x2) * (x1 - x3)) + y2 * x1 * x3 / ((x2 - x1) * (x2 - x3)) + y3 * x1 * x2 / ((x3 - x1) * (x3 - x2));

	return C;
}

float return_Av_N(float* N, float n)
{
	float AV_N=0;

	for (int i = 0; i < n-1; i++)
	{
		AV_N += *(N + i);
	}
	AV_N / (n - 2);

	return AV_N;
}
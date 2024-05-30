#include "OtherFunc.h";
#include "KubAP.h"

void AddInfInAllArr(float* x, float* y, int n, float* A_arr, float* B_arr, float* C_arr, float* D_arr)
{

	for (int i = 0; i < n - 3; i++)
	{
		*(A_arr + i) = find_Av_a(*x, *y, *(x + 1), *(y + 1), *(x + 2), *(y + 2), *(x + 3), *(y + 3));
		*(B_arr + i) = find_Av_b(*x, *y, *(x + 1), *(y + 1), *(x + 2), *(y + 2), *(x + 3), *(y + 3));
		*(C_arr + i) = find_Av_c(*x, *y, *(x + 1), *(y + 1), *(x + 2), *(y + 2), *(x + 3), *(y + 3));
		*(D_arr + i) = find_Av_d(*x, *y, *(x + 1), *(y + 1), *(x + 2), *(y + 2), *(x + 3), *(y + 3));
	}
}

int find_Av_a(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4)
{
	float A;

	A = y1 / ((x1 - x2) * (x1 - x3) * (x1 - x4)) + y2 / ((x2 - x1) * (x2 - x3) * (x2 - x4)) + y3 / ((x3 - x2) * (x3 - x1) * (x3 - x4)) + y4 / ((x4 - x2) * (x4 - x3) * (x4 - x1));

	return A;
}

int find_Av_b(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4)
{
	float B;

	B = y1*(-x2-x3-x4) / ((x1 - x2) * (x1 - x3) * (x1 - x4)) + y2 * (-x1 - x3 - x4) / ((x2 - x1) * (x2 - x3) * (x2 - x4)) + y3 * (-x2 - x1 - x4) / ((x3 - x2) * (x3 - x1) * (x3 - x4)) + y4 * (-x2 - x3 - x1) / ((x4 - x2) * (x4 - x3) * (x4 - x1));

	return B;
}

int find_Av_c(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4)
{
	float C;

	C = y1 * (x2 * x3 + x2 * x4 + x3 * x4) / ((x1 - x2) * (x1 - x3) * (x1 - x4)) + y2 * (x1 * x3 + x1 * x4 + x3 * x4) / ((x2 - x1) * (x2 - x3) * (x2 - x4)) + y3 * (x1 * x2 + x1 * x4 + x2 * x4) / ((x3 - x2) * (x3 - x1) * (x3 - x4)) + y4 * (x1 * x3 + x1 * x2 + x3 * x2) / ((x4 - x2) * (x4 - x3) * (x4 - x1));

	return C;
}
int find_Av_d(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4)
{
	float C;

	C = y1 * (-x2*x3*x4) / ((x1 - x2) * (x1 - x3) * (x1 - x4)) + y2 * (-x1 * x3 * x4) / ((x2 - x1) * (x2 - x3) * (x2 - x4)) + y3 * (-x2 * x1 * x4) / ((x3 - x2) * (x3 - x1) * (x3 - x4)) + y4 * (-x2 * x3 * x1) / ((x4 - x2) * (x4 - x3) * (x4 - x1));

	return C;
}

float return_Av_N1(float* N, float n)
{
	float AV_N=0;

	for (int i = 0; i < n - 2; i++)
	{
		AV_N += *(N + i);
	}
	AV_N / (n - 2);

	return AV_N;
}
#include "OtherFunc.h"
#include "SquareAP.h"

float find_P(float x, float y)
{
	if (x == 0 || y == 0)
		return 0;
	return (y) / (x * x);
}

void AddInf_In_ParrC_Parr(float* x, float* y, int n, float *Parr, int* C_Parr, int * C_P)
{
	float P_buf;
	for (int i = 0; i < n; i++)
	{
		P_buf = find_P(*(x + i), *(y + i));
		if (ifNum_notBe_inArr(Parr, (*C_P)+1, P_buf))
		{
			*(Parr + *(C_P)) = P_buf;
			*(C_Parr + *(C_P)) += 1;
			(*C_P)++;
		}
		else
		{
			*(C_Parr + findIndex_inArr(Parr, *C_P, P_buf)) += 1;
		}
	}
}

float ReturnP_Av(float* x, float* y, int n)
{
	float Parr[lmax];
	int C_Parr[lmax], C_P = 0;

	clear_arr_int(C_Parr, lmax);

	AddInf_In_ParrC_Parr(x, y, n, Parr, C_Parr, &C_P);

	return findAverage(Parr, C_Parr, C_P);
}
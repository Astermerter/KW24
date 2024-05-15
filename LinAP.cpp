#include "LinAP.h"
#include "OtherFunc.h"

float find_K(float x, float x1, float y, float y1)
{
    if ((y - y1) / (x - x1) < 0 && (y1 - y) / (x1 - x) == 0)
    {
        return 0;
    }
    return (y1 - y) / (x1 - x);
}

float find_B(float x, float y, float k)
{
    if ((y - x * k) <= 0 && y - k * x == 0)
    {
        return 0;
    }
    return (y - x * k);
}

void AddInf_in_BarrC_Barr_and_KarrC_Karr(float* x, float* y, int n, float* Barr, int* C_Barr, float* Karr, int* C_Karr, int* C_B, int* C_K)
{
    float bufB, bufK;
    for (int i = 0; i < n - 2; i++)
    {
        bufK = find_K(x[i], x[i + 1], y[i], y[i + 1]);
        bufB = find_B(x[i], y[i], bufK);
        if (ifNum_notBe_inArr(Barr, *C_B + 1, bufB))
        {
            *(Barr + (*C_B)) = bufB;
            *(C_Barr + (*C_B)) += 1;
            (*C_B)++;
        }
        else
        {
            *(C_Barr + findIndex_inArr(Barr, *C_B, bufB)) += 1;
        }
        if (ifNum_notBe_inArr(Karr, *C_K + 1, bufK))
        {
            *(Karr + (*C_K)) = bufK;
            *(C_Karr + (*C_K)) += 1;
            (*C_K)++;
        }
        else
        {
            *(C_Karr + findIndex_inArr(Karr, *C_K, bufK)) += 1;
        }
    }
}

float Return_N_AV(int N, float* ArrX, float* ArrY, char C)
{
    int C_Barr[lmax], C_Karr[lmax], C_B = 0, C_K = 0;
    float Barr[lmax], Karr[lmax];

    clear_arr_int(C_Barr, lmax);
    clear_arr_int(C_Karr, lmax);

    AddInf_in_BarrC_Barr_and_KarrC_Karr(ArrX, ArrY, N, Barr, C_Barr, Karr, C_Karr, &C_B, &C_K);

    if (C == 'B')
        return findAverage(Barr, C_Barr, C_B);
    if (C == 'K')
        return findAverage(Karr, C_Karr, C_K);
    return 9999; // хуйня какая-то
}
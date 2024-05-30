#include "OtherFunc.h"
#include <math.h>

void clear_arr_int(int* arr, int lenarr)
{
    for (int i = 0; i < lenarr; i++)
    {
        *(arr + i) = 0;
    }
}

void clear_arr_float(float* arr, int lenarr)
{
    for (int i = 0; i < lenarr; i++)
    {
        *(arr + i) = 0;
    }
}

bool ifNum_notBe_inArr(float* arr, int lenarr, float Num)
{
    for (int i = 0; i < lenarr; i++)
    {
        if (*(arr + i) == Num)
            return false;
    }
    return true;
}

int findIndex_inArr(float* arr, int lenarr, float num)
{
    for (int i = 0; i < lenarr; i++)
    {
        if (*(arr + i) == num)
        {
            return i;
        }
    }
    return -1;
}

float getMAX(float a, float b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

float getMIN(float a, float b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

bool ifSomethingStrange_inArr(float* Arr, int lenarr)
{
    for (int i = 0; i < lenarr-1; i++)
    {
        for (int j = i + 1; j < lenarr; j++)
        {
            if (getMAX(fabs(*(Arr + i)), fabs(*(Arr + j))) - getMIN(fabs(*(Arr + i)), fabs(*(Arr + j))) > getMIN(fabs(*(Arr + i)), fabs(*(Arr + j))) * 2)
            {
                return true;
            }
        }
    }
    return false;
}

float AddIndx_InArrStrangeIndx_if_SomethingStrange_inArr(float* Arr, int lenarr, int* ArrStrangeIndx, int* lenarr2)
{
    for (int i = 0; i < lenarr - 1; i++)
    {
        for (int j = i + 1; j < lenarr; j++)
        {
            if (getMAX(fabs(*(Arr + i)), fabs(*(Arr + j))) - getMIN(fabs(*(Arr + i)), fabs(*(Arr + j))) > getMIN(fabs(*(Arr + i)), fabs(*(Arr + j))) * 2)
            {
                if (getMAX(fabs(*(Arr + i)), fabs(*(Arr + j))) != getMAX(*(Arr + i), *(Arr + j)))
                {
                    //*(ArrStrangeIndx+ *lenarr2) = 
                }
            }
        }
    }
    return 0;

}

float findAverage(float* Arr, int* C_Arr, int lenarr)
{
    float buf = 0;
    int C_buf = 0;

    for (int i = 0; i < lenarr; i++)
    {
        C_buf += *(C_Arr + i);
        buf += (*(Arr + i)) * (*(C_Arr + i));
    }
    return buf / C_buf;
}

int normalization_Arr(float* x, float * y, int n)
{
    int i = 0, j =0;
    while (i < n-1)
    {
        if ((*(x + i) - *(x + i + 1)) > *(x + i) * 0.1 || (*(y + i) - *(y + i + 1)) > *(y + i) * 0.1 )
        {
            j = i;
            while (j < n - 1)
            {
                *(x + j) = *(x + j + 1);
                *(y + j) = *(y + j + 1);
                j++;
            }
            n -= 1;
        }
        else
            i++;
    }
    return n;
}

void strongNormalization(float* x, float* y, int* n, int FLAP)
{
    if (FLAP == 2)
    {
        float A[3], B[3];

        A[0] = x[0];
        B[0] = y[0];
        A[2] = x[(*n) - 1];
        B[2] = y[(*n) - 1];

        float buf = y[0];
        int ibuf = 0;
        if (y[0] > y[(*(n)) / 2])
        {
            for (int i = 0; i < *n; i++)
            {
                if (buf > y[i])
                {
                    buf = y[i];
                    ibuf = i;
                }
            }
        }
        else
        {
            for (int i = 0; i < *n; i++)
            {
                if (buf > y[i])
                {
                    buf = y[i];
                    ibuf = i;
                }
            }
        }
        
        A[1] = x[ibuf];
        B[1] = y[ibuf];

        x[0] = A[0];
        y[0] = B[0];
        x[1] = A[1];
        y[1] = B[1];
        x[2] = A[2];
        y[2] = B[2];
        *(n) = 3;
    }
    else if (FLAP == 3)
    {
        float A[4], B[4];

        A[0] = x[0];
        B[0] = y[0];
        A[3] = x[(*n) - 1];
        B[3] = y[(*n) - 1];

        A[1] = x[(*n) / 3];
        B[1] = y[(*n) / 3];
        A[2] = x[(*n) * 2 / 3];
        B[2] = y[(*n) * 2 / 3];

        x[0] = A[0];
        y[0] = B[0];
        x[1] = A[1];
        y[1] = B[1];
        x[2] = A[2];
        y[2] = B[2];
        x[3] = A[3];
        y[3] = B[3];
        *(n) = 4;
    }
}
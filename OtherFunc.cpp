#include "OtherFunc.h"
#include <math.h>

void clear_arr_int(int* arr, int lenarr)
{
    for (int i = 0; i < lenarr; i++)
    {
        *(arr + i) = 0;
    }
}

//void clear_arr_float(float* arr, int lenarr)
//{
//    for (int i = 0; i < lenarr; i++)
//    {
//        *(arr + i) = 0;
//    }
//}

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


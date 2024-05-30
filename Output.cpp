#include "Output.h"
#include <cstdio>
void Write_SquareAP_Output_Dots(FILE* fl, float a, float b, float c)
{
    /*float x = -10;
    float y = a * x * x + b * x + c;
    fprintf_s(fl, "%f ", x);
    fprintf_s(fl, "%f\n", y);

    for (int i = -99; i < 100; i++)
    {
        x = x + 0.1;
        y = a * x * x + b * b + c;
        fprintf_s(fl, "%f ", x);
        fprintf_s(fl, "%f\n", y);
    }*/
    fprintf(fl, "%f ", a);
    fprintf(fl, "%f ", b);
    fprintf(fl, "%f ", c);
}

void Write_LineAP_Output_Dots(FILE* fl, float k, float b)
{
    /*float x = -10;
    float y = k * x + b;
    fprintf_s(fl, "%f ", x);
    fprintf_s(fl, "%f\n", y);

    for (int i = -99; i < 100; i++)
    {
        x = x + 0.1;
        y = k * x + b;
        fprintf_s(fl, "%f ", x);
        fprintf_s(fl, "%f\n", y);
    }*/
    fprintf(fl, "%f ", k);
    fprintf(fl, "%f ", b);
}

void Write_KubAP_Output_Dots(FILE* fl, float a, float b, float c, float d)
{
    /*float x = -10;
    float y = a * x * x * x + b * x * x + c * x + d;
    fprintf_s(fl, "%f ", x);
    fprintf_s(fl, "%f\n", y);

    for (int i = -99; i < 100; i++)
    {
        x = x + 0.1;
        y = a * x * x * x + b * x * x + c * x + d;
        fprintf_s(fl, "%f ", x);
        fprintf_s(fl, "%f\n", y);
    }*/
    fprintf(fl, "%f ", a);
    fprintf(fl, "%f ", b);
    fprintf(fl, "%f ", c);
    fprintf(fl, "%f ", d);
}

float* writeOutArr(float a, float b)
{
    float arr[2] = { a, b };

    return arr;
}
float* writeOutArr(float a, float b, float c)
{
    float arr[3] = { a, b, c };

    return arr;
}
float* writeOutArr(float a, float b, float c, float d)
{
    float arr[4] = { a, b, c, d };

    return arr;
}
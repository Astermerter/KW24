#include "Output.h"
#include <cstdio>

void Write_KubAP_Output_Dots(FILE* fl, float p)
{
	float x = -10;
	float y = p * x * x;
	fprintf_s(fl, "%f ", x);
	fprintf_s(fl, "%f\n", y);

	for (int i = -99; i < 100; i++)
	{
		x = x + 0.1;
		y = p * x * x;
		fprintf_s(fl, "%f ", x);
		fprintf_s(fl, "%f\n", y);
	}
}

void Write_LineAP_Output_Dots(FILE* fl, float k, float b)
{
	float x = -10;
	float y = k * x + b;
	fprintf_s(fl, "%f ", x);
	fprintf_s(fl, "%f\n", y);

	for (int i = -99; i < 100; i++)
	{
		x = x + 0.1;
		y = k * x + b;
		fprintf_s(fl, "%f ", x);
		fprintf_s(fl, "%f\n", y);
	}
}
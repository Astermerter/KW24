#ifndef Output
#define Output

#include <cstdio>

// ������� ��� ������ ����� ��� ������ ����� �������������
void Write_SquareAP_Output_Dots(FILE* fl, float a, float b, float c); //
void Write_KubAP_Output_Dots(FILE* fl, float a, float b, float c, float d); // 
void Write_LineAP_Output_Dots(FILE* fl, float k, float b); // 
float* writeOutArr(float a, float b); // ������� ������� ���������� ��������� �� ������ �� 2 �������������
float* writeOutArr(float a, float b, float c); // ������� ������� ���������� ��������� �� ������ �� 3 �������������
float* writeOutArr(float a, float b, float c, float d); // ������� ������� ���������� ��������� �� ������ �� 4 �������������

#endif // !Output

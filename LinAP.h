#ifndef LinAP
#define LinAP

float find_K(float x, float x1, float y, float y1); // ������ ���������� ���������� k �� y=kx+b
float find_B(float x, float y, float k);// ������ ���������� ���������� b �� y=kx+b
void AddInf_in_BarrC_Barr_and_KarrC_Karr(float* x, float* y, int n, float* Barr, int* C_Barr, float* Karr, int* C_Karr, int* C_B, int* C_K); // ��������� 4 ��������, ���� � �������������� k, ������ �� ���������� ���� ��� �����������. ��� �� � ��� �������� � b
float Return_N_AV(int N, float* ArrX, float* ArrY, char C); // ������� �������� ���������� b ��� k, �� �������� �������� � �� ����������

#endif // !LinAP

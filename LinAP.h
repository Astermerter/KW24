#ifndef LinAP
#define LinAP

float find_K(float x, float x1, float y, float y1); // фунция нахождения коэфицента k из y=kx+b
float find_B(float x, float y, float k);// фунция нахождения коэфицента b из y=kx+b
void AddInf_in_BarrC_Barr_and_KarrC_Karr(float* x, float* y, int n, float* Barr, int* C_Barr, float* Karr, int* C_Karr, int* C_B, int* C_K); // заполняет 4 массивов, один с коэффициентами k, другой их количество если они повторяются. Так же и для массивов с b
float Return_N_AV(int N, float* ArrX, float* ArrY, char C); // среднне значение коэфицента b или k, по массивам значений и их количества

#endif // !LinAP

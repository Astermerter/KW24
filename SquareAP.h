#ifndef SquareAP
#define SquareAP

float find_P(float x, float y); // найти коэффициент p их формулы y=px^2
void AddInf_In_ParrC_Parr(float* x, float* y, int n, float* Parr, int* C_Parr, int* C_P); // заполн€ет 2 массивов, один с коэффициентами p, другой их количество если они повтор€ютс€
float ReturnP_Av(float* x, float* y, int n); // простое нахождение среднего по массивам из вышесто€щей функции

#endif // !SquareAP

#ifndef SquareAP
#define SquareAP

void AddInfInAllArr(float* x, float* y, int n, float* A_arr, float* B_arr, float* C_arr); // Функция, которая записывает все коэффициенты в массивы
int find_Av_a(float x1, float y1, float x2, float y2, float x3, float y3); // функция, которая находит коэффициент a
int find_Av_b(float x1, float y1, float x2, float y2, float x3, float y3); // функция, которая находит коэффициент b
int find_Av_c(float x1, float y1, float x2, float y2, float x3, float y3); // функция, которая находит коэффициент c
float return_Av_N(float* N, float n); // Функция, которая находит среднее по массиву

#endif // !SquareAP

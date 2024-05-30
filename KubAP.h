#ifndef KubAP
#define KubAP

void AddInfInAllArr(float* x, float* y, int n, float* A_arr, float* B_arr, float* C_arr, float* D_arr); //функция, которая записывает все коэффиценты в массивы
int find_Av_a(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4); // функция которая находит коэфицент a
int find_Av_b(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4); // функция которая находит коэфицент b
int find_Av_c(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4); // функция которая находит коэфицент c
int find_Av_d(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4); // функция которая находит коэфицент d
float return_Av_N1(float* N, float n); // функция которая находит среднее по массиву 


#endif // !KubAP

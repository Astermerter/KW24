#ifndef Output
#define Output

#include <cstdio>

// функции для вывода точек для разных видов аппроксимации
void Write_SquareAP_Output_Dots(FILE* fl, float a, float b, float c); //
void Write_KubAP_Output_Dots(FILE* fl, float a, float b, float c, float d); // 
void Write_LineAP_Output_Dots(FILE* fl, float k, float b); // 
float* writeOutArr(float a, float b); // функция которая возвращает указатель на массив из 2 коэффициентов
float* writeOutArr(float a, float b, float c); // функция которая возвращает указатель на массив из 3 коэффициентов
float* writeOutArr(float a, float b, float c, float d); // функция которая возвращает указатель на массив из 4 коэффициентов

#endif // !Output

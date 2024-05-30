#ifndef Input
#define Input

#include <cstdio>

// функция(ии) для ввода данных в программу

void Inp_X_and_Y_arr(float* x, float* y, int* n, FILE* fl); // записывает точки из файла Dots.txt в этой дерриктории
char singUpTheNode(float* mainArr, float* x, float* y, int* n); // Обрабатывает приходящие данные. Записывает тип аппроксимации, количество точек и точки по переменным

#endif // !Input

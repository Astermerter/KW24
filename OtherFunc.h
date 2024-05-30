#ifndef OtherFunc
#define OtherFunc
#define lmax 100

void clear_arr_int(int* arr, int lenarr);  // делаем весь массив int нулями [0,0,0,0, ... ,0]
bool ifNum_notBe_inArr(float* arr, int lenarr, float Num); // True если числа Num нет в массиве arr, false в ином случае
int findIndex_inArr(float* arr, int lenarr, float num); // возвращает индекс числа num в массиве arr
float getMAX(float a, float b); // максимальное между 2 числами 
float getMIN(float a, float b); // минимальное среди 2 чисел
bool ifSomethingStrange_inArr(float* Arr, int lenarr); // недоработанная часть функционала которая должна сглаживать итоговый результат аппроксимации
float AddIndx_InArrStrangeIndx_if_SomethingStrange_inArr(float* Arr, int lenarr, int* ArrStrangeIndx, int* lenarr2); // недоработанная часть функционала которая должна сглаживать итоговый результат аппроксимации
float findAverage(float* Arr, int* C_Arr, int lenarr); // находит среднее по массиву значений и массиву количества и значений (arr1 =[1,2,3], C_arr2 =[1,0,2] - значит в массиве arr1 одна единица и две тройки)
int normalization_Arr(float* x, float* y, int n); // функция, которая стирает слишком близко стоящие точки, чтобы аппроксимация была точнее
void strongNormalization(float* x, float* y, int* n, int FLAP); // сильная нормализация


#endif // !OtherFunc

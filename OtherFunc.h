#ifndef OtherFunc
#define OtherFunc
#define lmax 100

void clear_arr_int(int* arr, int lenarr);  // ������ ���� ������ int ������ [0,0,0,0, ... ,0]
bool ifNum_notBe_inArr(float* arr, int lenarr, float Num); // True ���� ����� Num ��� � ������� arr, false � ���� ������
int findIndex_inArr(float* arr, int lenarr, float num); // ���������� ������ ����� num � ������� arr
float getMAX(float a, float b); // ������������ ����� 2 ������� 
float getMIN(float a, float b); // ����������� ����� 2 �����
bool ifSomethingStrange_inArr(float* Arr, int lenarr); // �������������� ����� ����������� ������� ������ ���������� �������� ��������� �������������
float AddIndx_InArrStrangeIndx_if_SomethingStrange_inArr(float* Arr, int lenarr, int* ArrStrangeIndx, int* lenarr2); // �������������� ����� ����������� ������� ������ ���������� �������� ��������� �������������
float findAverage(float* Arr, int* C_Arr, int lenarr); // ������� ������� ����� 2 �������� ���������� ������


#endif // !OtherFunc
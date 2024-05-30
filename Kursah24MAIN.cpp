#include "AP_LIB.h"

#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;



int main()
{
    float X[1000], Y[1000];
    int n = 0;
    
    float mainArr[1000];

    //ofstream fl1("Dots.txt", ios::beg);

    FILE* fl;
    fopen_s(&fl, "Dots.txt", "r");

    int FLAP;
    fscanf_s(fl, "%d", &FLAP);

    Inp_X_and_Y_arr(X, Y, &n, fl);

    strongNormalization(X, Y, &n, FLAP);

    FILE* fl2;
    fopen_s(&fl2, "output_dots.txt", "w");

    

    if (FLAP == 2)
    {
        float A[1000], B[1000], C[1000];
        AddInfInAllArr(X, Y, n, A, B, C);
        // writeOutArr(return_Av_N(A, n - 2), return_Av_N(B, n - 2), return_Av_N(C, n - 2));
        Write_SquareAP_Output_Dots(fl2, return_Av_N(A, n - 2), return_Av_N(B, n - 2), return_Av_N(C, n - 2));
    }
    if (FLAP == 1)
    {
        writeOutArr(Return_N_AV(n, X, Y, 'K'), Return_N_AV(n, X, Y, 'B'));
        // cout << "y = " << Return_N_AV(n, X, Y, 'K') << "x + " << Return_N_AV(n, X, Y, 'B') << endl;
        Write_LineAP_Output_Dots(fl2, Return_N_AV(n, X, Y, 'K'), Return_N_AV(n, X, Y, 'B'));
    }   
    if (FLAP == 3)
    {
        float A[1000], B[1000], C[1000], D[1000];
        AddInfInAllArr(X, Y, n, A, B, C, D);
        // writeOutArr(return_Av_N1(A, n - 3), return_Av_N1(B, n - 3), return_Av_N1(C, n - 3), return_Av_N1(D, n-3));
        Write_KubAP_Output_Dots(fl2, return_Av_N1(A, n - 3), return_Av_N1(B, n - 3), return_Av_N1(C, n - 3), return_Av_N1(D, n - 3));
    }

    fclose(fl2);
    fclose(fl);

    return 0;
}

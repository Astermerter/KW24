#include "AP_LIB.h"

#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

int main()
{
    float X[100], Y[100];
    int n = 0;
    
    //ofstream fl1("Dots.txt", ios::beg);

    FILE* fl;
    fopen_s(&fl, "Dots.txt", "r");

    Inp_X_and_Y_arr(X, Y, &n, fl);

    FILE* fl2;
    fopen_s(&fl2, "output_dots.txt", "w");

    char FLAP;
    cout << "Write witch AP do you want (first litter K or L)"<<endl;
    cin >> FLAP;

    if (FLAP == 'K')
    {
        cout << "y = " << ReturnP_Av(X, Y, n)<< "x" << endl;
        Write_KubAP_Output_Dots(fl2, ReturnP_Av(X, Y, n));
    }
    if (FLAP == 'L')
    {
        cout << "y = " << Return_N_AV(n, X, Y, 'K') << "x + " << Return_N_AV(n, X, Y, 'B') << endl;
        Write_LineAP_Output_Dots(fl2, Return_N_AV(n, X, Y, 'K'), Return_N_AV(n, X, Y, 'B'));
    }

    fclose(fl2);
    fclose(fl);

    return 0;
}

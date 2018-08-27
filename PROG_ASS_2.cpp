/*
*AUTHOR : <Czr B. Correo>
*DATE : <July 27,2018>
*MODULE NAME <DISTANCE FORMULA OF A TWO POINTS>
*DESCRIPTION <getting the distance of the two points>
*ARGUMENTS <"None">
*RETURNS <"None">
*NOTE <>
*CHANGE HISTORY <>
*/
#include <cmath>
#include <iostream>
using namespace std;
int main ()
{
    
    int X1;
    int X2;
    int Y1;
    int Y2;
   
    
    float A;
    float B;
    float C;
    float D;
    float E;
    float F;
   
    //Prompt the user to enter an integers
    cout << " Enter your x1:";
    cin >> X1;
    cout << " Enter your x2:";
    cin >> X2;
    cout << " Enter your y1:";
    cin >> Y1;
    cout << " Enter your y2:";
    cin >> Y2;
    
    //Process
    A = (X2-X1);
    B = (A*A);
    C = (Y2-Y1);
    D = (C*C);
    E = (B+D);
    
    F = sqrt (E);
    
    //result
    cout << "\n ANSWER:" << F;
    
    return 0;

}
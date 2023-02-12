#ifndef BINMUL_H     // <<<<<<<<< Note these preprocessor conditions
#define  BINMUL_H 
#include <iostream>
#include <vector>
#include <math.h>
#include <string>
#include "BinaryUtils.h"
using namespace std;

void mul(vector<int> a, vector<int> b,int REPRESENTATION){
    /*
    Multiplication function
    
    Parameters:
    a(INTEGER) -> first integer in a decimal form
    b(INTEGER) -> second integer in a decimal form

    Returns: Prints the result of a * b in first 32-bit binary form 
    and then in a decimal form.
    */
    vector<int> c(REPRESENTATION);
    int l=0,k=0;
    int j=0;
    for(int i=REPRESENTATION-1;i>=0;i--)
    {
        l+=(pow(2,j)*a[i]);
        j++;
    }
    j=0;
    for(int i=REPRESENTATION-1;i>=0;i--)
    {
        k+=(pow(2,j)*b[i]);
        j++;
    }
    DecimalToBinary(c,l*k,REPRESENTATION);
    cout << "Result in binary\n";
    PrintBinary(c,REPRESENTATION);

    //Function to print result in decimal
    cout << "Result in Decimal\n";
    cout << l*k << endl;

}

#endif
#ifndef BINMUL_H     // <<<<<<<<< Note these preprocessor conditions
#define  BINMUL_H 
#include <iostream>
#include <vector>
#include <math.h>
#include <string>
#include "BinaryUtils.h"
using namespace std;

//function to multiply two binary arrays
void mul(vector<int> a, vector<int> b,int REPRESENTATION,vector<int> &result){
    /*
    Multiplication function
    
    Parameters:
    a(INTEGER) -> first integer in a decimal form
    b(INTEGER) -> second integer in a decimal form

    Returns: Prints the result of a * b in first 32-bit binary form 
    and then in a decimal form.
    */
    // vector<int> c(REPRESENTATION);
    int firstNum=0,secondNum=0;
    int index=0;
    for(int i=REPRESENTATION-1;i>=0;i--)
    {
        firstNum+=(pow(2,index)*a[i]);
        index++;
    }
    index=0;
    for(int i=REPRESENTATION-1;i>=0;i--)
    {
        secondNum+=(pow(2,index)*b[i]);
        index++;
    }
    DecimalToBinary(result,firstNum*secondNum,REPRESENTATION);
}

#endif
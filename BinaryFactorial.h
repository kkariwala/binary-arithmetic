#ifndef BINFAC_H     // <<<<<<<<< Note these preprocessor conditions
#define  BINFAC_H 
#include <iostream>
#include <vector>
#include <math.h>
#include <string>
#include "BinaryMultiplication.h"
#include "BinarySubtract.h"
using namespace std;
//function to find factorial of a number
void factorial(vector<int> a, int REPRESENTATION,vector<int> &result){
    /*
    Power function
    
    Parameters:
    a(INTEGER) -> first integer in a decimal form
    b(INTEGER) -> second integer in a decimal form

    Returns: Prints the result of a ^ b in first 32-bit binary form 
    and then in a decimal form.
    */

    // check dividend == 0

    vector<int> v(a);
    int itr = BinaryToDecimal(a,REPRESENTATION) - 1;
    while(itr){
        vector<int> temp(REPRESENTATION);
        DecimalToBinary(temp,itr,REPRESENTATION); //converting decomal to binary
        mul(v,temp,REPRESENTATION,v); // finding the factorial by constant multiplication
        itr--;
    }
    result.assign(v.begin(),v.end());
}

#endif
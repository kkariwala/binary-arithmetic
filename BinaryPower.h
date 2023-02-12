#ifndef BINPOW_H     // <<<<<<<<< Note these preprocessor conditions
#define  BINPOW_H 
#include <iostream>
#include <vector>
#include <math.h>
#include <string>
#include "BinaryUtils.h"
#include "BinaryMultiplication.h"
using namespace std;

// function to compute power of two binary numbers
void power(vector<int> a, vector<int> b, int REPRESENTATION,vector<int> &result){
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
    int exponent = BinaryToDecimal(b,REPRESENTATION);
    if(exponent < 0){
        return;
    }
    for(int index = 1; index< exponent;index++){
        mul(v,a,REPRESENTATION,v);
    }
    result.assign(v.begin(),v.end());
}

#endif
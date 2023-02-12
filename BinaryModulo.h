#ifndef BINMOD_H     // <<<<<<<<< Note these preprocessor conditions
#define  BINMOD_H 
#include <iostream>
#include <vector>
#include <math.h>
#include <string>
#include "BinaryUtils.h"
#include "BinaryDivision.h"
#include "BinaryMultiplication.h"
#include "BinarySubtract.h"
using namespace std;

//creating afunction to find modulo of the two binary arrays
void modulo(vector<int> a, vector<int> b, int REPRESENTATION,vector<int> &result){
    /*
    Power function
    
    Parameters:
    a(INTEGER) -> first integer in a decimal form
    b(INTEGER) -> second integer in a decimal form

    Returns: Prints the result of a ^ b in first 32-bit binary form 
    and then in a decimal form.
    */

    // check dividend == 0

    vector<int> v(REPRESENTATION,0);
    vector<int> v1(REPRESENTATION,0);
    divide(a,b,REPRESENTATION,v); //dividing two binary arrays
    mul(b,v,REPRESENTATION,v1); 
    sub(a,v1,REPRESENTATION,result);
}

#endif
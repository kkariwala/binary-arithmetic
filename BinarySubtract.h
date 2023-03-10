#ifndef BINSUB_H     // <<<<<<<<< Note these preprocessor conditions
#define  BINSUB_H 
#include <iostream>
#include <vector>
#include <math.h>
#include <string>
#include "BinaryUtils.h"
#include "BinaryAdd.h"

using namespace std;
// function to subtract two binary arrays
void sub(vector<int> a, vector<int> b,int REPRESENTATION,vector<int> &result){
    /*
    Subtraction function
    
    Parameters:
    a(binary array) -> first array in a binary form
    b(binary array) -> second array in a binary form

    Returns: Prints the result of a - b in first 32-bit binary form 
    and then in a decimal form.
    */
    //convert into 2's complement for negative number
    convertToTwoComplement(b,REPRESENTATION); // converting the second number to be subtracted in 2's complement
    add(a,b,REPRESENTATION,result); // adding the first binary array and 2's complement of the second array
}

#endif
#ifndef BINDIV_H     // <<<<<<<<< Note these preprocessor conditions
#define  BINDIV_H 
#include <iostream>
#include <vector>
#include <math.h>
#include <string>
#include "BinaryUtils.h"
using namespace std;

//function to divide two binary arrays
void divide(vector<int> a, vector<int> b, int REPRESENTATION,vector<int> &result){
    /*
    Division function
    
    Parameters:
    a(INTEGER) -> first integer in a decimal form
    b(INTEGER) -> second integer in a decimal form

    Returns: Prints the result of a / b in first 32-bit binary form 
    and then in a decimal form.
    */

    // check dividend == 0
    if(checkAllZero(b,REPRESENTATION)){
        cout << "Divide by 0, try again!\n";
        return;
    }
    //finding the dividend & divisor
    int dividend = BinaryToDecimal(a,REPRESENTATION);
    int divisor = BinaryToDecimal(b,REPRESENTATION);

    if(dividend < 0){
        convertToTwoComplement(a,REPRESENTATION);
    }
    if(divisor < 0){
        convertToTwoComplement(b,REPRESENTATION);
    }

    int dividendAbs = abs(dividend);
    int divisorAbs = abs(divisor);

    // get most significant bit of the operands
    int dividendAbs_msb = mostSignBit(a,REPRESENTATION);
    int divisorAbs_msb = mostSignBit(b,REPRESENTATION);

    int res = 0;
    // at this point, we basically do long division algorithm
    // ie the way it is taught in elementary school, but only with
    // binary nums instead of decimal
    for(int i = dividendAbs_msb - divisorAbs_msb; i >= 0; i--)
    {
        unsigned int divisorAbs_shift = divisorAbs << i; 
        if(divisorAbs_shift <= dividendAbs)
        {   
            dividendAbs -= divisorAbs_shift;
            res |= 1 << i;
        }   
    }

    // return result, taking into account the sign of the operands
    // if one was negative, add - sign to the result, which in terms
    // of second complement representaion used for negative numbers
    // simply means - convert result to second complement

    //Function to print result in the binary
    int decimalResult = (dividend ^ divisor) < 0 ? ~res + 1 : res;
    DecimalToBinary(result,decimalResult,REPRESENTATION);
}

#endif
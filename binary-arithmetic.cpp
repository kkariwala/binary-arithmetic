#ifndef BINARITHMETIC_H     // <<<<<<<<< Note these preprocessor conditions
#define  BINARITHMETIC_H 
#include <iostream>
#include <vector>
#include <math.h>
#include <string>
#include "BinaryUtils.h"
#include "BinaryAdd.h"
#include "BinarySubtract.h"
#include "BinaryMultiplication.h"

using namespace std;
#define REPRESENTATION 32

void division(vector<int> a, vector<int> b){
    /*
    Division function
    
    Parameters:
    a(INTEGER) -> first integer in a decimal form
    b(INTEGER) -> second integer in a decimal form

    Returns: Prints the result of a / b in first 32-bit binary form 
    and then in a decimal form.
    */
   cout << "Division Result \n";
}

int main(){
    int a, b;
    int operation;

    cout << "Enter the first integer\n";
    cin >> a;

    cout << "Enter the second integer\n";
    cin >> b;

    cout << "Enter the operation number (1 or 2 or 3 or 4)\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n";
    cin >> operation;

    vector<int> arrA(REPRESENTATION, 0);
    vector<int> arrB(REPRESENTATION, 0);

    /*
    Converting the numbers into individual binary arrays
    */
    DecimalToBinary(arrA,a,REPRESENTATION);
    DecimalToBinary(arrB,b,REPRESENTATION);
    
    cout << "Binary REPRESENTATION of Number 1\n";
    for(int i = 0 ; i< 32;i++){
        cout << arrA[i] << " ";
    }
    cout << endl;
    cout << "Binary REPRESENTATION of Number 2\n";
    for(int i = 0 ; i< 32;i++){
        cout << arrB[i] << " ";
    }
    cout << endl;

    switch (operation)
    {
    case 1:
        add(arrA,arrB,REPRESENTATION);
        break;
    case 2:
        sub(arrA,arrB,REPRESENTATION);
        break;
    case 3:
        mul(arrA,arrB,REPRESENTATION);
        break;
    case 4:
        division(arrA,arrB);
        break;    
    default:
        cout << "Kindly enter a number between 1 to 4 for the correct operation" << endl;
        break;
    }
    return 0;
}

#endif
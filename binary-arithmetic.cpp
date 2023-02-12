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
#include "BinaryDivision.h"
#include "BinaryPower.h"
#include "BinaryModulo.h"
#include "BinaryFactorial.h"

using namespace std;
#define REPRESENTATION 32

int main(){
    int a, b;
    int operation;

    cout << "Enter the operation number (1 or 2 or 3 or 4 or 5)\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Power\n6.Modulo\n7.Factorial\n";
    cin >> operation;

    cout << "Enter the first integer\n";
    cin >> a;

    cout << "Enter the second integer\n";
    cin >> b;


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

    vector<int> result(REPRESENTATION,0);

    switch (operation)
    {
    case 1:
        add(arrA,arrB,REPRESENTATION,result);
        break;
    case 2:
        sub(arrA,arrB,REPRESENTATION,result);
        break;
    case 3:
        mul(arrA,arrB,REPRESENTATION,result);
        break;
    case 4:
        divide(arrA,arrB,REPRESENTATION,result);
        break;
    case 5:
        power(arrA,arrB,REPRESENTATION,result); 
        break;
    case 6:
        modulo(arrA,arrB,REPRESENTATION,result);
        break;
    case 7:
        factorial(arrA,REPRESENTATION,result);
        break;   
    default:
        cout << "Kindly enter a number between 1 to 4 for the correct operation" << endl;
        break;
    }

    cout << "Printing Result in Binary\n";
    PrintBinary(result,REPRESENTATION);
    cout << "Printting Result in Decimal\n";
    cout << BinaryToDecimal(result,REPRESENTATION) << endl;
    return 0;
}

#endif
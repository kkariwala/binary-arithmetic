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

//taking the first integer as input and converting it into binary number
void input_one_integer(vector<int> &num){
    int firstNum;
    cout << "Enter the first integer\n";
    cin >> firstNum;
    DecimalToBinary(num, firstNum,REPRESENTATION);
    cout << "Binary REPRESENTATION of Number 1\n";
    PrintBinary(num,REPRESENTATION);
}

//taking the second integer as input and converting it into binary number
void input_two_integer(vector<int> &num1, vector<int> &num2){
    int firstNum, secondNum;
    cout << "Enter the first integer\n";
    cin >> firstNum;

    cout << "Enter the second integer\n";
    cin >> secondNum;

    DecimalToBinary(num1,firstNum,REPRESENTATION);
    DecimalToBinary(num2,secondNum,REPRESENTATION);

    cout << "Binary REPRESENTATION of Number 1\n";
    PrintBinary(num1,REPRESENTATION);
    cout << "Binary REPRESENTATION of Number 2\n";
    PrintBinary(num2,REPRESENTATION);
}

int main(){
    int a, b;
    int operation;

    cout << "Enter the operation number (1 or 2 or 3 or 4 or 5 or 6 or 7)\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Power\n6.Modulo\n7.Factorial\n";
    cin >> operation;

    vector<int> arrA(REPRESENTATION, 0);
    vector<int> arrB(REPRESENTATION, 0);
    vector<int> result(REPRESENTATION,0);
    //switch case to implement which function to implement
    switch (operation)
    {
    case 1:
        input_two_integer(arrA,arrB);
        add(arrA,arrB,REPRESENTATION,result);
        break;
    case 2:
        input_two_integer(arrA,arrB);
        sub(arrA,arrB,REPRESENTATION,result);
        break;
    case 3:
        input_two_integer(arrA,arrB);
        mul(arrA,arrB,REPRESENTATION,result);
        break;
    case 4:
        input_two_integer(arrA,arrB);
        divide(arrA,arrB,REPRESENTATION,result);
        break;
    case 5:
        input_two_integer(arrA,arrB);
        power(arrA,arrB,REPRESENTATION,result); 
        break;
    case 6:
        input_two_integer(arrA,arrB);
        modulo(arrA,arrB,REPRESENTATION,result);
        break;
    case 7:
        input_one_integer(arrA);
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
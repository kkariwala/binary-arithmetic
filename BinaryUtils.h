#ifndef BINUTILS_H     // <<<<<<<<< Note these preprocessor conditions
#define  BINUTILS_H 
#include <iostream>
#include <vector>
#include <math.h>
#include <string>
using namespace std;

void convertToTwoComplement(vector<int> &x,int REPRESENTATION){
    bool flag = false;
    int itr = REPRESENTATION-1;
    while(itr >= 0){
        if(flag){
            if(x[itr] == 0){x[itr] = 1;}
            else{x[itr] = 0;}
        }
        if(!flag && x[itr] == 1){
            flag = true;
        }
        itr--;
    }
}

void PrintBinary(vector<int> a,int REPRESENTATION){
    for(int i = 0 ; i < REPRESENTATION;i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

int BinaryToDecimalHelper(vector<int> c,int REPRESENTATION){
    int base = 1; //base that gets multipled
    int decimalNum = 0; //variable to store the final decimal value

    //loop to incrementally add to the decimal value
    for(int i = REPRESENTATION-1 ; i >= 0;i--){
        decimalNum += (c[i] * base);
        base *= 2;
    }
    return decimalNum;
}

int BinaryToDecimal(vector<int> c,int REPRESENTATION){

    if(c[0] == 0){
        /*
        If the given number is a positive number
        */
       return BinaryToDecimalHelper(c,REPRESENTATION);
        
    }
    else{
        //convert into 2's complement for negative number
        // int ** a = &c;
        convertToTwoComplement(c,REPRESENTATION);
        return (-1 * BinaryToDecimalHelper(c,REPRESENTATION));
    }
}

void DecimalToBinary(vector<int> &arrA, int a,int REPRESENTATION){
    int i = REPRESENTATION-1;
    if(a > 0){
        while (a > 0) {
            // storing remainder in binary array
            arrA[i] = a % 2;
            a = a / 2;
            i--;
        }
    }
    else{
        int temp = abs(a);
        while (temp > 0) {
            // storing remainder in binary array
            arrA[i] = temp % 2;
            temp = temp / 2;
            i--;
        }
    
        //convert into 2's complement for negative number
        convertToTwoComplement(arrA,REPRESENTATION);
    }
}

#endif
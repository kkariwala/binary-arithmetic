#ifndef BINADD_H     // <<<<<<<<< Note these preprocessor conditions
#define  BINADD_H 
#include <iostream>
#include <vector>
#include <math.h>
#include <string>
#include "BinaryUtils.h"
using namespace std;

//function to add two binary arrays and display the result
void add(vector<int> a, vector<int> b,int REPRESENTATION,vector<int> &result){
    /*
    Addition function

    Parameters:
    a(binary array) -> first array in a decimal form
    b(binary array) -> second array in a decimal form

    Returns: Prints the result of a + b in first 32-bit binary form 
    and then in a decimal form.
    */
    int rem=0;
    //create a temporary array to store the result of the add
    //loop to bitwise add the two digits
    for(int i=REPRESENTATION-1;i>=0;i--)
    {
        int firstNum=a[i];
        int secondNum=b[i];
        result[i]=(firstNum+secondNum+rem)%2;
        rem=(rem+firstNum+secondNum)/2;
    }
}

#endif
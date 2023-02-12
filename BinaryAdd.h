#ifndef BINADD_H     // <<<<<<<<< Note these preprocessor conditions
#define  BINADD_H 
#include <iostream>
#include <vector>
#include <math.h>
#include <string>
#include "BinaryUtils.h"
using namespace std;

void add(vector<int> a, vector<int> b,int REPRESENTATION){
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
    vector<int> c(REPRESENTATION);
    //loop to bitwise add the two digits
    for(int i=REPRESENTATION-1;i>=0;i--)
    {
        int x=a[i];
        int y=b[i];
        c[i]=(x+y+rem)%2;
        rem=(rem+x+y)/2;
    }

    //Function to print result in the binary
    cout << "Result in binary\n";
    PrintBinary(c,REPRESENTATION);

    //Function to print result in decimal
    cout << "Result in Decimal\n";
    cout << BinaryToDecimal(c,REPRESENTATION) << endl;
}

#endif
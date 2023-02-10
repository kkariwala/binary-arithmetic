#include <iostream>
using namespace std;

void add(int a[], int b[],int representation){
    /*
    Addition function

    Parameters:
    a(INTEGER) -> first integer in a decimal form
    b(INTEGER) -> second integer in a decimal form

    Returns: Prints the result of a + b in first 32-bit binary form 
    and then in a decimal form.
    */
   cout << "Addiiton Result \n";
}

void sub(int a[], int b[],int representation){
    /*
    Subtraction function
    
    Parameters:
    a(INTEGER) -> first integer in a decimal form
    b(INTEGER) -> second integer in a decimal form

    Returns: Prints the result of a - b in first 32-bit binary form 
    and then in a decimal form.
    */
   cout << "Subtraction Result \n";
}

void mul(int a[], int b[],int representation){
    /*
    Multiplication function
    
    Parameters:
    a(INTEGER) -> first integer in a decimal form
    b(INTEGER) -> second integer in a decimal form

    Returns: Prints the result of a * b in first 32-bit binary form 
    and then in a decimal form.
    */
   cout << "Multiplication Result \n";
}

void division(int a[], int b[],int representation){
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
    int representation;

    int arrA[representation];
    int arrB[representation];

    cout << "Enter the first integer\n";
    cin >> a;

    cout << "Enter the second integer\n";
    cin >> b;

    cout << "Enter the representation of the integer (32 bit / 16 bits)\n";
    cin >> representation;

    cout << "Enter the operation number (1 or 2 or 3 or 4)\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n";
    cin >> operation;

        /*
    Converting the numbers into individual binary arrays
    */
    int i = 0;
    while (a > 0) {
        // storing remainder in binary array
        arrA[i] = a % 2;
        a = a / 2;
        i++;
    }
    i=0;
    while (b>0){
        arrB[i] = b % 2;
        b = b / 2;
        i++;
    }

    switch (operation)
    {
    case 1:
        add(arrA,arrB,representation);
        break;
    case 2:
        sub(arrA,arrB,representation);
        break;
    case 3:
        mul(arrA,arrB,representation);
        break;
    case 4:
        division(arrA,arrB,representation);
        break;    
    default:
        cout << "Kindly enter a number between 1 to 4 for the correct operation" << endl;
        break;
    }
    return 0;
}
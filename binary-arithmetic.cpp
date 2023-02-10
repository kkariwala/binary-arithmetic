#include <iostream>
using namespace std;

void add(int a, int b){
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

void sub(int a, int b){
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

void mul(int a, int b){
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

void division(int a, int b){
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
    cout << "Enter the first integer" << endl;
    cin >> a;

    cout << "Enter the second integer" << endl;
    cin >> b;

    cout << "Enter the operation number (1 or 2 or 3 or 4)\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n";
    cin >> operation;

    switch (operation)
    {
    case 1:
        add(a,b);
        break;
    case 2:
        sub(a,b);
        break;
    case 3:
        mul(a,b);
        break;
    case 4:
        division(a,b);
        break;    
    default:
        cout << "Kindly enter a number between 1 to 4 for the correct operation" << endl;
        break;
    }
    return 0;
}
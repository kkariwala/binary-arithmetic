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

    int arrA[32];
    int arrB[32];

    cout << "Enter the first integer\n";
    cin >> a;

    cout << "Enter the second integer\n";
    cin >> b;

    cout << "Enter the operation number (1 or 2 or 3 or 4)\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n";
    cin >> operation;

    memset(arrA,0,sizeof(arrA));
    memset(arrB,0,sizeof(arrB));

    /*
    Converting the numbers into individual binary arrays
    */
    int i = 31;
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
        bool flag = false;
        int itr = 31;
        while(itr--){
            if(flag){
                if(arrA[itr] == 0){arrA[itr] = 1;}
                else{arrA[itr] = 0;}
            }
            if(!flag && arrA[itr] == 1){
                flag = true;
            }
        }
    }

    i = 31;
    if(b > 0){
        while (b > 0) {
            // storing remainder in binary array
            arrB[i] = b % 2;
            b = b / 2;
            i--;
        }
    }
    else{
        int temp = abs(b);
        while (temp > 0) {
            // storing remainder in binary array
            arrB[i] = temp % 2;
            temp = temp / 2;
            i--;
        }
    
        //convert into 2's complement for negative number
        bool flag = false;
        int itr = 31;
        while(itr--){
            if(flag){
                if(arrB[itr] == 0){arrB[itr] = 1;}
                else{arrB[itr] = 0;}
            }
            if(!flag && arrB[itr] == 1){
                flag = true;
            }
        }
    }

    // for(int i = 0 ; i< 32;i++){
    //     cout << arrA[i] << " ";
    // }
    // cout << endl;

    // for(int i = 0 ; i< 32;i++){
    //     cout << arrB[i] << " ";
    // }
    // cout << endl;

    switch (operation)
    {
    case 1:
        add(arrA,arrB,32);
        break;
    case 2:
        sub(arrA,arrB,32);
        break;
    case 3:
        mul(arrA,arrB,32);
        break;
    case 4:
        division(arrA,arrB,32);
        break;    
    default:
        cout << "Kindly enter a number between 1 to 4 for the correct operation" << endl;
        break;
    }
    return 0;
}
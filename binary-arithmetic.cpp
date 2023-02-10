#include <iostream>
using namespace std;

void add(int a[], int b[],int representation){
    /*
    Addition function

    Parameters:
    a(binary array) -> first array in a decimal form
    b(binary array) -> second array in a decimal form

    Returns: Prints the result of a + b in first 32-bit binary form 
    and then in a decimal form.
    */
    int rem=0;
    int c[representation];
    string temp="";
    for(int i=representation;i>=0;i--)
    {
        int x=a[i];
        int y=b[i];
        c[i]=(x+y+rem)%2;
        rem=(rem+x+y)/2;
    }
    for(int i=0;i<representation;i++)
    {
        temp+=c[i];
    }
    cout << "Addiiton Result \n"<<temp;
}

void sub(int a[], int b[],int representation){
    /*
    Subtraction function
    
    Parameters:
    a(binary array) -> first array in a binary form
    b(binary array) -> second array in a binary form

    Returns: Prints the result of a - b in first 32-bit binary form 
    and then in a decimal form.
    */
    int rem = 0;						
	for(int i = representation - 1; i >= 0; i--)
	{
		
		// Add a, b and carry
		a[i] = a[i] + b[i] + rem;
	
		// If a[i] is 2
		if(a[i] == 2)
		{
			a[i] = 0;
			rem = 1;

		}
	
		// If a[i] is 3
		else if(a[i] == 3)
		{
			a[i] = 1;
			rem = 1;
		}
		else
			rem = 0;
	}

	cout << endl;
	
	// If carry is generated
	// discard the carry
	if(rem==1)
	{	
	
	// print the result
	for(int i = 0; i < representation; i++)
	{
			
		// Print the result
		cout<<a[i];	
	}
	}

	// if carry is not generated
	else				
	{				
		
		// Calculate 2's Complement
		// of the obtained result
		for(int i = 0; i < representation; i++)
		{				
			if(a[i] == 1)
				a[i] = 0;
			else
				a[i] = 1;
		}
		for(int i = representation- 1; i >= 0; i--)
		{
			if(a[i] == 0)
			{
				a[i] = 1;
				break;
			}
		else
			a[i] = 0;
		}
	
		// Add -ve sign to represent
		cout << "-";		
	
		// -ve result
		// Print the resultant array
		for(int i = 0; i < representation; i++)
		{
			cout << a[i];
		}
	}

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
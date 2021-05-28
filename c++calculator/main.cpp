#include <iostream>
#include <complex>
#include <tgmath.h>
#include <valarray>
#include <cmath>
#include <math.h>
using namespace std;
int main()
{
 	
	int choice;
 
	cout << "welcome to the calculator.\n";
	cout << "to select which operation you want to do, look at the number before the operation and then,\n";
	cout << "enter that number and press the enter button to select it.\n";
   	
	do
	{
	
    	cout << "1. addition\n";
    	cout << "2. subtraction\n";
    	cout << "3. multiplication\n";
    	cout << "4. division\n";
    	cout << "5. square root\n";
    	cout << "6. percent\n";
    	cout << "7. logarithm (base is ten)\n";
    	cout << "8. factorial\n";
    	cout << "9. average\n";
    	cout << "10. powers\n";
    	cout << "11. Exit\n";
    	cin >> choice;
    	
    	float i;
    	float p;
    	float j;
    	
    	switch (choice)
    	{
                	
        	case 1:
            	cout << "Please enter a number that you want to add: ";
            	cin >> i;
            	cout << "Please enter another number that you want to add: ";
            	cin >> j;
            	cout << " the sum of the two numbers is: " << i+j << ".\n\n";
            	break;
            	
       	
        	case 2:
            	cout << "Please enter the first number that you want to subtract from: ";
            	cin >> i;
            	cout << "Please enter the number that you want to want to subtract: ";
            	cin >> j;
            	cout << " the difference of the two numbers is: " << i-j << ".\n\n";
            	break;
            	
        	
        	case 3:
            	cout << "Please enter one number that you want to multiply: ";
            	cin >> i;
            	cout << "Please enter another number that you want to multiply: ";
            	cin >> j;
            	cout << " the product of the two numbers is: " << i*j << ".\n\n";
            	break;
            	
        	
        	case 4:
            	cout << "Please enter the dividend: ";
            	cin >> i;
            	cout << "Please enter the divisor: ";
            	cin >> j;
            	cout << " the quotient of the two numbers is: " << i/j << ".\n\n";
            	break;
            	
        	
        	case 5:
            	cout << "Please the value you want to find the square root of: ";
            	cin >> i;
            	cout << " the square root of the number is: " << sqrt(i) << ".\n\n";
            	break;
        	
        	
        	case 6:
            	cout << "Please enter a percent: ";
            	cin >> j;
            	cout << " Please enter the number that you are going to find the percent of: ";
            	cin >> i;
            	p=j/100*i;
            	cout << j << " percent of " << i << " is " << p << ".\n\n";
            	break;
        	
        	
        	case 7:
            	cout << " please enter the number that you want to find the logarithm of: ";
            	cin >> j;
            	cout << "the logarithm of that number is: " << log10(j) << ". \n\n";
            	break;
            	
        	case 8:
        	{
          	int i, n, factorial = 1;
          	cout << "Enter a positive integer: ";
          	cin >> n;
          	for (i = 1; i <= n; ++i) {
          	factorial *= i;  
          	}
          	cout<< "the factorial of "<<n<<" is "<<factorial << "\n";
        	}
          	break;
          	
        	case 9:
        	{
        	float a;
        	float b;
        	float c;
        	float z;
        	a = 0;
        	cout << "please enter how many numbers you want to average:  ";
        	cin >> z;

        	for (int x = 0; x<z; x++)
        	{
        	cout << "please enter the next number you want to average: ";
        	cin >> b;
        	a = a+b;
        	}
        	c = a/z;
        	cout << "the average is: " << c;
        	cout << "\n\n";
        	}
        	break;
        	
        	case 10:
        	{
        	float a;
        	float z;
        	float p;
        	a = 0;
        	
        	cout <<"please enter the base:  ";
        	cin>>a;
        	
        	cout << "please enter the exponent:  ";
        	cin >> z;
        	p=a;
        	for (int x = 1; x<z; x++)
        	{
        	p=p*a;
        	}
        	cout << "the answer is:  " << p;
        	cout << "\n\n";
        	}
        	break;
    	}
	if (choice >11)
    	{
        	
      	cout << "this is not an option on the awesome calculator\n";
      	
    	}
	} while ((choice > 0 && choice <=10) || choice >11);
	return 0;
}
	






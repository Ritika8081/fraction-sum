/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
using namespace std;

// GCD function
int findGCD(int n1, int n2)
{
    int gcd;
    for(int i=1; i <= n1 && i <= n2; i++)
    {
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }
    return gcd;
}
// Main Program
int main()
{
    int num1,den1;
    
    //user input first fraction
    cout << "Enter numerator and denominator of first number : "; cin >> num1 >> den1;
    
    int num2,den2;
	
    //user input second fraction
    cout << "Enter numerator and denominator of second number: "; cin >> num2 >> den2;
    
    //finding lcm of the denominators
    int lcm = (den1*den2)/findGCD(den1,den2);
    
    //finding the sum of the numbers
    int sum=(num1*lcm/den1) + (num2*lcm/den2);
    
    //normalizing numerator and denominator of result
    int num3=sum/findGCD(sum,lcm);
    
    lcm=lcm/findGCD(sum,lcm);
    
    //printing output
    cout<<num1<<"/"<<den1<<" + "<<num2<<"/"<<den2<<" = "<<num3<<"/"<<lcm;
    
    return 0;
}
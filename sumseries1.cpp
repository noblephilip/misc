#include<iostream>
#include<cmath>
using namespace std;

/* program to find the sum of the series 
	sum = x- x^3/3! + x^5/5! - x^7/7! ... upto n terms
	x --> x^1/1!
*/

long factorial(int);
float sum(int,int);

int main()
{	cout<<"Enter x and n:";
	int x,n;
	cin>>x>>n;
	if(n>0) //This checking is NOT  absolutely necessary
		cout<<"Sum :"<<sum(x,n)<<endl;
	else 
		cout<<"Enter a positive value for n"<<endl;
	return 0;
}

//function to find factorial 
//this will be called from the sum function
long factorial(int n)
{	long fact = 1;
	while(n>1)
		fact*=n--;
	return fact;
}

float sum(int x,int n)
{	int counter = 1; // to generate 1,3,5 ...
	short sign = +1; // alternating sign 
	float sum = 0.0; 
	for(int i=0;i<n;++i)
	{	sum += sign * (pow(x,counter)/factorial(counter));
		sign *= -1;
		counter += 2;
	}
	return sum;
}

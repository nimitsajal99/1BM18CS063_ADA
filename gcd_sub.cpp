#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
	int m, n;

	cout<<"Enter value of first number";
	cin>>m;
	cout<<"Enter value of second number";
	cin>>n;

	while(m!=n)
	{
		if(m>n)
			m = m-n;
		else
			n= n-m;
	}

	cout<<"GCD of two numbers = "<<m;

	return 0;
}

#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
	int m, n, r;

	cout<<"Enter value of first number";
	cin>>m;
	cout<<"Enter value of second number";
	cin>>n;

	while(n!=0)
	{
		r = m%n;
		m = n;
		n = r;
	}

	cout<<"GCD of two numbers = "<<m;

	return 0;
}

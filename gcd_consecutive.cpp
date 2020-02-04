#include<stdio.h>
#include<iostream>
using namespace std;

int gcd(int m,int n)
	{
		int s;
		if(m<n)
			s = m;
		else
			s = n;
		while(1)
		{
			if(m%s == 0 && n%s == 0)
				return s;
			else
				s = s-1;
		}
	}

int main()
{
	int m, n;

	cout<<"Enter value of first number";
	cin>>m;
	cout<<"Enter value of second number";
	cin>>n;

	cout<<"GCD of two numbers = "<<gcd(m,n);

	return 0;
}

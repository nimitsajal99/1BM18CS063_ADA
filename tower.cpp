#include<bits/stdc++.h>
using namespace std;

void tower(int n, char from, char to, char aux)
{
	if(n == 1)
	{
		cout<< "Move 1st disk from rod " << from << " to rod " << to <<endl;
		return;
	}
	tower(n-1, from, aux, to);
	cout << "Move disk " << n << " from rod " << from << " to rod " << to <<endl;
	tower(n-1, aux, to, from);
}

int main()
{
	int n;
	cout << "Enter number of Disks"<<endl;
	cin >> n;
	tower(n, 'A', 'C', 'B');
	return 0;
} 

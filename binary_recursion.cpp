#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int binary(int front, int end, int key, int arr[])
{
	if(front > end)
		return -2;
	else
	{
		if(arr[mid] > key)
			return binary(front, mid-1, key, arr);
		else if(arr[mid] < key)
			return binary(mid+1, end, key, arr);
		else
			return mid;
	}
}

int main()
{
	int size;
	cout << "Enter the number of elements :"<<endl;
	cin >> size;
	int arr[size];
	cout << " Enter " << size << " elements :" <<endl;
	for(int i=0; i<size; i++)
		cin >> arr[i];
	int key;
	cout << " Enter the Element to be searched :" <<endl;
	cin >> key;
	
	int front = 0;
	int end = size-1;
	int mid = (front + end)-1;
	
	cout << (binary(front, end, key, arr)+1);
	return 0;
}

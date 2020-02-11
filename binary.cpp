#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, key, arr[100];
	cout << "Enter total number of elements :" << endl;
	cin >> n;
	cout << "Enter " << n << " elements"<<endl;
	for(int i=0; i<n; i++)
		cin >> arr[i];
	cout << "Enter the key element to be searched :"<<endl;
	cin >> key;


	int first = 0;
	int last = n-1;
	int mid = (last + first) / 2;

	while(first <= last)
	{
		if(arr[mid] < key)
			first = mid + 1;
		else if(arr[mid] == key)
		{
			
			int posl = mid-1;
			int posr = mid+1;
			while(arr[posl] == key)
			{
				
				posl--;
			}
			posl++;
				
			while(arr[posr] == key)
			{
				
				posr++;			
			}
			posr--;
			cout << "Key element found " << (posr-posl +1)<< " times." << endl;
			cout<<"Between: "<<(posl+1)<<" And "<<(posr+1);
			return 0;
		}
		else
			last = mid - 1;
		mid = (first + last) / 2;
	}
	if(first > last)
		cout << "Key element not found"<<endl;
	return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	int maxi = INT_MIN;
	int mini = INT_MAX;

	for(int i=0;i<n;i++)
	{
		maxi = max(maxi,arr[i]);
		mini = min(mini,arr[i]);
/*		if(arr[i]>max)
			max = arr[i];
		if(arr[i]<min)
			min = arr[i];*/
	}

	cout<<maxi<<"  "<<mini;

	return 0;
}
#include<bits/stdc++.h>
using namespace std;

void subArray(int arr[],int n)
{
	int sum = 0;
	for(int i=0;i<n;i++)
	{
       	int sum = 0;
		for(int j=i;j<n;j++)
		{
			sum = sum + arr[j];
		    cout<<sum<<"   ";
		}
		cout<<"\n";
	}
	    
}


int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	subArray(arr,n);

	return 0;
}
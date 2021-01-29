#include<bits/stdc++.h>
using namespace std;

void max_till_i(int arr[],int n)
{
	int max = arr[0];
	for(int j=0;j<n;j++)
	{
	//	if(max < arr[j])
	//	{
	//		max = arr[j];
	//	}
		max = std::max(max,arr[j]);
	    cout<< max<<" ";

	}
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	max_till_i(arr,n);

	return 0;
}
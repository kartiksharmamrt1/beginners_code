// an arithmetic subarray is an array that contain at least two elements
//and the diffrence between consecutive integer are equal
//elample [3,3,3] , [9,7,5,3]

//we have to fine the the arithmetic subarray of maximum length from an normal array


#include<bits/stdc++.h>
using namespace std;

int main()
{
	//int t;
	//while(t--)
	//{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		int ans=0;
		int pd = a[1]-a[0];
		int curr = 2;

		for(int i=2;i<n;i++)
		{
			if(pd == a[i] - a[i-1])
			{
				curr++;
			}
			else
			{
				pd = a[i] - a[i-1];
				curr = 2;
			}
			
			ans = max(ans,curr);
		}
		cout<<ans<<endl;

	//}


	return 0;
}
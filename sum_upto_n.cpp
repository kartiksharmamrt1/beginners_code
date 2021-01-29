#include<bits/stdc++.h>
using namespace std;
int check(int n)
{
	int sum =0;
	//for(int i=1;i<=n;i++)
	//	sum = sum+i;
	sum = (n*n+1)/2;
	return sum;
}

int main()
{
	int n;
	cin>>n;
	cout<<check(n);

return 0;	
}
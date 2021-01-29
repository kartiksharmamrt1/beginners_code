#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
	int fact = 1;
	for(int i=1;i<=n;i++)
	{
		fact = fact*i;
	}
	return fact;
}

int ncr (int n,int r)
{
	return fact(n)/(fact(n-r)*fact(r));

}

int main()
{
	int n,r;
	cin>>n>>r;
	cout<<ncr(n,r);

	return 0;
}
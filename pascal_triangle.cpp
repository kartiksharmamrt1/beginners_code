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

int pascaltri (int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=i;j++)
		{
			cout<<fact(i)/(fact(j)*fact(i-j))<<"  ";
		}
		cout<<endl;
	}

}

int main()
{
	int n;
	cin>>n;
	pascaltri(n);

	return 0;
}
#include<bits/stdc++.h>
using namespace std;

void isprime(int n)
{
    bool flag = false;
	for(int i=2;i<sqrt(n);i++)
	{
		if(n%i==0)
		{
			cout<<"false";
			flag = 1;
			break;
		}
	}
	if(flag == 0)
	cout<<"true";
}

int main()
{
	int n;
	cin>>n;
	isprime(n);
}

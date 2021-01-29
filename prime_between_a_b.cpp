#include<bits/stdc++.h>
using namespace std;

void isprime(int n)
{
    bool flag = false;
	for(int i=2;i<sqrt(n);i++)
	{
		if(n%i==0)
		{
			flag = 1;
			break;
		}
	}
	if(flag == 0)
	cout<<n<<" ";
}

int main()
{
	int a,b;
	cin>>a>>b;
    for(int i=a;i<=b;i++)
	isprime(i);
return 0;	
}
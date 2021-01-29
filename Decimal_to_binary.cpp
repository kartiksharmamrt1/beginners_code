#include<bits/stdc++.h>
using namespace std;

long int decitobi(int n)
{
	long int binary = 0;

	for(int i=0;n>0;i++)
	{
		int lastdig = n%2;
		n=n/2;
		binary = binary + lastdig * pow(10,i) ;
	}
	//binary /= 10;
	return binary;
}

int main()
{
	int n;
	cin>>n;
	cout<<decitobi(n);
}
/* 
#include<bits/stdc++.h>
using namespace std;

long int decitobi(int n)
{
	long int binary = 0;
	int pownum =1;
	while(pownum <= n)
	    pownum*=2;   
	pownum /=2;
	while(pownum>0)
	{
		int lastdig = n/pownum;
		n -= lastdig * pownum;
		pownum /= 2; 
		binary = binary*10 + lastdig;
	}
	return binary;
}

int main()
{
	int n;
	cin>>n;
	cout<<decitobi(n);
}
*/
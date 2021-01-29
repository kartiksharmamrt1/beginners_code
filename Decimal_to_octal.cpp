#include<bits/stdc++.h>
using namespace std;

int decitooctal(int n)
{
	int octal = 0;

	for(int i=0;n>0;i++)
	{
		int lastdig = n%8;
		n=n/8;
		octal = octal + lastdig * pow(10,i) ;
	}
	//binary /= 10;
	return octal;
}

int main()
{
	int n;
	cin>>n;
	cout<<decitooctal(n);
}

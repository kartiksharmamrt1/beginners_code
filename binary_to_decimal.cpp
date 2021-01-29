#include<bits/stdc++.h>
using namespace std;

int binarytodeci(long int n)
{
	int deci = 0;
	for(int i=0;n>0;i++)
	{
		deci = deci + n%10 * pow(2,i);
        n = n/10;
	}
	return deci;

}

int main()
{
	long int n;
	cin>>n;
	cout<< binarytodeci(n);
}
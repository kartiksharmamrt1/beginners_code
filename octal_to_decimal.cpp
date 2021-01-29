#include<bits/stdc++.h>
using namespace std;

int Octaltodeci(int n)
{
	int deci = 0;
	for(int i=0;n>0;i++)
	{
		deci = deci + n%10 * pow(8,i);
        n = n/10;
	}
	return deci;

}

int main()
{
	int n;
	cin>>n;
	cout<< Octaltodeci(n);
}
#include<bits/stdc++.h>
using namespace std;

int hexatodeci(string n)
{
	int deci = 0;
	int pownumber = 0;
	int s = n.size();
	
	for(int i=s-1;i>=0;i--)
	{
		if(n[i] >= '0' && n[i] <= '9')
		{
		deci = deci + (n[i]- '0') * pow(16,pownumber);
		}
		else if(n[i] >= 'A' && n[i]<= 'F')
		{
		deci = deci + (n[i]- 'A' +10) * pow(16,pownumber);
		}
		pownumber++;
	}
	return deci;

}

int main()
{
	string n;
	cin>>n;
	cout<< hexatodeci(n);
}
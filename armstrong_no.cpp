#include<bits/stdc++.h>
using namespace std;

void isarmstrong(int n)
{
	int sum =0;
	int inputnum = n;
	while(n>0)
	{
		int lastdig = n%10;
		sum = sum + pow(lastdig,3);
		n=n/10;
	}
	if (sum == inputnum)
		cout<<"yes it is";
	else
		cout<<"no its not";

}

int main()
{
	int n;
	cin>>n;
	isarmstrong(n);

return 0;	
}

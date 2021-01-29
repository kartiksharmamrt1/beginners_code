#include<bits/stdc++.h>
using namespace std;
int max(int a,int b, int c)
{
	if(a>b && a>c)
		return a;
	else if(b>c)
		return b;
	else
		return c;

}

int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	cout<<max(a,b,c);

return 0;	
}
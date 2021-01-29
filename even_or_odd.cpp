#include<bits/stdc++.h>
using namespace std;
char* check(int a)
{
	if(a%2 == 0)	
		return 'even';
	else
		return "odd";
}

int main()
{
	int a;
	cin>>a;
	cout<<check(a);

return 0;	
}
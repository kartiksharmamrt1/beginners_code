#include<bits/stdc++.h>
using namespace std;

int max(int a,int b,int c)
{
	return (a>b && a>c)? return a: (b>c)? return b:return c;
}

void checkpytha(int x,int y,int z)
{
	int max = max(x,y,z);
	int x1 = pow(x,2);
	int y1 = pow(y,2);
	iny z1 = pow(z,2);
	if((max == x && x1 == y1+z1)||(max == y && y1 == x1+z1)||(max == z && z1 == y1+x1))
		cout<<"yes it is";
	else 
		cout<<"no its not";
}

int main()
{
	int x,y,z;
	cin>>x>>y>>z;
	checkpytha(x,y,z);

	return 0;
}
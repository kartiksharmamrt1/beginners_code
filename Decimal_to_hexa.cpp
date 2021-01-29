/*
#include<bits/stdc++.h>
using namespace std;

string decitohexa(int n)
{
	string hexa = "";
    
    for(int i=0;n>0;i++)
    {
        int lastdig = n%16;
        n=n/16;
        if(lastdig <=9)
		    hexa = hexa + to_string(lastdig);
    	else
    	{
    		char c = 'A' + lastdig -10;
    		hexa.push_back(c);
    	}
    }
    return hexa;
}

int main()
{
	int n;
	cin>>n;
	cout<<decitohexa(n);
}
*/
#include<bits/stdc++.h>
using namespace std;

string decitohexa(int n)
{
    string hexa = "";
    int x=1;
    while(x<=n)
    {
        x*=16;
    }
    x /=16;
    while(x>0)
    {
        int lastdig = n/x;
        n -= lastdig*x;
        x=x/16;
        if(lastdig <=9)
            hexa = hexa + to_string(lastdig);
        else
        {
            char c = 'A' + lastdig -10;
            hexa.push_back(c);
        }
    }
    return hexa;
}

int main()
{
    int n;
    cin>>n;
    cout<<decitohexa(n);
}

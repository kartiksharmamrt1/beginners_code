#include<bits/stdc++.h>
using namespace std;


int main()
{
	int n;
	cin>>n;
	
	for(int i=1;i<=2*n;i++)
	{
	    if(i<=n)
	    {
	         for(int j=1;j<=2*n;j++)
	        {
	            if(j<=i || j>=2*n-i+1 )
		         cout<<"*";
		        else
		        cout<<" ";
	        }
	    }
	    else{
	       for(int j=2*n;j>=1;j--)
	        {
	            if(j>=i || j<=2*n-i+1)
		        cout<<"*";
		        else
		        cout<<" ";
	        } 
	    }
	    
	    cout<<endl;
	}
return 0;	
}
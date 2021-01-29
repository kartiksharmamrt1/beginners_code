//subset in such a way that no two consucative number are not in a subset


#include<bits/stdc++.h>
using namespace std;

int subset_with_max_sum(int arr[],int n)
{
    int dp[n];
    dp[0] = arr[0];
    dp[1] = arr[1];
    
    for(int i=2;i<n;i++)
    {
        dp[i] = max(dp[i-1],dp[i-2]+arr[i]);
    }
    
    return dp[n-1];
}


int main()
{
    int n;
    cin>>n;
    int arr[n],dp[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
        
    cout<<subset_with_max_sum(arr,n)  ;  
    
    return 0;
}
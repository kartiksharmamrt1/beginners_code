#include<bits/stdc++.h>
using namespace std;

void solution(vector<int>& nums)
{
    
    int arr[nums.size() + 1] = {0};
    for(int i=0;i<=nums.size();i++)
    {
        int x= nums[i];
        arr[x]++;
    }
    
    for(int i=0;i<=nums.size();i++)
    {
        if(arr[i]==0)
            cout<<"missing "<<i;
            
        if(arr[i]==2)
            cout<<" copy "<<i;
            
    }
        
}

int main()
{
    int n;
    cin>>n;
    vector<int> nums;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        nums.push_back(x);
    }
    
    solution(nums);
    
    
    return 0;
}



/*
 int missing;
    int copy;
    set <int> check;
    for(int num : nums)
    {
        if(check.contains(num))
        {
            copy = num;
        }
        check.add(num);
    } 

    for(int i=0;i<nums.size();i++)
    {
        if(!check.contains(i))
        {
            missing = i;
        }
    }
    
    cout<< missing << "  "<<copy;
*/
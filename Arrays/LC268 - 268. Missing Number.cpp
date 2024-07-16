class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
    int n=nums.size();
    int xor1 =0;
    int xor2 = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        xor2=xor2^nums[i];
        xor1=xor1^(i);
    }
    xor1=xor1^n;
    return (xor1^xor2);
    }
};

/////////////////////////////
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
    int n=nums.size();
    int sum=n*(n+1)/2;
    int s2=0;
    for (int i = 0; i < n; i++)
    {
        s2 += nums[i];
    }
    return (sum-s2);
    }
};
////////////////////
#include<bits/stdc++.h>
using namespace std;

//Brute
int missno1(int nums[],int n){

    for(int i=0;i<=n;i++){
            int flag=0;
            for(int j=0;j<n-1;j++){
                if(nums[j]==i){
                    flag=1;
                    break;
                }
            }
            if(flag==0) return i;
        }
        return -1;
}

//Better -using hashing
int missno2(int nums[],int n){

    int hash[n+1]={0};
    for (int i = 0; i < n; i++)
    {
        hash[nums[i]]++;
    }
    for (int i = 1; i < n; i++)
    {
        if(hash[i]==0) return i;
    }  
    return -1;
}

int missno3(int nums[],int n){
    int sum=n*(n+1)/2;
    int s2=0;
    for (int i = 0; i < n; i++)
    {
        s2 += nums[i];
    }
    return (sum-s2);
    
}

int missno4(int nums[],int n){
    int xor1=0,xor2=0;
    
    for (int i = 0; i < n; i++)
    {
        xor2= xor2 ^ nums[i];
        xor1= xor1 ^ (i);
    }
    xor1 = xor1 ^ n;
    return xor1 ^ xor2;
    
}


int main(){

    int n;
    cin>>n;
    int nums[n];
    for (int i = 0; i < n; i++)
    {
        cin>>nums[i];
    }
    
    //cout<<missno1(nums , n);
    //cout<<missno2(nums , n);
    // cout<<missno3(nums , n);
    cout<<missno4(nums , n);

    
    return 0;
}

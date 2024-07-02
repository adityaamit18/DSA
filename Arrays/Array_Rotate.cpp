#include<bits/stdc++.h>
using namespace std;


//arr of n size and d rotation
void leftRot(int arr[],int n,int d){

    //step 1 find the actual rotation
    d=d%n;

    //step 2 put the terms that will go behind in array in temp
    int temp[d];

    //put the values that will go in here
    for (int i = 0; i < d; i++)
    {
        temp[i]=arr[i];
    }

    //step3 shifting the remaing values and elemnts to left

    for (int i = d; i < n; i++)
    {
        arr[i-d]=arr[i];
    }

    //step 4 putting back the temp values behind the array
    for (int i = n-d; i < n; i++)
    {
        arr[i]=temp[i-(n-d)];
    }  
    
}

void leftRotwithoutTEMP(int arr[],int n,int d){

    //step 1 find the actual rotation
    d=d%n;

    //step 2 reverse first k terms
    reverse(arr,arr+d);
    // reverse the other remaining elements
    reverse(arr+d,arr+n);
    //reverse whole once again
    reverse(arr,arr+n);

}

int main(){

    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int d;
    cin>>d;
    leftRot(arr , n, d);
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

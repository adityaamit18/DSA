#include<bits/stdc++.h>
using namespace std;

void selectsort(int n,int arr[]){
    for (int i = 0; i <= n-2; i++)
    {
        int min=i;
        for (int j = i; j <= n-1; j++)
        {
            if(arr[j]<arr[min])
            min = j;
        }
        //swap arr[min],arr[j]
        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
        

    } 
}

int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    };
    selectsort(n,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

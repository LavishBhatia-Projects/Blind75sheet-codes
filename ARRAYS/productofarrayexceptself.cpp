#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of Array : ";
    cin>>n;
    int arr[n];
    int out[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int  i = 0; i<n; i++)
    
    {
        int temp=1;
        for (int j = 0; j< n; j++)
        {
           if (i==j)
           {
            continue;
           }
           else{
            temp=temp*arr[j];
           }
           
           
        }
        out[i]=temp;
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<out[i]<<" ";

    }
    
    
}
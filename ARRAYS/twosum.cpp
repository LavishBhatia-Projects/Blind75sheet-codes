#include<bits/stdc++.h>
using namespace std;
int main(){
int n=4;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int target=9;
for (int i = 0; i < n; i++)
{
    for (int j = i+1; j < n; j++)
    {
        if(arr[i]+arr[j]==target){
            cout<<i<<j<<endl;
        }
    }
 
}


}
#include<bits/stdc++.h>
using namespace std;
int maxSubarray(int arr[],int n){
int sum=0;
int maxi=arr[0];
for(int i=0;i<n;i++){
    sum+=arr[i];
    maxi=max(sum,maxi);
    if(sum<0){
        sum=0;
    }


}
return maxi;

}
int main(){
int a[8]={-2,-3,4,-1,-2,1,5,-3};
cout<<maxSubarray(a,8);

}
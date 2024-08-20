#include<bits/stdc++.h>
using namespace std;

int main(){
int o=1,t=1;

int n;
cin>>n;
for (int  i = 0; i < n-1; i++)

{
    int temp=o;
    o=o+t;
    t=temp;
    
}

cout<<o<<endl;

}
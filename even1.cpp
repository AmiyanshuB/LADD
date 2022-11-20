#include<iostream>
#include<bits/stdc++.h>
using namespace std;



int main()
{
    long long int n,k;
    cin>>n;
    cin>>k;
    
long long int mid;
if(n%2!=0)
mid=n/2+1;
else mid=n/2;

if(k<=mid){
    cout<<(2*k-1);
}
else{
    k=k-mid;
    cout<<2*k;
}

    
//    cout<<arr[k-1];

    return 0;
}
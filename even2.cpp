#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{   int n;
cin>>n;
int k;
cin>>k;

int l;
    int arr[n];
    if(n%2==0){
       l=n/2;
      
    }
    else{
         l=(n/2)+1;
    }
     k--;
    int j=0;
    for(int i=1;i<=n;){
        if(i%2==0){
            arr[l++]=i;
            i++;

        }
        else{
            arr[j++]=i;
            i++;

        }
    }
    
    cout<<arr[k];
    return 0;
}
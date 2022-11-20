#include<iostream>

using namespace std;
int main()
{
    long long int n;
    cin>>n;
    long long int k;
    cin>>k;
    long long temp1 = 0, temp2 = 0;
    if(k <= (n+1)/2)
    {
        int i = 1;
        while(i <= n)
        {
            temp1++;
            if(temp1 == k)
            {
                break;
            }  
            i = i + 2;
        }
        cout<<i;
    }
    else
    {
        int i = 0;
        while(i < n)
        {
            temp2++;
            if(temp2 == k -((n-1)/2))
            {
                break;
            }
            i = i+2;
        }
        cout<<i;
    }
}
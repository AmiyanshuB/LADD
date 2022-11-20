#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// int countSuper(int num[][])
// {
//     if()
// }
int main()
{
    int n;
    cin>>n;
    int counter = 0;
    int**num = new int*[n];
    for(int i = 0; i < n; i++)
    {
        num[i] = new int[2];
    }
    for(int i = 0 ;i < n ;i++)
    {
        for(int j = 0 ;j < 2; j++)
        {
            cin>>num[i][j];
        }
    }
    for(int i = 0; i <n - 1; i++)
    {
        int num1=num[i][0];
        int num2 = num[i][1];
        for(int j = i + 1; j < n;j++)
        {
            int num3=num[j][0];
            int num4 = num[j][1];
            if((num3 == num1 + 1 )|| (num3 == num1 -1) && num4 == num2) 
            {
                counter++;
                break;
            }
            if((num4 == num2+1) || (num4 == num2 -1) && (num1 == num3))
            {
                counter++;
                break;
            }
            
        }
        
    }
    cout<<counter;

    return 0;
}
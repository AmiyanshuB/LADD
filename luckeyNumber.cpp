#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int counter = 0, counter1= 0;
    int flag1 =0, flag2 = 0;
    long long int number;
    cin>>number;
    while(number > 0)
    {
        int num = number%10;
        number = number/10;
        if(num == 4)
        {
            counter++;
            flag2 = 1;
        }
        if(num == 7)
        {
            counter++;
            flag1 = 1;
        }
        counter1++;
    }
    if(counter == 4 || counter == 7)
        cout<<"YES";
    else
    cout<<"NO";
    return 0;
}
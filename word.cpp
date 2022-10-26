#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string line;
    int counter1 = 0,counter2 = 0;
    cin>>line;
    int i = 0;
    while(line[i] != '\0')
    {
        if(isupper(line[i]))
        {
            counter1++;
        }
        else if(islower(line[i]))
        counter2++;
        i++;
    }
    if(counter1>counter2)
    {
        transform(line.begin(), line.end(), line.begin(), ::toupper);
    }
    else
    transform(line.begin(), line.end(), line.begin(), ::tolower);
    cout<<line;
    return 0;
}
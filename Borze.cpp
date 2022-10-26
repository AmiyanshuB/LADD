#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int n = 0;
    char code[250];
    cin.getline(code, 250);
    int i = 0;
    while(code[i] != '\0')
    {
        if(code[i] == '-' && code[i+1] == '.')
        {
            i=i+2;
            cout<<"1";
        }
        else if(code[i] == '.')
        {
            cout<<"0";
            i++;
        }
        else 
        {
            cout<<"2";
            i=i+2;
        }
    }
}
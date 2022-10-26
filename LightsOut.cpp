#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int it;
    int input[3][3];
    int lights[3][3] = {1, 1, 1,1, 1, 1,1, 1, 1};
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
        {
            cin>>input[i][j];
        }
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(input[i][j]%2 == 0)
             it = 0;
            else
             it = 1;

            while( it > 0)
            {
            for(int k = 0; k < 3; k++)
            {
                
                    if(lights[i][k] == 1)
                    lights[i][k] = 0;
                else if(lights[i][k] == 0)
                    lights[i][k] = 1;
                if(k != i)
                {
                if(lights[k][j] == 1)
                    lights[k][j] = 0;
               else if(lights[k][j] == 0)
                    lights[k][j] = 1;
                }
            }
            it--;
            }

        }
    }
for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout<<lights[i][j];
        }
        cout<<endl;
    }
}
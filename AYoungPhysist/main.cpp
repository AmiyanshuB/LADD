#include <iostream>

using namespace std;

int main()
{
    int counter = 0;
    int n;
    cin>>n;
    int arr[n][3];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int j = 0; j < 3; j++)
    {
        int sum = 0;
        for(int i = 0; i < n; i++)
        {
            sum = sum + arr[i][j];
        }
        if(sum != 0)
        {
            counter = 1;
            break;
        }

    }
    if(counter == 0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}

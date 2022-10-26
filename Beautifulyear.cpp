#include<iostream>

using namespace std;
int main()
{
    int year;int flag = 0, flag2 = 0;
    cin>>year;
    year = year + 1 ;
    int save = year ;
    while(year > 0)
    {
        int num2;
        int num1 = year%10;
        year = year/10;
        int year1 = year;
        while(year>0)
        {
            num2 = year%10;
            year = year/10;
            if(num1 == num2)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 1)
        {
            flag = 0;
            year = save;
            save = save +1;
            flag2 = 1;
        }
        else
        {
        year = year1;
        }
    }
    if(flag2 == 0)
    {
        cout<<save;
    }
    else
    cout<< save -1 ;

}
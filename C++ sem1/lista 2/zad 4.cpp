#include <iostream>
using namespace std;
int main()
{
    for(int i=-5;i<=5;i++)
        cout<<"\t"<<"x1b[41m"<<i<<"[0m";
    cout<<endl;
    for(int i=-5;i<=5;i++)
    {
        cout<<"x1b[41m"<<i<<"[0m"<<"\t";
        for(int j=-5;j<=5;j++)
            cout<<i*j<<"\t";
         cout<<endl;
       }

    }

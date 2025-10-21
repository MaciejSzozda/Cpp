#include <iostream>
using namespace std;
int main()
{
    long long s = 1;
    for(int i=1;i<40;i++)
    {
        s*=i;
        cout<< i;
        cout<<"!="<<s;
        cout<<endl;
    }
    return 0;
} /* wyniki są porawe do 20 silnia a powyżej dwudziestej silni występują ujemne silnie związane jest to z tym że long "long mozę" skaładować tylko 128 bitów idochodzi do tzw "stack overflow" */

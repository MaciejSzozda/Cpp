#include <iostream>
using namespace std;
int main()
{
for(int i=1;i<100;i++)
{
    cout<<"\x1b[" << i <<"m tekst"<<endl;
}

}

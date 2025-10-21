#include <iostream>
using namespace std;
int a(void)
{
    cout << "Hello world" << endl;
    return 0;
}
float b(float x)
{
    cout<<x<<endl;
    return 0;
}

int c(int x,int y)
{
    cout<<x+y<<endl;
    return 0;
}
int d(int x,float y,float z)
{
    int y1=static_cast<float>(y);
    int z1=static_cast<float>(z);
    cout<<x*y1*z1<<endl;
    return 0;
}
e(int tablica,int dlugosc)
{
    int iloczyn=1;
    for(int i=1;i<dlugosc;i++)
    {
        iloczyn*=tablica[0];
    }
    cout<<iloczyn<<endl;
    return 0;
}
int main()
{
    int tab[3] = {1,2,3};
    a();
    b(3.54);
    c(4,5);
    d(5,5.6,3.65);
    e(tab[5],5);
}

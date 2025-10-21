#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
void Hello_World()
{
    cout << "Hello World"<<endl;
}
void floaty(float a)
{
cout << "float :" <<a<<endl;
}
int inty(int x, int y)
{
return x+y;
}
int mnozenie(int b, float c, float d)
{
return int(b * c * d);
}
int tablica(int tab[],int n)
{
    int iloczyn=1;
    for (int i=0;i<n;i++)
    iloczyn*=tab[i];
    return iloczyn;
}
int main()
{
    int tab[]={3,24,2,1,2};
 Hello_World();
 floaty(1.65);
 cout<<"suma liczb: "<<inty(5,10)<<endl;
 cout<<"manozenie:"<<mnozenie(3,3.24,4.234)<<endl;
 cout<<"ioczyn elementów tablicy: "<<tablica(tab,3)<<endl;
}



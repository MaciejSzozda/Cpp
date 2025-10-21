#include <iostream>
#include <climits>
using namespace std;
int main(void)
{
int a;
int b;
int c;
int d;
int e;
int f=0;
int x;
while (f==0)
    {
    cout<<"dodawanie-0 mnozenie-1"<<endl;
    cin>>a;
    if (a==0)
    {
        cout<<"dodawanie"<<endl;
        cout<<"Podaj pierwsza liczbe:"<<endl;
        while(! (cin>>b) )
        {
            cout << "liczbe!" << endl;
            cin.clear();
            cin.ignore(INT_MAX,'\n');
        };
        cout<<"Podaj druga liczbe:"<<endl;
        while(! (cin>>c) )
        {
            cout << "liczbe!" << endl;
            cin.clear();
            cin.ignore(INT_MAX,'\n');
        };
        cout<<"wynik:"<<b+c<<endl;
    }
    if (a==1)
    {
        cout<<"mnozenie"<<endl;
        cout<<"Podaj pierwsza liczbe:"<<endl;
        while(! (cin>>d) )
        {
            cout << "liczbe!" << endl;
            cin.clear();
            cin.ignore(INT_MAX,'\n');
        };
        cout<<"Podaj druga liczbe:"<<endl;
        while(! (cin>>e) )
        {
            cout << "liczbe!" << endl;
            cin.clear();
            cin.ignore(INT_MAX,'\n');
        };
        cout<<"wynik:"<<d*e<<endl;
    }
    cout<<"Jeszcze raz? Tak-0 Nie-1"<<endl;
    cin>>f;
    }
}

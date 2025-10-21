#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main()
{
    int zakres=101;
    cout<<"\x1b[0;50H \x1b[41mGra zgadnij co to za liczba\x1b[0m"<<endl;
    cout<<"\x1b[15;40H";
    cout<<"\x1b[41mzeby zaczac gre przycisnij dowolna cyfre i enter\x1b[0m"<<endl;
    int zaczac;
    cin>>zaczac;
    while(1)
    {
        system("cls");

    srand(time(NULL));
    int proba=0;
    int ilosc_prob=0;
    cout<<"zadnij liczbe z zkresu od 1 do 100"<<endl;
    int liczba=rand()%100+1;
    while(1)
    {
        cout<<"podaj liczbe: ";
        cin>>proba;
        if(proba==liczba)
        {
            ilosc_prob++;
            cout<<"brawo odgadles w"<<ilosc_prob<<"probach"<<endl;
        }
        else
        {
            ilosc_prob++;
            cout<<"nie zgadles"<<endl;
            cout<<"ilosc prob:"<<ilosc_prob<<endl;
        }
    }
        cout<<"jesli chcesz zagrac jeszcze raz wcisnij 1 a jesli nie to 0"<<endl;
        string jeszcze_raz;
        cin>>jeszcze_raz;
        if(jeszcze_raz=="0")
        {
            break;
        }
        zakres+=20;
}
return 0;
}

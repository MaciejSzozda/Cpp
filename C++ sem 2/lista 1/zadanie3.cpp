//Maciej Szozda zadanie 3 lista 1
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout<<"\npierwsza metoda\n"<<endl;
    double t1;
    double wynik1=1;                      //wynik zaokrąglane sa dobrze do 16 liczby kolejne wyniki juz są nie poprawne
    t1=1.0/(sqrt(3));
    for (int i=0;i<=30;i++)
    {
        wynik1=6.0*t1*pow(2.0,i);
        t1=(sqrt(t1*t1+1)-1)/t1;
        cout<<i<<" - "<<wynik1<<endl;
    }
    cout<<"\nkolejna metoda\n"<<endl;
    double t2;
    double wynik2=1;                    //w drugiej metodzie kolejne wynik coraz bardziej przblizają wartość wartośc pi bez ograniczenia
    t2=1.0/(sqrt(3));
    for (int i=0;i<=30;i++)
    {
        wynik2=6.0*t2*pow(2.0,i);
        t2=t2/(sqrt(t2*t2+1)+1);
        cout<<i<<" - "<<wynik2<<endl;
    }
}
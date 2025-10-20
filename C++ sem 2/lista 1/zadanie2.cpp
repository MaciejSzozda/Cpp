//Maciej Szozda zadanie 2 lista 1
#include <iostream>
#include <cmath>
using namespace std;
double a(int n)
{
    double wynik;
    for(int i=1;i<=n;i++)
    {
        wynik+=(((pow(-1.0,i))*(-1.0))/((2.0*i)-1.0));
    }
return 4.0*wynik;   
}
double b(int n)
{
    double wynik=1;
    for(int i=1;i<=n;i++)
    {
        wynik*=((4.0*i*i)/(4.0*i*i-1));
    }
return 2.0*wynik;   
}
double c(int n)
{
    double wynik=0;
    for(int i=1;i<=n;i++)
    {
        wynik+=1.0/((2.0*i-1)*(2.0*i-1));
        wynik=sqrt(wynik*8.0);
    }
return wynik;
}
int main()
{
    cout<<a(1'000'000)<<endl;
    cout<<b(1'000'000)<<endl;
    cout<<b(1'000'000)<<endl;
}
// wszystkie cyfry są zgodne z rozwinieciem liczby pi dla każdego ze sposobów dokładnośc wypisania jest do 5 miejsca
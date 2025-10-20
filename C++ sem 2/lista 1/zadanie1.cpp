//Maciej Szozda zadanie 1 lista 1
#include <iostream>
using namespace std;
int main()
{
    for (int x=0;x<41;x++)
    {
        int silnia=1;
        if(x==0)
        {
            silnia=1;
        }
        else
        {
            for(int i=x;i>1;i--)
		        silnia=silnia*i;
        }
    cout<<x<<"!= "<<silnia<<endl;
    }
}
//prawidłowe wyniki są do 15 wyniki nie są prawidłowe od pewnego momentu ponieważ int jest zapisywany 
//przpomocy 32 bitów które pozwalają na zapis nie wiekszej niż 2 147 483 647 która jest maksymalną liczbą mozliwą do zapisania w tym formacie
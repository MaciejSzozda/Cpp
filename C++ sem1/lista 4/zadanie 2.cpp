#include <iostream>
#include <time.h>
#include<fstream>
using namespace std;
float srednia(int a)
{
    srand(time(NULL));
    float n;
    float suma=0;
    for(int i=0;i<a;i++)
    {
        float n=(float) rand()/
    RAND_MAX;
        suma=suma+n;
    }
    float sr=suma/a;
    return sr;
}
int main()
{
    int x=10;
    ofstream file;
    file.open("dane.txt");
    float a;
    if(file.is_open())
    {
        for(int i=0;i<5000;i+=10)
        {
            cout<<srednia(x)<<endl;
            a=srednia(x);
            file<<a<<endl;
            x=x+10;
        }
    }
file.close();
return 0;
}

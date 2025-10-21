#include <iostream>
using namespace std;
int main()
{
    const int W=40;
    const int H=70;
    for(int x=0;x<H;x++)
    {
        for(int y=0;y<W;y++)
        {   int r = (y/float(W))*255;
            int g = (x/float(H))*155;
            int b = (y/float(W))*55;
            cout<<"\x1b[48;2;"<<r<<";"<<g<<";"<<b<<"m"<<"   \x1b[0m";
        }
        cout<<endl;
        }
    return 0;
}

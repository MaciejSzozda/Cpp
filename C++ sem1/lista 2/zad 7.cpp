#include <iostream>
#include <math.h>
using namespace std;
int main()
{
for(int x=0;x<=100;x+=1)
{
    float rad=(x*M_PI/180);
    cout<<x<<"\t"<<cos(rad)<<"\t"<<cos(rad)*cos(rad)<<"\t"<<endl;
}
    
}

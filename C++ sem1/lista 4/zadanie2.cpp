#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
float srednia(int n)
{
   srand(time(NULL));
   float suma=0;
   for(int i =0;i<=n;i++)
   {
       float j = rand()%11;
       suma+=j/10;
   }
    float s=suma/n;
    return s;
}

int main()
{
cout<<srednia(100)<<endl;
system("PAUSE");
    return 0;
}

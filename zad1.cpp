#include<iostream>
using namespace std;

float myFunction(int liczba)
{
    float x=1/(float)liczba;
    return x;
}
int main()
{
    cout<<myFunction(8)<<endl;
}

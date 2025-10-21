#include <iostream>
#include <fstream>
using namespace std;
int fib(int n)
{
    if(n<3)
        return 1;
    return fib(n-2)+fib(n-1);
}
int main()
{
    ofstream File;
    File.open("test.txt");
    if(File.is_open())
    {
        for(int i=1;i<20;i++)
        {
            cout<<i<<" "<<fib(i)<<endl;
            File<<fib(i)<<"\n";
        }
    }
    File.close();
    return 0;
}


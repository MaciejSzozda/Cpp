#include <iostream>
#include <unistd.h>
using namespace std;
int main()
{
    int x=0;
    while (x < 1)
    {
            cout<<"\x1b[47m                \x1b[0m"<<endl;
            cout<<"\x1b[43m                \x1b[0m"<<endl;
            cout<<"\x1b[43m     \x1b[0m\x1b[48m  \x1b[0m\x1b[43m  \x1b[0m\x1b[48m  \x1b[0m\x1b[43m     \x1b[0m"<<endl;
            cout<<"\x1b[43m                \x1b[0m"<<endl;
            cout<<"\x1b[43m  \x1b[0m\x1b[48m  \x1b[0m\x1b[43m        \x1b[0m\x1b[48m  \x1b[0m\x1b[43m  \x1b[0m"<<endl;
            cout<<"\x1b[43m    \x1b[0m\x1b[48m        \x1b[0m\x1b[43m    \x1b[0m"<<endl;
            cout<<"\x1b[43m                \x1b[0m"<<endl;
        sleep(1);
            cout << "\x1b[2J\x1b[1;1H";
            cout<<"\x1b[47m                \x1b[0m"<<endl;
            cout<<"\x1b[43m                \x1b[0m"<<endl;
            cout<<"\x1b[43m     \x1b[0m\x1b[48m  \x1b[0m\x1b[43m  \x1b[0m\x1b[48m  \x1b[0m\x1b[43m     \x1b[0m"<<endl;
            cout<<"\x1b[43m                \x1b[0m"<<endl;
            cout<<"\x1b[43m                \x1b[0m"<<endl;
            cout<<"\x1b[43m   \x1b[0m\x1b[48m          \x1b[0m\x1b[43m   \x1b[0m"<<endl;
            cout<<"\x1b[43m                \x1b[0m"<<endl;
        sleep(1);
            cout << "\x1b[2J\x1b[1;1H";
            cout<<"\x1b[47m                \x1b[0m"<<endl;
            cout<<"\x1b[43m                \x1b[0m"<<endl;
            cout<<"\x1b[43m     \x1b[0m\x1b[48m  \x1b[0m\x1b[43m  \x1b[0m\x1b[48m  \x1b[0m\x1b[43m     \x1b[0m"<<endl;
            cout<<"\x1b[43m                \x1b[0m"<<endl;
            cout<<"\x1b[43m     \x1b[0m\x1b[48m      \x1b[0m\x1b[43m     \x1b[0m"<<endl;
            cout<<"\x1b[43m     \x1b[0m\x1b[48m      \x1b[0m\x1b[43m     \x1b[0m"<<endl;
            cout<<"\x1b[43m                \x1b[0m"<<endl;
        sleep(1);
            cout<<"\x1b[2J\x1b[1;1H";


     }
    return 0;
}

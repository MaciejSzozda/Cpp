//Maciej Szozda zadanie 3 lista 4
#include<iostream>
#include<string.h>
int main (int argc, char *argv[])
{
    float wynik=0;
    for (int i=1;i<argc;i++)
    {
        auto str1="--help";
        auto str2="-h";
        if(strcmp(argv[i],str1)==0 || strcmp(argv[i],str2)==0)
        {
            std::cout<<"program słóży do sumowania liczb"<<std::endl;
        }
        wynik+=atof(argv[i]);
    }
    std::cout<<wynik<<std::endl;
    return 0;
}

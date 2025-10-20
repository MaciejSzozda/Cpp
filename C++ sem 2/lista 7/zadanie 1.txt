//Maciej Szozda lista 7 
#include<iostream>
#include<vector>
#include<algorithm>    //count_if,sort
struct Zliczaj_5
{
    bool operator()(int k) const {return k==5;}
};
struct sortuj
{
    bool operator()(int a, int b) const { return a%10 < b%10; }
};
int main()
{
    std::vector<int> v={1,5,16,12,35,6,13,45,5,8};
    
    auto print = [&v](std::string_view const rem) {
        for (auto a : v) 
    {
        std::cout << a <<" "; 
    }
        std::cout<<rem<<"\n";
    };

    std::cout<<std::count_if(begin(v),end(v),Zliczaj_5())<<" : zliczanie 5"<<"\n";
    std::cout<<std::count_if(begin(v),end(v),[](int k){return k==8;})<<" : zliczanie 8"<<"\n";
    std::sort(v.begin(), v.end(), sortuj());
    print(": podpunkt a");
    std::sort(v.begin(),v.end(),[](int a , int b){return a%10<b%10;});
    print(": podpunkt b");
}

//Maciej Szozda zadanie 1 lista 4
#include <iostream>
#include <vector>

float operator*(std::vector<float> v1, std::vector<float> v2)
{
    float iloczyn = 0;
    for (int i=0; i<v1.size(); i++)
    {
        iloczyn += v1[i]*v2[i];
    }
    return iloczyn;
}

int main()
{
    std::vector<float> wektor1{5.0, 4.0, 3.0};
    std::vector<float> wektor2{1.0, 2.0, 3.0};
    std::cout << wektor1*wektor2 << std::endl;
}
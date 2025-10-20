//Maciej Szozda zadanie 2 lista 4
#include <iostream>
#include <cmath>

double find_root(double (*f) (double),double a, double b, double tolerance=1e-10)
{
    while (abs(a - b) > tolerance)
    {
    double x = (a + b) / 2;
    if ((x) * f(a) < 0)
    {
        b = x; 
    }
    else
        a = x;
    }
return ((a + b) / 2);
}
double f1(double x)
{
	return cos(x) - x;
}
double f2(double x)
{
	return cos(x) - 0.5;
}
int main()
{
    std::cout<<find_root(f1,0,2)<<std::endl;
    std::cout<<find_root(f2,0,1.5);
}
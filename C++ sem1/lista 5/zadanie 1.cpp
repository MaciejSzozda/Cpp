#include <iostream>
using namespace std;
float readHeight()
{
    float Height;
    cout<<"podaj wzrost w metrach "<<endl;
    cin>>Height;
    return Height;
}
float readMass()
{
    float Mass;
    cout<<"podaj mase w kilogramach zaokroglij do calych kilogramow"<<endl;
    cin>>Mass;
    return Mass;
}
float BMI(float x,float y)
{
    float bmi;
    bmi=y/(x*x);
    return bmi;
}
int BMIprint(float BMI)
{
   cout<<BMI<<endl;
}
int main()
{
    BMIprint( BMI( readHeight(), readMass() ) );
}


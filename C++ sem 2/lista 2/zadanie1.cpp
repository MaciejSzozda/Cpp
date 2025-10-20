//Maciej Szozda zadanie 1 lista 2
#include <iostream>

//a
int suma(const int tab[], unsigned size)

{
    int suma{0};
    for (int i = 0; i < size; i++)
    {
        suma += tab[i];
    }

    return suma;
}

//b
void suma(const int tab[], unsigned size, int* result)

{
    for (int i = 0; i < size; i++)
    {
        *result += tab[i];
    }
}

//c
void pisz(const int* tab, size_t size, std::ostream* out)

{
    for (int i = 0; i < size; i++)
    {
        *out << tab[i] << " ";
    }
}

//d
void iota(int tab[], unsigned size)

{
    for (int i = 0; i < size; i++)
    {
        tab[i] = i;
    }
}

//e
void reverse(int* tab, size_t size)

{
    for (
        int i = 0, j = size - 1;
        i < size / 2;
        i++, j--
    )
    {
        std::swap(tab[i], tab[j]);
    }
}

int dot_product(const int* tab1, const int* tab2, size_t size)

{
    int wynik{0};
    for (int i = 0; i < size; i++)
    {
        wynik += (tab1[i] * tab2[i]);
    }

    return wynik;
}

void print(const int* t, const size_t &size);
 
//sprawdznie
int main()

{
    const unsigned S = 10;
    int t[S] = { 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 };

    //a
    std::cout << "a)" << suma(t, S) << "\n";

    //b
    int r{0};
    suma(t, S, &r);
    std::cout << "b)" << r << "\n";

    //c
    std::cout << "c) ";
    pisz(t, 5, &std::cout);

    //d
    std::cout << "\nd)\n";
    iota(t, S);
    print(t, S);

    //e
    std::cout << "e)\n";
    reverse(t, S);
    print(t, S);

    //f
    int X[] = {6, 3,5};
    int Y[] = {2, 8,-3};
    std::cout << "f) " << dot_product(X, Y, 3) << "\n";


    return 0;
}

//funkcja wypisująca tablice ułatwiająca sprawdznie
void print(const int* a, const size_t &size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << a[i] << " ";
    }

    std::cout << "\n";
}

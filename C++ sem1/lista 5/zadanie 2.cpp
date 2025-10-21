#include <iostream>
#include <cmath>

using namespace std;

void odwracaj( int *tablica, int rozmiar ){
    for (int i = 0; i < ceil(rozmiar / 2.0); i++) {
        int temp = tablica[i];
        tablica[i] = tablica[rozmiar -1 -i];
        tablica[rozmiar - 1 -i] =  temp;
    }
}

int main() {
    int tab [9] = {1,2,3,6,7,4,3,2,1};

    odwracaj(tab, 9);

    for(int i=0;i<9;i++){
        cout << tab[i] << ", ";
    }
    cout << endl;

    return 0;
}

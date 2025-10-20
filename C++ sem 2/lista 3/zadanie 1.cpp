//Maciej Szozda zadanie 1 lista 3
#include <iostream>

struct Link
{
    int value;
    Link* next=nullptr;
};

//a
size_t size(const Link* head)
{
    int licznik = 0;
    while ( head != NULL) 
    {
        licznik+=1;
        head = head->next;
    }
    return licznik;
}

//b
size_t sum(const Link* head)
{
    int suma=0;
    while ( head != NULL) 
    {
        suma+=head->value;
        head = head->next;
    }
    return suma;
}
int main()
{

//implemetacja listy
Link* a = NULL;
Link* b = NULL;
Link* c = NULL;
a = new Link();
b = new Link();
c = new Link();
a -> value = 2;
a -> next = b;
b-> value = 4;
b-> next = c;
c -> value = 7;
c -> next = NULL;

//wywołanie funkcji
std::cout<<"liczba elementów listy: "<<size(a)<<std::endl;
std::cout<<"suma elementów listy: "<<sum(a);

}
//Maciej Szozda zadanie 3 lista 3
#include <iostream>

struct Link
{
    int value;
    Link* next=nullptr;
};


void reverse(struct Link **head_ref) {
    struct Link *temp = NULL;
    struct Link *prev = NULL;
    struct Link *current = (*head_ref);
    while(current != NULL) {
        temp = current->next;
        current->next = prev;
        prev = current;
        current = temp;
    }
    (*head_ref) = prev;
}

void printL(Link* node)
{
    while (node != NULL)
    {
        std::cout << node->value << " ";
        node = node->next;
    }
}

int main()
{
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

    std::cout<<"Lista przed obruceniem\n";
    printL(a);
    reverse(&a);
    std::cout<<"\nLista po obruceniu\n";
    printL(a);

}
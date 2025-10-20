//Maciej Szozda zadanie 2 lista 3
#include <iostream>

struct Link
{
    int value;
    Link* next=nullptr;
};


void release(Link** phead)
{
    Link* head = *phead;
    Link* tmp=head;
    head = head-> next;
    delete tmp;
    *phead=nullptr;
}


void dodaj(Link** head_ref, int new_value)
{
    Link* new_Link = new Link();
    new_Link->value = new_value;
    new_Link->next = (*head_ref);
    (*head_ref) = new_Link;
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

//implemetacja listy
Link* head = NULL;
dodaj(&head,4);
dodaj(&head,3);
dodaj(&head,2);
dodaj(&head,1);
std::cout<<"Lista\n";
printL(head);
release(&head);
dodaj(&head,1);
std::cout<<"\nzwolnienie miejsc na liście i dodanie tylko jednego elementu dla sprawdznia\n";
printL(head);

}
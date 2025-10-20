//Maciej Szozda lista 3
#include <iostream>

struct Link
{
    int value;
    Link* next=nullptr;
};

//1
//a
size_t size(const Link* a)
{
    size_t licznik = 0;
    while ( a != NULL) 
    {
        licznik+=1;
        a = a->next;
    }
    return licznik;
}

//b
size_t sum(const Link* b)
{
    int suma=0;
    while ( b != NULL) 
    {
        suma+=b ->value;
        b = b->next;
    }
    return suma;
}

//2
void release(Link** phead)
{
    Link* head = *phead;
    if (head==NULL)
    {    
        *phead=nullptr;
    }
    else
    {
        Link* tmp=head;
        head = head-> next;
        delete tmp;
        *phead=nullptr;
        return release(&head);
    }

}

//3
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


void add(Link** head_ref, int new_value)
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
Link* head = NULL;
add(&head,4);
add(&head,3);
add(&head,2);
add(&head,1);
//1
std::cout<<"liczba elementów listy: "<<size(head)<<std::endl;
std::cout<<"suma elementów listy: "<<sum(head);
//3
std::cout<<"\nLista\n";
printL(head);
reverse(&head);
std::cout<<"\nodwrócona lista: \n";
printL(head);
//2
release(&head);
}
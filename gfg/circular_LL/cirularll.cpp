#include <iostream>
using namespace std;

struct node{
    
    int data;
    node *next;
};

class list{
    node *head, *tail;
    public:
    list(){
        head=NULL;
        tail=NULL;
    }
    void insert(int);
    void display();
    void printlist(node *head);
};

void list::insert(int key){
    node *temp= new node;
    temp->data=key;
    temp->next=NULL;
    if (head==NULL){
        head=temp;
        tail=temp;
    }
    else{
        tail->next=temp;
        tail=temp;
    }
    tail->next=head;
}

void list::printlist(node *head){
    if (head==NULL)
    return;
    cout<<(head->data)<<" ";
    for(node *p=head->next; p!=head; p=p->next){
        cout<<(p->data);
    }
}


void list::display()
{
    node *t = head;

    if(head == NULL){
        cout << "list is empty" << endl;
    }
    else
    while(t!=head)
    {
        cout << t->data << " ";
        t = t->next;
    }
    
}

int main()
{
    list li;
    li.insert(2);
    li.insert(3);
    li.insert(4);
    li.insert(100);
    li.insert(-20);
    li.display();
return 0;
}
#include <iostream>
using namespace std;

class box
{
    public:
     int data;
     box *next;
};

// struct box
// {
//     int data;
//     box *next; //address
// };

class list{
    box *head, *tail;
    public:
    list(){
        head = NULL; 
        tail = NULL;
    }
    void insert(int);
    void display();
    void insert_at_position(int, int );
    void insert_at_first(int key)
    {
        box *temp = new box;
        temp->data = key;
        temp->next = head;
        head = temp;
    }

};

void list::insert(int key)
{
    box *temp = new box;   //node is created
    temp->data = key;
    temp->next = NULL;

    //arddress of 1st node in head and in tail
    if(head == NULL)
    {
        head = temp;
        tail = temp;
    }
    else{
        tail->next = temp;
        tail = temp;
    }
}

void list::insert_at_position(int pos, int key)
{
    box *temp = new box;
    temp->data = key;
    box *p, *q;
    p = head;
    for(int i = 0; i < pos-1; i++)
    {
        q = p;
        p = p->next;
    }
    q->next = temp;
    temp->next = p;
}

void list::display()
{
    box *t = head;

    if(head == NULL){
        cout << "list is empty" << endl;
    }
    else
    while(t!=NULL)
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

    li.insert_at_position(2, 1000);

    cout << endl;

    li.display();

    cout << endl;

    li.insert_at_first(-1000);

    li.display();
    return  0; 
}
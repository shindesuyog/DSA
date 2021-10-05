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
        head = NULL;
        tail = NULL;
    }
    void insert(int);
    void display();
    void insert_at_first(int);

};

void list::insert(int key){
    node *temp=new node;
    temp->data=key;
    temp->next=NULL;
    if(head == NULL){
        head=temp;
        tail=temp;
    }
    else{
        tail->next=temp;
        tail=temp;
    }
}

void list::display(){
    node *a = head;
    if(head == NULL){
        cout<<"list is empty"<<endl;
    }
    else
    while(a!= NULL){
        cout<< a->data<<", ";
        a=a->next;
    }
    cout<<endl;
}

void list::insert_at_first(int key){
    node *temp= new node;
    temp->data=key;
    temp->next=head;
    head=temp;
}

int main(){
    list li;
    li.insert(2);
    li.insert(6);
    li.insert(8);
    li.insert(189);
    li.display();
    li.insert_at_first(95);
    li.display();

    return 0;
}
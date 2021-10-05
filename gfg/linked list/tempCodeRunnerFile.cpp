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
    void search(int);
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
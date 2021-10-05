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

void list:: search(int x){
    node *a=head;
    int count=1;
    while(a != NULL){
        if(a->data==x){
            cout<<"found at "<<count;
            break;
        }
        else{
            count++;
            a=a->next;
        }

    }
    cout<<"not found";
}

int main(){
    list li;
    li.insert(2);
    li.insert(3);
    li.insert(4);
    li.insert(100);
    li.insert(-20);
    li.search(100);
}
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
    void delete_first();


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

void list::delete_first(){
    if(head==NULL){
        cout<<"no node";
    }
    else{
        node *temp=head->next;
        delete head;
    }
}




int main(){
    list li;
    li.insert(2);
    li.insert(6);
    li.insert(8);
    li.insert(189);
    li.display();
    li.delete_first();
    li.display();

    return 0;
}
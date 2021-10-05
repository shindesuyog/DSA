#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;
};

class list{
    node *head, *tail;
    public:
    list(){
        head=NULL;
        //tail=NULL;
    }

    void insert(int);
    void display();
};
  
void list::insert(int key){
    node *temp= new node;
    temp->data=key;
    temp->next=NULL;

    if (head == NULL){
        head=temp;
        tail=temp;
    }
    else{
        tail->next=temp;
        tail=temp;
    }
}

void list::display(){
    node *t=head;
    if (){
        cout<<"list is empty"<<endl;
    }
    else{
        while(head !=NULL){
            cout<<t->data<<" ";
            t=t->next;
        }
    }
}


int main(){
    list li;
    li.insert(1);
    li.insert(2);
    li.insert(3);
    li.insert(4);
    li.insert(5);
    li.display();

}
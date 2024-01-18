//deletion at beginning 
#include <iostream>
using namespace std;

struct node {
    int data;
    struct node*next;
};
struct node*head=NULL;
struct node*current=NULL;

void printList(){
    struct node*p=head;
    cout<<"\n[";
    while(p!=NULL){
        cout<<""<<p->data<<"";
        p=p->next; 
};
cout<<"]";
}
//deletion at begin 

void deletionatbegin (int data){
    struct node*lk= (struct node*) malloc(sizeof(struct node));
    lk->data=data;
    lk->next=head;
    head=lk;
}
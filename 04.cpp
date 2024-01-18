#include <iostream>
using namespace std;
struct node{
    int data;
    struct node*next;
};
struct node*head=NULL;
struct node*current=NULL;

void printList(){
    struct node*p=head;
    printf("\n[");
while(p!=NULL){
    printf("%d",p->data);
    p=p->next;
}
printf("]");
}
void insertafternode (struct node*list,int data){
    struct node*lk=(struct node*)malloc(sizeof (struct node));
    lk->data=data;
    lk->next=list->next;
    list->next=lk;
}
//insertion at beginning
void insertatbegin(int data){
    struct node*lk = (struct node*) malloc(sizeof(struct node));
    lk->data=data;
    lk->next=head;
    head=lk;
}
//insert at end 
void insertionend (int data){
struct node*lk =(struct node*)malloc(sizeof(struct node));
lk-> data = data;
struct node*linkedlist = head;
while(linkedlist->next !=NULL){
    linkedlist = linkedlist -> next;
}
linkedlist=lk;
}
int main ()
{insertatbegin(10);
insertionend(18);
insertatbegin(30);
insertafternode(head->next,44);
insertafternode(head->next->next->next,56);
cout<<"linked list \n";
printList();
}
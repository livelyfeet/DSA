#include <iostream>
using namespace std;
struct node {
 int data;
 struct node *next;
};
struct node *head=NULL;
struct node *current =NULL;
// Displaying the list
void printList(){
 struct node *p = head;
 while(p !=NULL) {
 cout << " " << p->data << " ";
 p = p->next;
 }
}
// Insertion at the beginning
void insertatbegin(int data){
 
 //create a link
 struct node *lk = (struct node*) malloc(sizeof(struct node));
 lk->data = data;
 
 // point it to old first node
 lk->next = head;
 //point first to new first node
 head = lk;
}
void deleteatend(){
 struct node *linkedlist = head;
 while (linkedlist->next->next != NULL)
 linkedlist = linkedlist->next;
 linkedlist->next = NULL;
}
int main(){
 insertatbegin(2);
 insertatbegin(39);
 insertatbegin(44);
 insertatbegin(59);
 insertatbegin(60);
 cout << "Linked List: ";
 // print list
 printList();
 deleteatend();
 cout << "\nLinked List after deletion: ";
 printList();
}

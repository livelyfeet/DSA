#include <iostream>
namespace std;
struct node {
    int data;
    node*left;
    node*right;
    node(int val)
    {
        data=val ;
        left=NULL;
        right=NULL;
    }
}
int main()
{struct*root= new root(1);
root->left=new root(2);
root->right=new root(3);
root->left->left=new root(4);
return 0;
}
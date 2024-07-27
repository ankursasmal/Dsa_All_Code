#include <iostream>
#include<stdio.h>
using namespace std;
struct node{
int item;
node *left;
node *right;
};
class BST{
private:
node *root;
protected:
node* delnode(node* ptr,int val){
     ptr=root;
if(ptr==NULL){
  return ptr; 
}
    if(ptr->item>val){
ptr->left=delnode(ptr->left,val);

}
else if(ptr->item<val){
ptr->right=delnode(ptr->right,val);
}

else{
    if(ptr->left==NULL&&ptr->right==NULL){
delete ptr;
return NULL;
    }
    else if(ptr->left==NULL||ptr->right==NULL){
node *child;
child=ptr->left?ptr->left:ptr->right;
delete ptr;
return child;
    }
    else{
        node *prapred,*pred;
        prapred=ptr;
       pred=ptr->left;
while(pred->right!=NULL){
    prapred=pred; //pred k track korar jonno
pred=pred->right;// pred increase hoar aga prapred
}                // k increase;
ptr->item=pred->item;
if(prapred->right==pred){
  prapred->right=delnode(pred,pred->item);
}
else if(prapred->left==pred){
    prapred->left=delnode(pred,pred->item);
}
    }
}return ptr;
}

void pre(node *t){
    if(t!=NULL){
        cout<<t->item;
        pre(t->left);
        pre(t->right);
    }
}
void post(node *t){
    if(t!=NULL){
        post(t->left);
        post(t->right);
        cout<<t->item;
    }
}
public:
void del(int val){
    root=delnode(root,val);
}
BST(){
    root=NULL;
}
void proord(){
    pre(root);
}
bool isempty(){
    if( root==NULL)
    return 0;
    else{
        return 1;
    }
}
 
void insert(int val){
    node *t;
    node *n=new node;
    n->item=val;
    n->left=NULL;
    n->right=NULL;
    if(root==NULL){
root=n;
    }
    else{
        t=root;
        while(t->item!=n->item){
            if(t->item>n->item){
if(t->left!=NULL){
    t=t->left;
}
else{
    t->left=n;
    break;
}

            }
            else{
                if(t->right!=NULL){
                    t=t->right;
                }
                else{
                    t->right=n;
                    break;
                }
            }
        }
        if(t->item==n->item){
            delete t;
    }
    }
}


void preorder(node *root){
    if(root!=NULL){
        cout<<root->item;
       preorder(root->left);
       preorder(root->right); 
    }
}
void inorder(node *root){
    if(root!=NULL){
         preorder(root->left);
       cout<<root->item;
       preorder(root->right); 
    }
}
void postorder(){
    post(root);
} 
    
~BST(){
    while(root!=NULL){
del(root->item);
    }
}
node* scarch(int val){
    node *t;
    t=root;
    if(root==NULL){
        return t;
    }
    else{ 
        t=root;
        while(t!=NULL){
 if(t->item==val){
            return t;
        }
    
    if(t->item<val){
            t=t->left;        
    }
        else{  
             t=t->right;
            }
}    return t;

    }
}

};
int main(){
BST b1;
cout<<b1.isempty();
b1.insert(6);
 b1.insert(9);
 b1.insert(2);
b1.insert(5);
 cout<<b1.scarch(5);
return 0;
}
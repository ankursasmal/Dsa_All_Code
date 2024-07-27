#include <iostream>
using namespace std;
struct node{
    int item;
    int hight;
    node *left;
    node *right;
};
class avl{
    private:
    node *root;
    protected:
    void pre(node *t){
        if(t!=NULL){
            cout<<t->item<<getbalance(t);
            pre(t->left);
            pre(t->right);
        }
    }
   void post(node *t){
        if(t!=NULL){
            pre(t->left);
            pre(t->right); 
           cout<<t->item<<getbalance(t);

        }
    }
   void  in(node *t){
        if(t!=NULL){
            pre(t->left);
      cout<<t->item<<getbalance(t);

            pre(t->right);
        }
   }
    node* minvalue(node *ptr){
node* c=ptr;
while((c->left!=NULL)){
    c=c->left;
}
 return c;

   }
   node* insertion(node *ptr,int val){
    node *n=new node;
    
 if(ptr==NULL){
        n->item=val;
    n->left=NULL;
n->right=NULL;
n->hight=1;
return n;
    }
    if(ptr->item>n->item){
        ptr->left=insertion(ptr->left,val);
    }
    else if(ptr->item<n->item){
ptr->right=insertion(ptr->right,val);
    }
    else{
        return ptr;
    }
    ptr->hight=max(gethight(ptr->left),gethight(ptr->right))+1;
int balance=gethight(ptr);
if(balance>1&&ptr->left->item>val){
   return lrotation(ptr->left);
}
if(balance>1&&ptr->left->item<val){
    ptr->left=rrotation(ptr->left);
   return rrotation(ptr);
}
 if(balance<-1&&ptr->left->item<val){
   return rrotation(ptr->right);
}
if(balance<-1&&ptr->left->item>val){
    ptr->right=lrotation(ptr->right);
   return lrotation(ptr);
} return ptr;
   }
   node* dele(node* ptr,int val){
    if(ptr==NULL){
        return ptr;
    }
    else if(ptr->item>val){
        ptr->left=dele(ptr->left,val);
    }
    else if(ptr->item<val){
        ptr->right=dele(ptr->right,val);
    }
    else{
 if(ptr->left==NULL&&ptr->right==NULL){
    return NULL;
 
}
if(ptr->left==NULL||ptr->right==NULL){
    node* child=ptr->left?ptr->left:ptr->right;
    delete ptr;
      return child;
 
}   
 else{
    node *prapred,*pred;
    prapred=ptr;
    pred=prapred->left;
    while(pred->right!=NULL){
        pred=pred->right;
    }
    ptr->item=pred->item;

if(prapred->right==pred){
    prapred->right=dele(pred,pred->item);
}
else if(prapred->left==pred){
    prapred->left=dele(pred,pred->item);
}
 } }
ptr->hight=max(gethight(ptr->left),gethight(ptr->right))+1;
int balance=gethight(ptr->left)-gethight(ptr->right);
   if(balance>1&&getbalance(ptr->left)>=0){
return lrotation(ptr);
   }
   if(balance>1&&getbalance(ptr->left)<0){
        ptr->left=rrotation(ptr->left);
 return rrotation(ptr);
   } if(balance<-1&&getbalance(ptr->left)<=0){
return rrotation(ptr);
   } if(balance<-1&&getbalance(ptr->left)>0){
    ptr->right=lrotation(ptr->right);
return rrotation(ptr);
   }}
public:
    avl(){   
          root==NULL;
    }
int getbalance(node *ptr){
    if(ptr==NULL){
        return 0;
    }
    else{
        return gethight(ptr->left)-gethight(ptr->right);
    }
}
int gethight(node *ptr){
if(ptr==NULL){
return 0;
}
else{
    return ptr->hight;
}
}
int max(int a,int b){
    return a>b?a:b;
}
void insert(int val){
    root=insertion(root,val);
}
 
node* rrotation(node *A){
    node* B=A->right;
    node *RT=B->left;
    A->right=RT;
    B->left=A;
    A->hight=max(gethight(A->left),gethight(A->right))+1;
    B->hight=max(gethight(B->left),gethight(B->right))+1;
return B;
}
node* lrotation(node *A){
    node *B=A->left;
    node*LT=B->right;
    A->left=LT;
    B->right=A;
    A->hight=max(gethight(A->left),gethight(A->right))+1;
    B->hight=max(gethight(B->left),gethight(B->right))+1;
return B;
}
void preorder(){
    pre(root);
}
void postorder(){
    post(root);
}void inorder(){
    in(root);
}
void del(int val){
    root=dele(root,val);
}
};
int main(){
    avl t;
    t.insert(3);
   t. insert(4);
    t.insert(0);
  t.  insert(6);
 t.   insert(5);
t.inorder();
t.del(4);
t.inorder();
    return 0;
}
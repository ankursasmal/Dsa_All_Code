#include <iostream>
using namespace std;
struct node{
    int item;
    node *next;
};
class stack{
    node *top;
    public:
stack(){
    top=NULL;
}
 int getstart(){
    return top->item;
 }
void push(int data){
node *n=new node;
n->item=data;
if(isempty()){
   n ->next=top;
}
else{
    n->next=top;
    top=n;
}
}
int peek(){
    if(top==NULL){
        cout<<"stack is emppty";
        return -1;
    }
    else{
        return top->item;
    }
}
void pop(){

    node *t;
    if(isempty()){
        cout<<"stack under flow";
    }
    else{
        t=top;
    top=t->next;
    delete t;
    }
}
~stack(){
    while(top!=NULL){
        pop();
    }
}
void reverse(){
    node *t1,*t2;
    if(top && top->next){      // or  (top==NULL||top->next=NULL)   


        t2=NULL;
        do{
            t1=top;
            top=top->next;
            t1->next=t2;
            t2=t1;
        }while(top->next!=NULL);
        top->next=t1;
    }
}

bool isempty(){
    return top==NULL;
}
int length(int x){
 int count=0;
 while(x!=0){
                   //count=x%10;count++;
 x=x/10;
count++;
 }        
   return count; 
}
bool palindrom(int x){
    stack s1;
    int l=length(x);
 int i=l/2;
 while(i!=0){
   s1.push(x%10);
    x=x/10;
    i--;
 }
    if(l%2!=0){
        x=x/10;
    }
    else{
        while(x!=0){
            if(s1.peek()==x%10){
                s1.pop();
                x=x/10;
            }
            else{
                return false;
            }
            }return false;
    }
}
stack(stack &s1){
    node *t,*n,*p=NULL;
t=s1.top;
while(t!=NULL){
n=new node;
n->item=t->item;
if(top==NULL){
top=n;
}
else{
    t->next=n;
    t=n;
    t=t->next;
}
}
if(p!=NULL){
    p->next=NULL;
}
}
void operator=(stack &s1){
     node *t,*n,*p=NULL;
t=s1.top;
while(t!=NULL){
n=new node;
n->item=t->item;
if(top==NULL){
top=n;
}
else{
    t->next=n;
    t=n;
    t=t->next;
}
}
if(p!=NULL){
    p->next=NULL;
}
}
};
void rev(stack &s1){        //non member ba nala
    stack s2;                   // extra copy and assignment opperator
    while(!s1.isempty()){     //bana ta hoba;
                               //copy and assingment same sudu syntex different
s2.push(s1.peek());
s1.pop();
}
s2=s1;
}

int main(){
    stack b;
    b.push(1);
    cout<<b.peek();
b.pop();
 b.push(2);
     b.push(3);
    cout<<b.peek();
    b.pop();
    cout<<b.peek();
        b.pop();
          b.push(6);
     b.push(7);
    cout<<b.peek();
        b.pop();

    cout<<b.peek();
        b.pop();
    cout<<b.peek();
 b.push(4);
     b.push(5);
             b.pop();


    cout<<b.peek();
        b.pop();

    return 0;
}









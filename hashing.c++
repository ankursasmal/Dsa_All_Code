 #include <iostream>
 using namespace std;
struct node{
    node *next;
int pno;
 };
class hashing{
node *start;
public:
hashing();
int hf(int);
void insert(int);
void reverse();
void val();
bool isempty();
void   collition(int key);
int getpno(node*);
};
int hashing:: getpno(node* t){
    return t->pno;
}

//open hashing so join after another
void hashing:: collition(int key){
    hashing h;
    node *t=start;
    while(t!=NULL){
if(hf(key)==h.getpno(t)){
 node *n=new node;
n->pno=hf(key);
n->next=t->next;
t->next=n;
}
else{
    insert(key);
}
 t=t->next; 
}

}

hashing:: hashing(){
     start=NULL;
}
int hashing:: hf(int key){
    return key%10;
}
bool hashing:: isempty(){
    return start==NULL;
}
void hashing:: insert(int p){
    node *n=new node;
     n->pno=hf(p);
    node *t;
    t=start;
    if(isempty()){
        n->next=start;
        start=n;
    }
   else if(n->pno>t->pno){
        n->next=start;
        start=n;
    }
    else{
        node *p=NULL;
    while(t!=NULL){

   if( t->pno<=n->pno ){
n->next=p->next;
p->next=n;
p=t;
t=t->next;
    }
   else{  
break;
}
    }
    n->next=t->next;
t->next=n;
    }
}
void hashing:: reverse(){
    node *t1, *t2=NULL;
 while(t1->next!=NULL){
t1=start;
start=start->next;
t1->next=t2;
t2=t1;
     }
     start->next=t1;
     }
void hashing:: val(){
    node *t=NULL;
    t=start;
    while(t!=NULL){
        cout<<t->pno<<"->";
        t=t->next;
    }
}
 int main(){
    hashing h;
   cout<< h.isempty();
    h.insert(79);
    h.insert(90);
    h.insert(56);
    h.insert(44);
    h.insert(38);
    h.insert(23);
   cout<< h.isempty();
h.reverse();
h.val();
          return 0;
    }
 
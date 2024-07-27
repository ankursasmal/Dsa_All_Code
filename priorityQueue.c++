#include <iostream>
using namespace std;
struct node{
    int item;
    int pno;
    node  *next;
};
class priorty{
node *start;
public:
priorty(){
    start=NULL;
}
bool isempty(){
   if(start==NULL){
return true;
   }return false;
}
void insert(int val,int pno){
    node *n=new node;
    node *t;
    n->item=val;
    n->pno=pno;
    if(isempty()){
 n->next=NULL;
    start=n;
    }
    else{  
        if(start->pno<n->pno){
n->next=start;
start=n;
        }
        else{
   t=start;
   while(t->next!=NULL){
    if(t->next->pno>n->pno){
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
    
}
    void del(){
        if(isempty()){
            cout<<"can't del";
        }
        else{
            node *t;
            t=start;
                 start=t->next;
            delete t;
        }
    }
    int highestpriorty(){
        if(isempty()){
       return 0;      
   }
        return start->item;
    }
    int getprinumber(){
        if(isempty()){
       return 0;      
   }
   else{
    return start->pno;
    
    }
    }
    ~priorty(){
        while(start!=NULL){
            del();
        }
    }
void minpriorty(priorty &q){     //but it is expensive
node *t,*t1=NULL;                    //so we use doublilinked list
 do{                            //or we can use last pointer
    t=start;
    start=start->next;
    t->next=t1;
    t1=t;
 }
 while(start->next!=NULL);
start->next=t1;
 
}


};
int main(){
priorty p;
cout<<p.isempty();
// p.insert(3);
// p.insert(2);
cout<<"\n"<<p.isempty();
p.del();
p.del();
cout<<"\n"<<p.isempty();

cout<<p.getprinumber();
 
    return 0;
}
#include <iostream>
using namespace std;
struct node{
int item;
node *next;
node *pre;
};
class DLL{
private:
node *start;
public:
DLL();
 void insertFrist(int val);
void insertlast(int val);
node* scarch(int val);
void insertAfter(node *p,int val);
void delFrist();
void deleteLast();
void deletenode(node *ptr);
 void deletany_node();
 void show();
~DLL();
 

};
 void  DLL:: show(){
    node *t;t=start;
    while(t!=NULL){
    cout<<t->item<<" ";
    t=t->next;
    }
 }
 
//  void dll:: delNOde(){
//      node *t=NULL;
//     node *t1=NULL;
//     int p;  //possion of del index
//     if(start==NULL){
//         cout<<"can't del";
//     }
//     else{
//         cin>>p; //kon possition del hoba
//         t=start; 
//         int i=0;
//     while(i!=p){
        
//         t1=t;
//         t=t->next;
//         i++;
//     }
//     t1->next=t->next;
//     t->next->pre=t1;
//     cout<<t->val;
//     delete t;

//     }

// }

DLL::DLL(){
    start=NULL;
}
void DLL::insertFrist(int val){
    node *n=new node;
    n->item=val;

if(start==NULL){
n->next=start;
n->pre=NULL;
start=n;
}
else{
n->next=start;
n->pre=NULL;
start->pre=n;
start=n;

}
}
void DLL::insertlast(int val){
    node *n=new node;
    node *t;
    n->item=val;
    if(start==NULL){
        n->next=NULL;
        n->pre=NULL;
        start=n;

    }
    else{
        t=start;
        n->next=NULL;
while(t->next!=NULL){
    t=t->next;
}
n->pre=t;
t->next=n;
 }
}
node* DLL::scarch(int val){
    node *t;
    t=start;
    while(t!=NULL){
       if(t->item==val){
        return t;
        }
        t=t->next;
    }return t;     //NULL
  }
void DLL:: insertAfter(node *t,int val){
    node *n=new node;
n->item=val;
n->next=t->next;

n->pre=t;
    if(t->next!=NULL){
    t->next->pre=n; 
    }
       t->next=n;
}
void DLL::delFrist(){
    
    node *t;
    t=start;
    start=start->next;         //start=t->next; //a casa command ddirect t hata jaba
    if(start->next!=NULL){     //t->next=!null 
    start->next->pre=NULL;    
    }
    delete t;
}

void DLL:: deleteLast(){
    node *t;
    t=start;
    if(start==NULL){
    cout<<"empty";
    }
    else if(start->next==NULL){ //(t->pre==null)
start=NULL;                      
delete start;                   //delete t;
    }
   else{ 
     while(t->next->next!=NULL){ //(t->next!=NULL)
        t=t->next;                 
    }
    t->next=NULL;              //if(t->pre!=NULL){
    delete t->next;           //t->pre->next=NULL;
                             //delete t;
   }
}
void DLL:: deletenode(node *tem){
    if(start!=NULL){
       if(tem->pre!=NULL) {       //frist chack preivios node acha ki na
tem->pre->next=tem->next;
       }    
       else{
        cout<<"tem & frist node ka";
        delFrist(); //start=tem->next;
       }
 if(tem->next!=NULL){        //next node achs ki na chack koro
    tem->next->pre=tem->pre; //tem->pre=null hola null store hoa jaba

 }
 else{
    cout<<"tem & last node";
        
    deleteLast();//tem->pre->next=NULL;
 }
  }                  
}

DLL:: ~DLL(){
    while(start!=NULL){
delFrist() ;
   }
}

//    ~DLL(){
//     while(start!=NULL){
//         deleteLast();
//     }
//    }
int main(){
    DLL obj;
    obj.insertFrist(4);
        obj.insertFrist(9);
    obj.insertFrist(7);
    obj.insertFrist(2);
    obj.insertFrist(1);

    cout<<obj.scarch(4);
obj.show();
    // obj.delet();
    obj.show();
    return 0;
}
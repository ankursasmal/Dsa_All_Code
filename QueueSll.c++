#include<iostream>
using namespace std;
struct node{
int item;

node *next;
};
class queue{
private:
 node *rear;
node *front;
public:
queue(){
 rear=NULL;
front=NULL;
}
bool isempty(){
    return (front==NULL||rear==NULL);
} 
//using t pointer
// void enqueue(int val){
//    node *n=new node;
//     n->item=val;
//  if(isempty()){
//     n->next=rear;
//     rear=n;
//     front=n;
//  } 
// else{
//     rear=front;
// while(rear->next!=NULL){
//     rear=rear->next;
// }

// n->next=rear->next;
// rear->next=n;
//  rear=n;
//  }
//   }
void insert(int val){
    node *n;
    n=new node;
    n->item=val;
    n->next=NULL;
    if(isempty()){
        front=rear=n;
    }
    else{
        rear->next=n;
        rear=n;
    }
}
    int getrear(){
        if(isempty()){
            return 0;
        }
        else{                       //value return
            return rear->item;
        }

    }

    // node* getrear(){
    //     if(isempty()){
    //         return 0;        //node return
    //     }
    //     else{
    //         return rear;
    //     }

    // }
int getfront(){
        if(rear==NULL && front==NULL){
            return 0;                   // value return
        }
        else{
            return front->item;
        }

    }
    // node* getfront(){
    //     if(isempty()){
    //         return rear;     //or NULL
    //     }
    //     else{
    //         return rear;
    //     }
    // }
    void delQueue(){
        if(isempty()){
            cout<<"can't delete";
        }
        else{
            node *t;
            t=front;
            front=front->next;
            if(front==NULL){
                rear=NULL;
            }
delete t;
        }
    }
    
    ~queue(){
        while (!isempty()){       //(front!=NULL)
            delQueue();
        }
    }
    int countnode(){
        int count=0;
        node *t;
t=front;
while(t!=NULL){
    count++;
    t=t->next;
}
return count;
    }
  
};
int main(){
    queue b1;
     b1.insert(1);
     cout<<b1.getfront();
         b1.delQueue();
  
 b1.insert(2);
  b1.insert(3); 
  cout<<b1.getfront();
b1.insert(4);
b1.insert(5);
  b1.delQueue();
cout<<b1.getfront();
b1.insert(6);
b1.insert(7);
  b1.delQueue();
  cout<<b1.getfront();
    b1.delQueue();
cout<<b1.getfront();
    b1.delQueue();
    cout<<b1.getfront();
    b1.delQueue();
    cout<<b1.getfront();
    b1.delQueue();
      
 
    return 0;

}
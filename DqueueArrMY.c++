 #include <iostream>
 using namespace std;
  struct node{
    int item;
    node *next;
  };
  class queue{
  int rear;
  int front;
  int *ptr;
  int capacity;
  public:
  queue(int cap){
    rear=front=-1;
    capacity=cap;
    ptr=new int[capacity];
  }
  void doublequeue(queue &q){
    int *n=new int[capacity*2];
int i=q.front;
int n=q.count();
while(n!=0){
    n[i]=q.ptr[i];
if(i==capacity-1){
    i=0;
}
else{
    i++;
}
n--;

}
delete[]ptr;
ptr=n;
capacity*=2;
  }
  void halfqueue(){
int *n=new int[capacity/2];
int i=front;
int n=count();
while(n!=0){
    n[i]=ptr[i];
    if(i==capacity-1){
i=0;
    }else{
        i++;
    }
    n--;
}
delete []ptr;
ptr=n;
  }
  void insertf(int val){
    if(isfull()){
        cout<<"can't insert";
    }
   else if(isempty()){
        front=capacity-1;
        ptr[front]=val;
    }
    else{
        front--;
        ptr[front]=val;
    }
  }
  void insertr(int val){
    if(isfull()){
        cout<<"can't insert";
    }else if(isempty()){
        rear=front=0;
        ptr[rear]=val;
    }
    else{
        rear++;
        ptr[rear]=val;
    }
  }
  void delf(){
    if(isempty()){
 cout<<"can't del";
    }
    else if(front==capacity-1){
        front=0;
    }
     else if(front==rear){
        front=rear=-1;
     } else{  front++;
     }
    }
  
  void delr(){
    if(isempty()){
        cout<<"can't insert";
    }
    else if(rear==front){
rear=front=-1;
    }
    else if(rear==0){
        rear=capacity-1;
    }else{
        rear--;
    }
   }
   ~queue(){
    delete[]ptr;
   }
  bool isempty(){
    return rear==-1 && front==-1;
  }
  bool isfull(){
    return ((rear==capacity-1 && front=0 )||rear==front-1);
  }

int count(){
     int c=0;
    if(isempty()){
        return 0;
    }
    else{
    int i=front;
    while(i!=rear){
        if(i==capacity-1){
            i=0;
        }else{
        i++;
        }
        c++;

    }return c+1;
    }
}
queue(queue &q){
rear=q.rear;
front=q.front;
capacity=q.capacity;
int n=q.count();
int i=q.front;
while(n!=0){
    ptr[i]=q.ptr[i];
    if(i==capacity-1){
        i=0;
    }
    else{
        i++;
    }
    n--;
}
}

queue operator=(queue &q){
rear=q.rear;
front=q.front;
capacity=q.capacity;
if(ptr!=NULL){
    delete[]ptr;
}
int n=q.count();
int i=q.front;
while(n!=0){
    ptr[i]=q.ptr[i];
    if(i==capacity-1){
        i=0;
    }
    else{
        i++;
    }
    n--;
}
}
  };
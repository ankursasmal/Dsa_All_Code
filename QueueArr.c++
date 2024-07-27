#include <iostream>
using namespace std;
class queue{
private:
int capacity;
int rear;
int front;
int *ptr;
public:
queue& operator=(queue &b1){
    capacity=b1.capacity;
    rear=b1.rear;
    front=b1.front;
    if(ptr!=NULL){       //memory leek na ho 
        delete[]ptr;    //tar jono b1
    }
    ptr=new int[capacity];
                                                    //loop dia korla o hoba
       int n=countnum();                                // for(int i=0;i<capacity-1;i++){
         int i=front;                                          //     ptr[rear]=b1.ptr[rear];
          while(n!=0){                                           // }
ptr[i]=b1.ptr[i];
if(i==capacity-1){
    i=0;}
    else{
        i++;
    }
 n--;       
 }
 
}

queue(queue &b1){
    capacity=b1.capacity;
    rear=b1.rear;
    front=b1.front;
    ptr=new int[capacity];
                                             //loop dia korla o hoba
int n=countnum();                                // for(int i=0;i<capacity-1;i++){
         int i=front;                                          //     ptr[rear]=b1.ptr[rear];
          while(n!=0){                                           // }
ptr[i]=b1.ptr[i];
if(i==capacity-1){
    i=0;}
    else{
        i++;
    }
 n--;
 }
 
}
queue(int cap){
    capacity=cap;
    rear=-1;
    front=-1;
    ptr=new int[capacity];
}
bool isempty(){
    cout<<"under flow";
    return (rear==-1 &&front==-1);
}
bool isfull(){
    cout<<"overflow";
    return (capacity==rear+1 && front==0|| front==rear+1);
}
void insert(int val){
if(isfull()){
    cout<<"can not insert";
}
else if(isempty()){
    front=rear=0;
    ptr[rear]=val;
}
else if(rear==capacity-1){
    rear=0;
    ptr[rear]=val;
}
else{
rear++;
ptr[rear]=val;
}
}

int getRear(){
    if(isempty()){
        return -1;
    }else{
  return ptr[rear];
}
}
int getFront(){
    if(isempty())
{
    return -1;
}  
else{  
    return ptr[front];
}
}
void del(){

    if(isempty()){
cout<<"under flow";     }

     else if(front==rear && rear!=-1 && front !=-1){
            front=-1;rear=-1;        //singal element casa rear front same index;
        }
      else if(front==capacity-1){
front=0;
        }
        else{
front++;
        }

    }

int countnum(){
    if(isempty()){
        return 0;

    }
    if(front<=rear){
        return rear-front+1;
    }
    else{                               //front>rear
        return capacity-(front-rear-1);   //numbre of void block=front+rear+1;
    }                                  //number of filled block=capacity-front+rear+1;
}
~queue(){
    delete[]ptr;
}

};
int main(){
    queue b1(3);
    queue b2(5);
    b2=b1;
      
    return 0;
}
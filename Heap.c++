#include<iostream>
using namespace std;
#define EMPTY_HEAP -2;
class heap
{
    private:
        int capacity;
        int lastIndex;
        int *ptr;
    public:
        heap(int);
        bool isEmpty();
        // void append(int);
        void insert(int);
        void edit(int,int);
        int del(int);
        bool isFull();
        int get(int);
        int count();
        int find(int);
        void doubleArray();
        void halfArray();
        int size();
        int greatestval();
        ~heap();
        
        heap(heap &h){
            capacity=h.capacity;
            lastIndex=h.lastIndex;
            ptr=new int[capacity];
            for(int i=0;i<=lastIndex;i++){
                ptr[i]=h.ptr[i];
            }
        }
        heap& operator=(heap &h){
            capacity=h.capacity;
            lastIndex=h.lastIndex;
                   if(ptr!=NULL){
                delete []ptr;
            }   
                    ptr=new int[capacity];

            for(int i=0;i<=lastIndex;i++){
                ptr[i]=h.ptr[i];
            }
        
        return *this;  //nijar address name *this
        }
 

int heap:: greatestval(){
    if(!isEmpty()){
     return ptr[0];
    }
    throw EMPTY_HEAP;
}
 heap& operator=(heap &d){
    lastIndex=d.lastIndex;
    capacity=d.capacity;

 
// if(ptr!=NULL){
//     for(int i=0;i<count();i++){
// del(i);
//     }
// }
    if(ptr!=NULL){
delete ptr;  
  ptr=NULL;

    }
       ptr=new int[capacity];

    for(int i=0;i<count();i++){
        ptr[i]=d.ptr[i];
    }
 return *this;
 }

};

int heap::del(int index)
{
    int i;
    int item;
    int tem;
     int left;
    int right;
    if(isEmpty()){
 throw  EMPTY_HEAP;
    }   
    else
    { item=ptr[0];
tem=ptr[lastIndex];
lastIndex--;
      index=0;
      left=1;
      right=2;
      while(left<lastIndex){
     
        if(ptr[left]>ptr[right]){
             if(tem<ptr[left]){
ptr[index]=ptr[left];
index=left;      //index ar position
             }
             else{
                break;
             }
        }
        else{
            if(tem<ptr[right]){
ptr[index]=ptr[right];
index=right;      //index ar position
             }
             else{
                break;
             }

        }
       left=2*index+1;
      right=2*index+2;
      }
      if(left==lastindex && tem<ptr[left]){       //only two node
        ptr[index]=ptr[left];
        index=left;
      }
      ptr[index]=tem;

    
        if(capacity/2>=lastIndex+1 && capacity>1)
            halfArray();
            return item;
    }
    
}
void heap::insert(int data)
{if(isFull()){
            doubleArray();}
     int index;
    int parant;
    for(index=lastIndex+1;index>0;index=parant){
   int parant=(index-1)/2;
   if(data>ptr[parant]){
   ptr[index]=ptr[parant];
   }
   else{
    break;
   }
    }
   ptr[index]=data;
        lastIndex++;
         
    
}
 
// void heap::append(int data)
// {
//     if(isFull())
//         doubleArray();
//     lastIndex++;
//     ptr[lastIndex]=data;
// }
int heap::size()
{
    return capacity;
}
void heap::halfArray()
{
    int *temp=new int[capacity/2];
    for(int i=0;i<=lastIndex;i++)
        temp[i]=ptr[i];
    delete []ptr;
    ptr=temp;
    capacity/=2;
}
void heap::doubleArray()
{
    int *temp=new int[capacity*2];
    for(int i=0;i<=lastIndex;i++)
        temp[i]=ptr[i];
    delete []ptr;
    ptr=temp;
    capacity*=2;
}
heap::heap(int cap)
{
    capacity=cap;
    lastIndex=-1;
    ptr=new int[capacity];

}
bool heap::isEmpty()
{
    return lastIndex==-1;
}
void heap::edit(int index,int data)
{
    if(index>=0&&index<=lastIndex)
        ptr[index]=data;
}
bool heap::isFull()
{
    return lastIndex==capacity-1;
}
int heap::get(int index)
{
    if(index>=0 && index<=lastIndex)
        return ptr[index];
    cout<<endl<<"Invalid index or empty array";
    return -1;
}
int heap::count()
{
    return lastIndex+1;
}
heap::~heap()
{
    delete[]ptr;
}
int heap::find(int data)
{
    int i;
    for(i=0;i<=lastIndex;i++)
        if(ptr[i]==data)
            return i;
    return -1;
}
void heapsort(int a[],int n){
    heap h(n);;
    for(int i=0;i<10;i++){
    h.insert(a[i]);  //a[i] ar value heap a insert hoa cha
}
// for(int i=0;i<10;i++){  //heap jaoa val dispaly
//     cout<<h.get(i);
// }
for(int i=n-1;i>=0;i--){
    a[i]=h.del(i);   // a[i] a heap thaka edited val
}
 }
int main(){
    int a[]={23,45,67,21,67,90,100,678,89,76};
heapsort(a,10);
cout<<endl;
for(int i=0;i<10;i++){
    cout<<a[i];
}
}
 
// int main(){
//     return 0;
// }#include "sirdynArr.c++"
// #include <iostream>
// using namespace std;
// class heap:public DynArray{
//     private:
//     int *ptr;
//     int left;
//     int right;
//       public:
// heap(int c):DynArray(c){
// ptr=new int[c];
// }
// void insert(int val,int index){
//      int tem=val;
//     int parant=(index-1)/2;
//   int  i=index;
//      while(i!=0){
//         if(tem>ptr[parant]){
//             int p=ptr[parant];
//             ptr[index]=p;
//             ptr[parant]=tem;
//             i--;
//         }
//         else{
// ptr[index]=tem;
// i--;
//         }
        
//      }
//     
//     //  }}
//      }

//  void deltop(int top){
//     int i,j;
//     int tem=ptr[count()-1];
//     if(!isEmpty()){
//           if(count()==1){
//         del(ptr[0]);
//     }
//     else if(count()==2){
//          del(ptr[0]);
//          ptr[0]=tem;
//         }
//         int left=top*2+1;
//         int right=top*2+2;
//         for(int i=top;i<count();i++){
//         del(top);
//        int p=(ptr[left]>ptr[right])?ptr[0]=ptr[left]: ptr[0]=ptr[right];
//        ptr[top]=p;
    
//     }    
//     }
//  }
// virtual bool isEmpty(){
// return DynArray::isEmpty();
// }
// int greatestval(){
//     return ptr[0];
// }

// heap(heap &h):DynArray(h){

// }
// heap operator=(heap &h){
//  DynArray::operator=(h);
 
// }
// ~heap(){}
// };
// int main(){
// heap h(5);
// h.append(6);
// h.append(0);
// h.append(3);
// h.append(7);
// h.append(9);

// h.insert(6,3);
// for(int i=0;i<h.count();i++){
// cout<<h.get(i);
// }
// // h.deltop(0);
// // for(int i=0;i<h.count();i++){
// // cout<<h.get(i);}
// }
// int main(){
//     int a[4]={2,4,562,1};
// }
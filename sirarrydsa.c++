#include<iostream>
using namespace std;
class arry{
    private:
int capacity;
int lastindex;
int *ptr;
public:
arry(int cap){
    capacity=cap;
lastindex=-1;
    ptr=new int[capacity];
}
bool isempty();
void append(int data);
void insert(int index,int data);
void edit(int index,int value);
void del(int index);
bool isfull();
int get(int index);
int count();

// arry(arry &d){
//     capacity=d.capacity;
//     lastindex=d.lastindex;            //my
//     ptr=new int[capacity];
//     for(int i=0;i<=lastindex ;i++){
//         ptr[i]=d.ptr[i];
//     }
//     }
//     void operator=(arry &s1){
//         capacity=s1.capacity;
//         lastindex=s1.lastindex;
//         if(ptr!=NULL){
//         for(int i=0;i<=lastindex;i++){       ///with out del ptr
//             del(i);                          // same block a copy assign;
//         }
//         }

// for(int i=0;i<=lastindex;i++){
// ptr[i]=s1.ptr[i];

//         }
//     }
int getcap(){
    return capacity;
}
int find(int data);
~arry();

 
arry(arry &arr){
    capacity=arr.capacity;
lastindex=arr.lastindex;
     ptr=new int[capacity];
    for(int i=0;i<lastindex;i++){
        ptr[i]=arr.ptr[i];
    
}
}
 
 void operator=(arry &arr){
    capacity=arr.capacity;
    lastindex=arr.lastindex;
    if(ptr!=NULL){
        delete []ptr;
    }
    ptr=new int[capacity];
    for(int i=0;i<=lastindex;i++){
        ptr[i]=arr.ptr[i];
    }
 }
};
 arry:: ~arry(){
delete[]ptr;
 }
 bool arry::isempty(){
  return  lastindex=-1;

 } 
  
 void arry:: append(int data){
    if(lastindex==capacity-1){cout<<endl<<"error:arry is full";
    }
    else{
        lastindex++;
        ptr[lastindex]=data;
        //*(ptr+lastindex)=data;
    }
 }
 void arry::insert(int index,int data){
int i;
     if(lastindex==capacity-1){cout<<endl<<"error:arry is full";
 }
 else if(index>lastindex+1){
    cout<<"invalid";
 }
 else{
    i=lastindex;
for(i=lastindex;i>=index;i--) { //value decrease hocha
ptr[i+1]=ptr[i];}
ptr[index]=data;
lastindex++;
 }
 }
 void arry::edit(int index,int value){
    if(index>=0&&index<=lastindex){
        ptr[index]=value;

    }
 }
void arry::del(int index){
if(lastindex==-1){
    cout<<endl<<"enpty";
}
else if(index<0&&index>lastindex){
cout<<endl<<"invalld";
}
else{
   int i=index;
for(i=index;i<lastindex;i++){

    ptr[i]=ptr[i+1];

}    lastindex--;

 }
 }
 bool arry:: isfull(){
    return lastindex=capacity-1;
 }
 int arry:: get(int index){
    if(index<0&& index>lastindex){
        cout<<"not valid";
    }
    else{
       return ptr[index];
       //return *(ptr+index);
    }
 }
 int arry::count(){
    return lastindex+1;

 }
int arry::find(int data){
    for(int i=0;i<lastindex;i++){
        if(ptr[i]==data){
            return i;
        }
    }
}
 int main(){
    return 0;
 }
 #include<iostream>
using namespace std;
template<typename x>
class arry{
    private:
int capacity;
int lastindex;
x *ptr;
public:
arry(int cap){
    capacity=cap;
lastindex=-1;
    ptr=new x[capacity];
}
bool isempty();
void append(x data);
void insert(int index,x data);
void edit(int index,x value);
void del(int index);
bool isfull();
x get(int index);
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
x find(x data);
~arry();

 
arry(arry &arr){
    capacity=arr.capacity;
lastindex=arr.lastindex;
if(ptr==NULL){
    ptr=new x[capacity];
    for(int i=0;i<lastindex;i++){
        ptr[i]=arr.ptr[i];
    }
}
}
 
 void operator=(arry &arr){
    capacity=arr.capacity;
    lastindex=arr.lastindex;
    if(ptr!=NULL){
        delete ptr;
    }
    ptr=new x[capacity];
    for(int i=0;i<=lastindex;i++){
        ptr[i]=arr.ptr[i];
    }
 }
};
 template <class x> arry<x>:: ~arry(){
delete[]ptr;
 }
  template <class x>bool arry<x>::isempty(){
  return  lastindex=-1;

 } 
  
  template <class x> void arry<x>:: append(x data){
    if(lastindex==capacity-1){cout<<endl<<"error:arry is full";
    }
    else{
        lastindex++;
        ptr[lastindex]=data;
        //*(ptr+lastindex)=data;
    }
 }
  template <class x>void arry<x>::insert(int index,x data){
int i;
     if(lastindex==capacity-1){cout<<endl<<"error:arry is full";
 }
 else if(index>lastindex+1){
    cout<<"invalid";
 }
 else{
    i=lastindex;
for(i=lastindex;i>=index;i--) { //value decrease hocha
ptr[i+1]=ptr[i];
ptr[index]=data;
lastindex++;
 }}
 }
  template <class x>void arry<x>::edit(int index,x value){
    if(index>=0&&index<=lastindex){
        ptr[index]=value;

    }
 }
 template <class x>void arry<x>::del(int index){
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
    lastindex--;

}
 }
 }
  template <class x>bool arry<x>:: isfull(){
    return lastindex=capacity-1;
 }
  template <class x> x arry<x>:: get(int index){
    if(index<0&& index>lastindex){
        cout<<"not valid";
    }
    else{
       return ptr[index];
       //return *(ptr+index);
    }
 }
  template <class x>int arry<x>::count(){
    return lastindex+1;

 }
 template <class x>  x arry<x>::find(x data){
    for(int i=0;i<lastindex;i++){
        if(ptr[i]==data){
            return i;
        }
    }
}
int main(){
    arry <float>b1(4);
    b1.append(4.5);
    b1.append(4.2);
    b1.append(6.8);
    b1.append(3.2);
    for(int i=0;i<4;i++){
       cout<<" "<< b1.get(i);
    }
   cout<< b1.find(4.5);
}
 
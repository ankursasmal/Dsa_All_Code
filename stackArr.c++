#include "sirarrydsa.c++"
#include <iostream>
using namespace std;
class stack:private arry{
public:
 
void pop(){
    if(isempty()){
        cout<<"no element";
    }
    else{
del(count()-1);
}
}

int peek(){
    if(!isfull()){
    return get(count()-1);
} else{
    cout<<"empty";
    return -1;
}
}

~stack(){

}
stack(stack &s1):arry(s1){}
virtual bool isfull(){
 return arry::isfull();
}
virtual bool isempty(){
     return arry:: isempty();
}int sizeofstt(){
    return getcap();
}
void operator=(stack &s1){
    arry::operator=(s1);
}

};

// void reverse(stack &s1){
//   stack s2(s1.sizeofstt());
// while(!s1.isempty()){
//   s2.push(s1.peek());
// s1.pop();
// }
// s1=s2;
// }
// void pushminstack(stack &s1,stack &min,int data){
//     s1.push(data);
// if(min.isempty()){
//     min.push(data);
//     }
//     else{
//         if(data>min.peek()){
//             min.push(min.peek());
//         }
//         else K Ð®.{
//             min.push(data);
//         }

//     }
// }
// void del(stack &s1,stack &min){
// s1.pop();
// min.pop();
// }
 
// int main(){
//      stack s1(5);
// stack min(5);
// pushminstack(s,min,10);
// cout<<min.peek();
// pushminstack(s,min,20);
// cout<<min.peek();pushminstack(s,minstack,40);
// cout<<min.peek();
// b1.insert(1);
// b1.peek();
// b1.insert(2);
//  b1.insert(3);
// b1.peek();
// b1.peek();
// b1.insert(2);
//  b1.insert(3);
//  b1.insert(2);
//  b1.insert(3);
//      return 0;
// }
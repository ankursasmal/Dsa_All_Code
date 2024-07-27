
 #include "Arraysir.cpp"
 class stack:public array{
public:

stack();
void push(int v);
int peek();
void pop();
~stack();
 virtual bool isEmpty();
  virtual bool isFull();

 } ;
 virtual bool stack:: isEmpty(){
    return array::isEmpty();
 }
  virtual bool stack:: isFull(){
    return array::isFull();
 }
 stack:: ~stack(){
 }
   void stack:: pop(){
    if(isEmpty()){
        cout<<"cant insert";
    }
    else{
    del(count()-1);
    }
   }
stack:: stack(int a):array(a){
 }
void push(int v){
    if(isfull()){
        cout<<"can't append";
    }
    else{
        append(v);
    }
}
int stack:: peek(){
    return get(count()-1);
}
void reverse(satack &s){
    stack s1(s.count());
    while(s.!isEmpty){
        s1.push(s.peek());
        s.pop();
    }
    s=s1;
}
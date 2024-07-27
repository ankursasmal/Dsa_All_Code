#include <iostream>
#include "sirdynarr.c++"
using namespace std;
 struct node{
int item;
int vertex;
node *next;
 };
 class adjlist{
private:
node* start;
int vertex;
public:
adjlist(){
    start=NULL;

}
adjlist(int n){
vertex=n;
}
node* getstart(){
    return start;
}
 
void addgraph(int data,int var){
    node *n=new node;
    n->item=data;
    n->vertex=var;
    n->next=start;
    start=n;
}
void setvertex(int var){
vertex=var;
}
bool isempty(){
return start==NULL;
}
void remove(){
    node *t;
    t=start;
     start=start->next;
     delete t;
}
~adjlist(){
while(start!=NULL){
    remove();
}
}
void print(){
    node *t;
    t=start;
   while(t!=NULL){
    cout<<"(V"<<t->vertex<<")"<<t->item<<endl;
   t=t->next;
   }
}
 };
 class graph{
private:
adjlist *arr;
int v_count;
public:
graph(){
    arr=NULL;
    v_count=0;
}
 
void creatGraph(int vno){
int n;
int v,data;
    v_count=vno;
    arr=new adjlist[vno];
    for(int i=0;i<vno;i++){
        arr[i].setvertex(i);
        cout<<"no of vertexx connect"<<endl;
        cin>>n;
        for(int j=0;j<n;j++){
        cout<<"enter ith v no"<<endl;
        cin>>v;
        cin>>data;
        arr[i].addgraph(data,v);
    }
    
    }

}

void printGraph(){
  for(int j=0;j<v_count;j++){
    
arr[j].print();
}
}
int getvcount(){
    return v_count;
}
 

void adjnode(int v){
node *t=this->arr[v].getstart();
while(t!=NULL){
    cout<<t->vertex;
    t=t->next;
}
}
//DFS ar jonno

DynArray& adjno(int n){ 
DynArray *p=new DynArray(1);
node *t=this->arr[n].getstart();
 while(t!=NULL){
    p->append(t->vertex);
    t=t->next;
}
return *p;
 
 }
  
 

 //
~graph(){
     delete[]arr;
     arr=NULL;
}

 };

// int main(){
//     graph g;
//     g.creatGraph(3);
//     g.printGraph();
//     g.adjnode(2);
//     return 0;
// }
 
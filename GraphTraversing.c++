#include "QueueArraysir.cpp"
 #include "ArrGraph.c++"
#include "StackArraysir.cpp"
// #include "LLGraph.c++"
 #include <iostream>
using namespace std;
 void BFS(graph &g,int s)
  { 
    int n,u;
    bool status[g.getvcount()]; 
    for(int i=0;i<g.getvcount();i++){
status[i]=false;   //by default status false ko ta hoba
                                  }    //bool type arr
    Queue q(g.getvcount());          //q size or no of vertex
      q.insert(s);
status[s]=true;
while(!q.isEmpty()){
    n=q.getFront();
    cout<<" v"<<n;
    q.del();
    DynArray adjacent=g.adjno(n);    //constructor call

for(int i=0;i<adjacent.count();i++){      // for loop condition(!isepty) lika possible
u=adjacent.get(i);
if(status[u]==false){
  q.insert(u);
  status[u]=true; 
}
  }
}
  }
  void DFS(graph &g,int s){
    int n,u;
    bool status[g.getvcount()];  
    Stack S(g.getvcount());
    for(int i=0;i<g.getvcount();i++){
status[i]=false;   //by default status false ko ta hoba
                                  }
    S.push(s);
status[s]=true;
while(!S.isEmpty()){
  n=S.peek();
  cout<<"v"<<n;
  S.pop();
   DynArray adjacent=g.adjno(n);    //constructor call

for(int i=0;i<adjacent.count();i++){      // for loop condition(!isepty) lika possible
u=adjacent.get(i);
if(status[u]==false){
 S.push(u);
  status[u]=true;
 }
  }
}

  }
  void DFSLINKED(graph &g,int s){
  int n,u;
    bool status[g.getvcount()]; 
    for(int i=0;i<g.getvcount();i++){
status[i]=false;   //by default status false ko ta hoba
                                  } 
    Stack S(g.getvcount());
    S.push(s);
status[s]=true;
while(!S.isEmpty()){
  n=S.peek();
  cout<<"v"<<n;
  S.pop();
   DynArray adjacent=g.adjno(n);       //adjjacent holo object

for(int i=0;i<adjacent.count();i++){      // for loop condition(!isepty) lika possible
u=adjacent.get(i);
if(status[u]==false){
 S.push(u);
  status[u]=true;
 }
  }
}
  }

  void BFSLIST(graph &g,int s)
  { 
    int n,u;
    bool status[g.getvcount()];
      for(int i=0;i<g.getvcount();i++){                       //bool type arr
      status[i]=false;                                                   //q size or no of vertex
     
      }
      Queue q(g.getvcount());                              
      q.insert(s);
status[s]=true;
while(!q.isEmpty()){
    n=q.getFront();
    cout<<" v"<<n;
    q.del();
    DynArray adjacent=g.adjno(n);    //constructor call

for(int i=0;i<adjacent.count();i++){      // for loop condition(!isepty) lika possible
u=adjacent.get(i);

//cout<<"u"<<u;   korla adjnode jana jaba

if(status[u]==false){
  q.insert(u);
  status[u]=true;
}
  }
}
  }
 
int main()
{
graph g;
  g.creatGraph(3,3); //graph create kora
   
//dfs non member fun of graph class so g. hoba na 
 DFS(g,0);   //dfs ka call korla 
 
  return 0;
}
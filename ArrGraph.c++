#include "sirdynarr.c++"
 #include <iostream>
using namespace std;
class graph{
private:
int v_count;
int e_count;
int **adj;
public:
int getvcount(){
    return v_count;
}
// BFS a neighbour node pass korr jonno
// DynArray& adjno(int v){
//     DynArray *p=new DynArray(1);         //a casa adj node pointer a store hocha
// if(v<v_count&&v>=0){                      //ti pointer through hata adj node thak cha
//     for(int i=0;i<v;i++){
//         if(adj[v][i]==1){
//             p->append(i);     //dynarry fun call
//         }
//     }
// }return *p;
//  }
 void creatGraph(int vno,int eno){
    int u,v;
    v_count=vno;
    e_count=eno;
adj=new int*[vno];
for(int i=0;i<vno;i++){
    adj[i]=new int[vno];
}
// matrix val 0 anar por edit jakana 1 lagba
for(int i=0;i<vno;i++){
    for(int j=0;j<vno;j++){
        adj[i][j]=0;
    }
}
//number of edge
    for(int j=0;j<eno;j++){
        cout<<"enter edge connection"<<endl;
        cin>>u>>v;
        adj[u][v]=1;
        adj[v][u]=1;       //symmetric
    }

 }
  DynArray& adjno(int n){
    DynArray *p=new DynArray(1);
if(n>=0 && n<=v_count){
    for(int i=0;i<v_count;i++){
        if(adj[n][i]==1){
            p->append(i);
        }
    }
}return *p;
  }
  
 void printgraph(){
    cout<<endl;
 for(int i=0;i<v_count;i++){
    for(int j=0;j<v_count;j++){
       cout<<adj[i][j]<<" ";
       cout<<endl;
    }
}
   }
   void printadjnode(int v){    //ata output hoa jacha but return kora ta hoba tahoal
    if(v<=v_count&& v>=0){          //adjnode ta hata thakba
for(int i=0;i<v;i++){
    if(adj[v][i]==1){
        cout<<"v"<<i<<endl;
    }
}
    }
   }
   bool isisolated(int vno){
    if(vno>=0&& vno<=v_count){
       for(int i=0;i<vno;i++){
        if(adj[vno][i]==0){
            return true;
         }else{
            return false;
         }
     }} 
    
   }

   ~graph(){
    for(int i=0;i<v_count;i++){
        delete []adj[i];
    }
    delete[] adj;
   }
} ;
// int main(){
//   graph g;
//   g.creatGraph(3,3);
//   g.printgraph();
//   cout<<endl;
//   g.printadjnode(3);
//    cout<< g.isisolated(3);

//      return 0;
// }
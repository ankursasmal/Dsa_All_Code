#include <iostream>
  using namespace std;
  class arr{
    private:
    int capacity;
    int lastindex;
    int *ptr;
     public:
  arr(int n){
      ptr=new int[10];
      }
      bool empty(){  
        bool t=true,f=false;
        int l=sizeof(*(ptr+11))/sizeof(int);
for(int i=0;i<10;i++){
 if(l==sizeof(*(ptr+i))/sizeof(int)){
 return t;
}
else{
 return f;}
        }
     }
    void append(int n){
      ptr=new int[2];
      int p;
      for(int i=0;i<12;i++){
       p=sizeof(*ptr+i);
      
      }cout<<p<<"\n";
    
    }
    void insert(int index,int value){
      
     *(ptr+index)=value;
     
      cout<<*(ptr+index)<<"\n";

    }
    void del(int lastindex){
   *(ptr+lastindex-2)=  *(ptr+lastindex-1);
      *(ptr+lastindex-1)= *(ptr+lastindex);
      for(int i=0;i<lastindex-1;i++){
        cout<<*(ptr+i)<<"\t";
      }

     }
     bool full(int lastindex){
      int i;
      bool t=true,f=false;
      int l=12;
         if(l==sizeof(*(ptr+11))/4){
return t;

      }
      else{
        return f;
      }
      }
     
    void edit(){
       *(ptr+2)=3;
for(int i=0;i<12;i++){
  cout<<*(ptr+i)<<"\t";
}
    }
    void scearch(int lastindex){
    for(int i=0;i<lastindex;i++){
  
if(*(ptr+i)==5){
  cout<<"present in arr"<<"\n";
  break;
}
else{  cout<<"not present"<<"\n";
break;
}
    }
    }
    void get(){
      cout<<"\n"<<*(ptr+7);
    }
    int countnum(int lastindex){
      int count =0;
      int length=12;
      for(int i=0;i<lastindex;i++){
        if(length>=sizeof(*(ptr+i))/4){
          count++;
        }
      }return count;
    } 
    int findelement(int lastindex){
for(int i=0;i<lastindex;i++){
  if(*(ptr+i)==4){
    return i;
  }
  else{
    return -1;
  }
}
    }  
    ~arr(){
      delete ptr;
    }
    arr(){}
  };
  int main(){
arr b1(10);
cout<<b1.empty()<<"\n";
b1.append(2);
for(int i=0;i<12;i++){
  for(int j=0;j<1;j++){
    cout<<"enter index &value"<<"\n";
    cin>>i>>j;
    b1.insert(i,j);

  }
}
b1.scearch(11);
b1.del(11);
b1.edit();
cout<<"\n"<<b1.full(11);
b1.get();
cout<<"\n"<<b1.countnum(11);
// b1.findelement(11);
    return 0;
  }
          
    
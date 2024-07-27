#include<iostream>
#include<math.h>
using namespace std;
void num(int n);
void revnum(int n);
void oddnum(int n);
void revoddnum(int n);
void evennum(int n);
void revevennum(int n);
void squrenum(int n);
void revsqurenum(int n);
void cubenum(int n);
void revcubenum(int n);
int sum(int n);
int sumodd(int n);
int sumeven(int n);
int squresum(int n);
int fac(int n);
int sumdigit(int n);
int fib(int n);
int hcf(int n,int m);
int pTow(int x,int y);
 void binary(int n);

 int main(){
// num(5);
// cout<<"\n";
// revnum(5);
// cout<<"\n";
// oddnum(14);
// cout<<"\n";
// revoddnum(14);
// cout<<"\n";
// evennum(13);
// cout<<"\n";revevennum(13);
// cout<<"\n";
// squrenum(5);
// cout<<"\n";revsqurenum(5);
// cout<<"\n";
// cubenum(5);
// cout<<"\n";
// revcubenum(5);
// cout<<"\n"<<sum(5);
// cout<<"\n"<<sumodd(6);
// cout<<"\n"<<sumeven(6);
// cout<<"\n"<<squresum(5);
// cout<<"\n"<<fac(5);
// cout<<"\n"<<sumdigit(519523);
// cout<<"\n"<<fib(7);
// cout<<"\n"<<hcf(36,24);
// cout<<"\n"<<pTow(3,4);
 binary(25);



return 0;
 }
 void num(int n){ 
     if(n>0){
         
   cout<<n;
   num(n-1) ;
 }
 }
 void revnum(int n){
  if(n>0){
revnum(n-1);
cout<<n;
  }
 }
 void oddnum(int n){
if(n>0){
   
       

    oddnum(n-1);cout<<2*n-1;
 }   
 }
   
   void revoddnum(int n){
    if(n>0){
       
        cout<<2*n-1;
         revoddnum(n-1);
      }
    
   }
   void evennum(int n){
    if(n>0){
       
        
          evennum(n-1);
      cout<<2*n;
    }
   }
void revevennum(int n){
   if(n>0){
       
   cout<<2*n;

          revevennum(n-1);
    }
   
}
void squrenum(int n){
  if(n>0){
     
    squrenum(n-1);
 cout<<n*n;
  }
}
void revsqurenum(int n){
  if(n>0){
     
   revsqurenum(n-1);
 cout<<n*n;
  }
}
void cubenum(int n){
  if(n>0){
     
    cubenum(n-1);
 cout<<n*n*n;
  }
}


void revcubenum(int n){
  if(n>0){
      cout<<n*n*n;

    revcubenum(n-1);
  }
}
int sum(int n){
  if(n==1){
    return 1;
  }
  return n+sum(n-1);
}

int sumodd(int n){
  if(n==1){
    return 1;
  }
  else{
     
      return 2*n-1+sumodd(n-1);
    }
  }


int sumeven(int n){
  if(n==1){
    return 2;
  }
  else{
    
      return 2*n+sumeven(n-1);
    }
  }

int squresum(int n){
  if(n==1){
    return 1;
  }
  else{
    return n*n+squresum(n-1);
  }
}
int fac(int n){
if(n==0){
  return 1;
}
return n*fac(n-1);
}
 int sumdigit(int n){
  if(n==0){
    return 0;

  }
  else{
     return n%10+sumdigit(n/10);
  }
 }

int fib(int n){
if(n==1){
  return 1;
}
if(n==0){
  return 0;
}
else{
  return fib(n-1)+fib(n-2);
}
}
int hcf(int n,int m){
  if(n==0){
    return m;
  }
  if(m==0){
return n;
  }
  if(m>=n){
      return hcf(n,m%n);
    }
  if(n>m){
return hcf(n%m,n);
    }
}
int xToy(int x,int y){
  if(y==0){
    return 1;
  }
  if(y>0){
   return x*xToy(x,y-1);
 }
 else{
return 1/x*xToy(x,y+1);

 }
 }

 void binary(int n){
 if(n>0){
   binary(n/2);
   cout<<n%2;
 
  }
 }
 
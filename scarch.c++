 #include <iostream>
 using namespace std;
  int scarch(int a[],int n,int val){
    for(int i=0;i<n;i++){
      if(a[i]==val){
           return i;
      }
    }return -1;
  }
  int bineary(int a[],int l,int u,int val){
    //1 st sortiong
    for(int i=1;i<u+1;i++){
      for(int r=0;r<u+1-i;r++){
        
        if(a[i]>a[i+1]){
int tem=a[i];
a[i]=a[i+1];
a[i+1]=tem;
        }
      }
    }
    //2nd compair
     if(l>u){
      return -1;
    }
     int m=(u+l)/2;
    if(a[m]==val){
return m;
    }
 else if(a[m]>val){
       
 return bineary(a,l,m-1,val);
     }
    else  {
 return bineary(a,m+1,u,val);
     }
     
  }
int main(){
  int a[5]={2,6,7,85,8};
   cout<<bineary(a,0,4,85);
  return 0;
}
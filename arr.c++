#include "sirarrydsa.c++"
 class a:public arry{
public:
 a(int d):arry(d){}
 int greatest(){
    int max;
    if(isempty()){
        cout<<"arry is full";
    }
    else{
        for(int i=0;i<count();i++){
            if(get(i)>max){
                max=get(i);
            }
        }
    }return max;
}
int smallest(){
    int min;
    if(isempty()){
        cout<<"arry is full";
    }
    else{
        for(int i=0;i<count();i++){
            if(get(i)<min){
                min=get(i);
            }
        }
    }return min;
}
int scearch(int val){
return find(val);
}
int sum(){
    int add;
    for(int i=0;i<count();i++){
        add+=get(i);
    }return add;
}
int avee(){
    int add=0;
   float ave= sum()/count();
    return ave;
}
void rotateRightByOne(){ 
    int tem,lastindex;
    if(!isempty()){
tem=get(lastindex);
        lastindex=count()-1;
for(int i=lastindex;i>0;i--){
edit(i,get(i-1));
}
    } edit(0,tem);
 }
 void printarry(){
    for(int i=0;i<count();i++){
        cout<<" "<<get(i);
            }
 }

void removeDuplicate(){
     for(int i=0;i<count();i++){
        for(int j=i+1;j<count();j++){
            if(get(i)==get(j)){
            del(j);
            j--;
         } 
        }
    }
    
}
int secondLarge(){
    if(count()>=2){
    for(int r=1;r<count();r++){
        for(int i=0;i<count()-i-r;i++){
            if(get(i)>get(i+1)){
                int tem=get(i);
                edit(i,get(i+1));
                edit(i+1,tem);
            }
        }
    }return count()-2;
}
}
void swap(int i,int j){
int tem;
if(i>=0&&i<count()&&j>=0&&j<count()){
    tem=get(i);
    edit(i,get(j));
    edit(j,tem);
}
}
void sort(){
    for(int r=1;r<count();r++){
        for(int i=0;i<count()-i-r;i++){
            if(get(i)>get(i+1)){
                int tem=get(i);
                edit(i,get(i+1));
                edit(i+1,tem);
            }
        }
    }
 
}
 };
 
#include "pa.c++"
#include <iostream>
using namespace std;
int main(){
     arry a(5);
    a.append(4);
        a.append(3);
    a.append(0);
    a.append(7);
    a.append(2);
    for(int i=0;i<a.count();i++){
        cout<<a.get(i)<<"\n";
    }
    sort(a);
for(int i=0;i<a.count();i++){
        cout<<a.get(i)<<"\t";
    }
    return 0;

 } 


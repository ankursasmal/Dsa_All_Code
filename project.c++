#include <iostream>
#include<math.h>
using namespace std;
  class calculator{

public:
float add(float a,float b){
    cin>>a>>b;
    return a+b;
}
float mul(float a,float b){
    cin>>a>>b;
    return a*b;
}
float sub(float a,float b){
    cin>>a>>b;
    return b-a;
}float div(float a,float b){
    cin>>a>>b;
    return b/a;
}
int mudulo(int a,int b){
    cin>>a>>b;
    return b%a;
}
float mod( float a){
    if(a<0){
    return -a;
    }
    else{
return a;
    }
} 
float power(float a,int n){
      float power=pow(a,n);
    return power;
}
 
float invarse(float a){
    return 1/a;
}
float anyroot(float a,int n){
    
float root=pow(a,1/n);
return root;
}

float input(float a){
    return a;
}
float logaritham(float x){
   return log(x);
}
 float e_to_the_power(float a){
    float powe=pow(2.73,a);
 }
 float pi(){
    return 3.14;
 }

};

class sintificcalculator:public calculator{
public:
float sine(float a){
      return (sin(a));
}
float tangen(float a){
      return tan(a);
}
float coss(float a){
      return cos(a);
}
float cossec(float a){
 return 1/sine(a);
}
float sec(float a){
 return 1/coss(a);
}
float cot(float a){
 return 1/tangen(a);
}
};
class ares_to_squreinche:public sintificcalculator{
    public:
    //area converter
    float ares_to_squre1meter(float x){
        float ares=x;
float squre_meter=100*ares;
return squre_meter;
    }
    float ares_to_Hectaresmeter(float x){
        float ares=x;
float Hectare=.01*ares;
return Hectare;
    }float ares_to_squre_centemeter(float x){
        float ares=x;
float squre_centemeter=1000000*ares;
return squre_centemeter;
    }float ares_to_squre_feet(float x){
        float ares=x;
float squre_feet=1076.391041671*ares;
return squre_feet;
    }
    float ares_to_squreinchee(float x){
        float ares=x;
float squre_inche=100*ares;
return squre_inche;
    } 
};
int main(){
    ares_to_squreinche c1;
    float p,q;
    cout<<"sphre volume="<<4*c1.pi()*c1.power(4,3);
    cout<<"log(5)+e^x="<< c1.logaritham(5)+c1.e_to_the_power(4)<<endl;
cout<<c1.sine(50)/c1.cossec(50)<<endl;
cout<<c1.ares_to_squreinchee(4)<<endl;
cout<<c1.add(p,q);
return 0;
}
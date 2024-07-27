 #include <iostream>
using namespace std;
int arrangeCoins(int n) {
        int c=0;
        if(n==1){
            return 1;
        }
        if(n==2){
            return 1;
        }
        int j=0;
        bool t=true;
for(int i=n;i>=0;i--){
   j++;
 c++; 
 cout<<"how imcre"<<c;
 for(int k=1;k<=j;k++){
i--;
if(i==0 && k!=j){
    t=false;
    break;
}
    }
    
i=i+1;

}

if(t==false){
    cout<<"c of break"<<c;
    return c;
}
    cout<<"c of last"<<c;

return c;
        }
    
int main() {
     cout<<arrangeCoins(7);
     return 0;
}
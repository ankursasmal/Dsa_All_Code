#include <iostream>
  #include <algorithm>
  #include "StackArraysir.cpp"
  using namespace std;
int pno(char c){
    if(c=='^'){
        return 3;
    }
   else if(c=='*'||c=='/'){
        return 2;
    }
   else if(c== '+'||c=='-'){
        return 1;
    }
    else{
        return -1;
    }
}
string in_to_pre(string s){
    reverse(s.begin(),s.end());
    Stack s1(s.length());
string pre;
for(int i=0;i<s.length();i++){
    if(s[i]>='a'&&s[i]<='z' || s[i]>='A'&&s[i]<='Z'){
        pre+=s[i];
    }
    else if(s[i]==')'){
        s1.push(s[i]);
    }

else if(s[i]=='('){
    while( !s1.isEmpty()&&s1.peek()!=')'){
        pre+=s1.peek();
        s1.pop();
    }
    if(!s1.isEmpty()){
        s1.pop();
    }
}
else{
    while(!s1.isEmpty()&& pno(s[i])<pno(s1.peek())){
        pre+=s1.peek();
        s1.pop();
    }
    s1.push(s[i]);
}
}
while(!s1.isEmpty()){
     pre+=s1.peek();
        s1.pop();
}
 reverse(pre.begin(),pre.end());

return pre;
}


 int main(){
  string s="((s+u)-(t*u))+";
  cout<<in_to_pre(s);
  return 0;
 }

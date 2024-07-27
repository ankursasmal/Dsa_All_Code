#include <iostream>
 #include "StackArraysir.cpp"
 using namespace std;
 int pno(char c){
  if(c=='^'){
    return 3;
  }
  if(c=='*' ||c=='/'){
    return 2;
  }
  if(c=='+'||c=='-'){
    return 1;
  }
  else{
    return -1;
  }
 }
 string in_to_post(string a){
  Stack s(a.length());
string s1;
for(int i=0;i<a.length();i++){
  if(a[i]>='a'&& a[i]<='z'|| a[i]>='A'&&a[i]<='Z'){
    s1=s1+a[i];
  }
  else if(a[i]=='('){
    s.push(a[i]);
  }
  else if(a[i]==')'){
    while(!s.isEmpty()&& s.peek()!='('){
      s1+=s.peek();
      s.pop();
 }
 if(!s.isEmpty()){
    s.pop();  
    }
  }
  else{
while(!s.isEmpty()&& pno(a[i])<pno(s.peek())){ //must while loop
   s1+=s.peek();                            // not if condition
  s.pop();                                 
 }
                                              
 s.push(a[i]);                                             
                                             
  }
}
while(!s.isEmpty()){
  s1+=s.peek();
  s.pop();
}
return s1;
 }
 int main(){
  string s="(s+u)*b-n";
   cout<<in_to_post(s);
  return 0;
 }

#include<iostream>
using namespace std;
void TOH(int n,char beg,char aux,char end)
{
    static int i;
    if(n>0)
    {
        TOH(n-1,beg,end,aux);
        cout<<endl<<++i<<") "<<beg<<"->"<<end;
        TOH(n-1,aux,beg,end);
    }
}
int main()
{
    TOH(16,'A','B','C');
    cout<<endl;
    return 0;
}
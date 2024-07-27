#include <iostream>
#include "StackArraysir.cpp"
using namespace std;
void bubble(int a[], int n)
{
    int tem;
    for (int r = 1; r < n; r++)
    {
        for (int i = 0; i < n - r; i++)
        {
            if (a[i] > a[i + 1])
            {
                tem = a[i];
                a[i] = a[i + 1];
                a[i + 1] = tem;
            }
        }
    }
}
void moodifiedbubble(int a[], int n)
{
    int tem;
    bool flag;
    for (int r = 1; r < n; r++)
    {
        flag = false;

        for (int i = 0; i < n - r; i++)
        {
            if (a[i] > a[i + 1])
            {
                flag = true;
                tem = a[i];
                a[i] = a[i + 1];
                a[i + 1] = tem;
            }
        }
        if (flag == false)
        {
            break;
        }
    }
}
int minindex(int a[], int n, int j)
{
    int minindex;
    int min;
    int i;
    min = a[j]; // min=a[0];
    minindex = j;
    for (int i = j + 1; i < n; i++)
    { //   int i=1;
        if (min > a[i])
        {
            min = a[i];
            minindex = i;
        }
    }
    return minindex;
}

void select(int a[], int n)
{
    int tem, mininde;
    for (int i = 0; i <= n - 2; i++)
    {

        mininde = minindex(a, n, i);
        tem = a[i];
        a[i] = a[mininde];
        a[mininde] = tem;
    }
}

void insert(int a[], int n)
{
    int tem;
    int j;
    for (int i = 1; i < n; i++)
    {
        tem = a[i];
        for (j = i - 1; j >= 0; j--)
        { // decrement
            if (tem < a[j])
            {
                a[j + 1] = a[j];
                // a[j]=tem;  //a line na likla     {tem ar val asala =a[j+1];}
            }
            else
            {
                break;
            }
        }
        a[j + 1] = tem; // ata likta hoba na
    }
}
int quick(int a[], int left, int right)
{
    int loc = left, t;
    while (left < right)
    {
        while (left < right && a[loc] < a[right])
        {
            right--;
        }
        if (left == right)
        {
            break;
        }
        t = a[loc];
        a[loc] = a[right];
        a[right] = t;
        loc = right;
        while (left < right && a[left] <= a[loc])
        {
            left++;
        }
        if (left == right)
        {
            break;
        }
        t = a[left];
        a[left] = a[loc];
        a[loc] = t;
        loc = left;
    }
    return loc;
}

void quicksort(int a[], int l, int u)
{
    int loc;
    loc = quick(a, l, u);
    if (loc > l + 1)
    {
        quicksort(a, l, loc - 1);
    }
    if (loc < u - 1)
    {
        quicksort(a, loc + 1, u);
    }
}
void quicksortloop(int a[], int l, int u)
{
    int loc, i, j;
    Stack lower(10), uper(10);
    lower.push(l);
    uper.push(u);
    while (!lower.isEmpty())
    {
        i = lower.peek();
        j = uper.peek();
        loc = quick(a, i, j);
        lower.pop();
        uper.pop();
        if (loc > i + 1)
        {
            lower.push(i);
            uper.push(loc - 1);
        }
        if (loc < j - 1)
        {
            lower.push(loc + 1);
            uper.push(j);
        }
    }
}
void marge(int a[], int n1, int index_1, int a1[], int n2, int index_2, int b[], int index_3)
{
    int i, j, k;
    for (i = 0, j = 0, k = 0; i < n1 && j < n2; k++)
    {
        if (a[i + index_1] < a1[j + index_2])
        {
            b[k + index_3] = a[i + index_1];
            i++;
        }
        else
        {
            b[k + index_3] = a1[j + index_2];
            j++;
        }
    }
    while (i < n1)
    {
        b[k + index_3] = a[i + index_1];
        i++;
        k++;
    }
    while (j < n2)
    {
        b[k + index_3] = a1[j + index_2];
        j++;
        k++;
    }
}
void margepass(int src[], int size, int l, int dist[])
{
    int margecount;
    int index;
    margecount = size / (2 * l);
    int rest = size - margecount * 2 * l;

    for (int i = 0; i, margecount; i++)
    {
        index = i * l * 2;
        marge(src, l, index, src, l, index + l, dist, index);
    }
    if (rest <= l)
    { // or s=margecount*2*l;
        for (int i = 0; i < rest; i++)
        {
            dist[margecount * 2 * l + i] = src[margecount * 2 * l + i];
        }
    }
    else
    {
        marge(src, l, margecount * 2 * l, src, rest - l, margecount * 2 * l + l, dist, margecount * 2 * l);
    }
}

void margesortloop(int a[], int size)
{
    int l = 1;
    int b[size];
    while (l < size)
    {
        margepass(a, size, l, b);
        margepass(b, size, 2 * l, a);
        l = l * 4;
    }
}
void marging(int a[],int l,int m,int u){
int left[m-l+1];
int r[u-m];
int i,j,k;
for(i=0;i<m-l+1;i++){
    left[i]=a[l+i];
}
for(j=0;j<u-m;j++){
    r[j]=a[m+1+j];
}
for(i=0,j=0,k=l;i<m-l+1 &&j<u-m;k++){
    if(left[i]>r[i]){
        a[k]=left[i];
        i++;
    }
    else{
        a[k]=r[j];
        j++;
    }
}
while(i<m-l+1){
    a[k]=left[i];
    i++;
    k++;
}
while(j<u-m){
    a[k]=r[j];
    j++;
    k++;
}
}

void marge_sort_recursion(int a[],int l,int u){
int m;
if(l<u){
m=(l+u)/2;
marge_sort_recursion(a,l,m);
marge_sort_recursion(a,m+1,u);
marging(a,l,m,u);
}

}

int main()
{
    int a[] = {10, 20, 70, 100, 56, 89, 02, 78};
    int n;
    marge_sort_recursion(a,0,7);
    for (int i = 0; i < 8; i++)
    {
        cout << " " << a[i];
    }
    return 0;
}

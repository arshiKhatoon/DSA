#include<iostream>
using namespace std;
void reverse(char name[],int n)
{
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        swap(name[s],name[e]);
        s++;
        e--;
    }
}
int getlength(char name[])
{
    int count=0;
    for(int i=0;name[i]!='\0';i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char name[10];
    cout<<"enter name";
    cin>>name;
    int len=getlength(name);
    cout<<"length of string="<<len;
    
    
    reverse(name,len);
    cout<<"reverse of string="<<name;
    return 0;
}
#include<iostream>
using namespace std;
int palindromestring(char name[],int n)
{
int s=0;
int e=n-1;
while(s<=e)
{
if(name[s]!=name[e])
{
    return 0;

}
else
{
    s++;
    e--;
}
return 1;
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
    cout<<"check palidrome"<<palindromestring(name,len);
    return 0;
}

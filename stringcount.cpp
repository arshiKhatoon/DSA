#include<iostream>
using namespace std;

int getcharcount( string name){

    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
int main()
{


   string name;
    cout<<"enter your name ";
    cin>>name;
    cout<<"length of string  "<<getcharcount(name);

}

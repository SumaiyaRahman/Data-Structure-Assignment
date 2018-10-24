#include<iostream>
#include<string>
using namespace std;
void insertDemo(string str1,string str2)
{
    str1.insert(6,str2);
    cout<<"Using insert : "<<'\n';
    cout<<str1<<'\n';

}
int main()
{
    string str1("HEllo world! ");
    string str2("Greeksfor greeks ");
    cout<<"Original String :"<<str1<<'\n'<<endl;
    insertDemo(str1,str2);
    return 0;
}

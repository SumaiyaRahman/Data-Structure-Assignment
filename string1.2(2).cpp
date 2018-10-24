#include<iostream>
#include<string>
using namespace std;
void insertDemo(string str1,string str2)
{
    str1.insert(3,str2);
    cout<<str1;
}                           //‘AAAAA’, 3, ‘BBB’
int main()
{
    string str1("AAAAA");
    string str2("BBB");
    insertDemo(str1,str2);
    return 0;

}

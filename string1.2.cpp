#include<iostream>
#include<string>
using namespace std;

 void insertDemo(string str1,string str2)
 {
     str1.insert(1,str2);
     cout<<str1;

 }                                          //INSERT(‘AAAAA’, 1, ‘BBB’)
                                              //INSERT(‘AAAAA’, 3, ‘BBB’)
     int main()
     {
         string str1("AAAAA");
         string str2("BBB");
         insertDemo(str1,str2);
         return 0;

     }                                               //INSERT(‘AAAAA’, 6, ‘BBB’)

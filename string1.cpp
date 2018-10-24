#include<iostream>
#include<string>
int main()
{
    std::string  S="JOHN PAUL JONES";
    std::string T="A THING OF BEAUTY IS A JOY FOREVER";    //////‘JO’, ‘JOY’, ‘ JO’, ‘A’, ‘ A ‘, ‘THE’
    std::cout<<S.find("JO")<<'\n';
    std::cout<<T.find("JOY")<<'\n';
    std::cout<<T.find("JO")<<'\n';
    std::cout<<T.find("A")<<'\n';
    std::cout<<T.find_last_of("A")<<'\n';
    std::cout<<T.find("THE")<<'\n';

}

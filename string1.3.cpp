#include<iostream>
#include<string>
int main()
{
    std::string base ="JOHN PAUL JONES";

    std::string s2 ="‘PAUL’,";
    std::string s3 = " David";
    base.replace(PAUL,DAVID, base);

    std::cout<<base<<'\n';
    return 0;
}


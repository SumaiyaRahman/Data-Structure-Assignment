#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    char P[80]= {"abc"};
    char T[80]= {"ababababab"};
    int r,s,k,l,i,Max,Index;
    clrscr();
    r = strlen(P);
    s = strlen(T);
    k=0;
    Max = s-r;
    while(k<=Max)
    {
        for (i=0; i<r; i++)
            if(P[i]!=T[k+i])
                break;
        if(i==r)
        {
            Index =k;
            break;
        }
        else
            k=k+1;

    }
    if(k>Max)
        Index=-1;
    printf("%s\n",P);
    printf("\n\n%s",T);
    if(Index!=-1)
        printf("%d",Index);
    else
        printf("P does not exict in  T");

    getch();
}

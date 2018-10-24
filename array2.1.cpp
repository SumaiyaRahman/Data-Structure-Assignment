#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    char name[100],tname[100],temp[100];
    int i,j,n;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%s",&name[i]);


    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)

{
    if((name[j]>name[j+1]))
    {
        (temp[100]=name[j]);
        //strcpy(name[i],name[j]);
        //strcpy(name[j],temp);
       (name[j]=name[j+1]);
      (name[j+1]=temp[100]);

    }
}    }

for(i=0;i<n;i++)
{
    printf("%s",name[i]);

}
return 0;
}

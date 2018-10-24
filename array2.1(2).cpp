#include<stdio.h>
int main()
{
    int i,j,C,D,n,s;
    char ch[]={'P','E','O','P','L','E'};
    n = 6;
    C = 0;
    D = 0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(ch[j]>ch[j+1]){
                s = ch[j];
            ch[j]=ch[j+1];
            ch[j+1]=s;
            D++;
        }
        C++;
        }
    }

    for(i=0;i<n;i++)
    {
        printf("%c\n",ch[i]);

    }
    printf("C=%d\n",C);
    printf("D=%d\n",D);
    return 0;
}


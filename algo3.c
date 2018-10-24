#include<iostream>
    int pi[100];
    char P[100],T[100];
    int kmp()
    {
        int now;
        now = -1;
        int n = strlen(T);
        int m = strlen(P);
        for(int i =0;i<n;i++)
        {
            while(now!=-1&&P[now+1]!=T[i])
                now =pi[now];
            if(P[now+1]==T[i])
                ++now;
            else
                now =-1;
            if(now==m)
                return 1;
        }
        return 0;
    }


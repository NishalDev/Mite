#include<stdio.h>
int main()
{
    int a[20][20],b[20][20],n,m,p,q,tc,aa=0,bb=0,sum;
 //   printf("Size of First array");
    while(tc!=0)
    {
        scanf("%d%d",&n,&m);
 //   printf("Size of Second array");
        scanf("%d%d",&p,&q);

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        for(int i=0;i<p;i++)
        {
            for(int j=0;j<q;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                aa = aa + a[i][j];
            }
        }
        for(int i=0;i<p;i++)
        {
            for(int j=0;j<q;j++)
            {
                bb = bb + b[i][j];
            }
        }
        sum = aa+bb;
        
       /* for(int i=0;i<p;i++)
        {
            for(int j=0;j<q;j++)
            {
                a[i][j] = a[i][j] + b[i][j];
            }
        }*/
        printf("%d",sum);
        tc--;
    }
        return 0;
}

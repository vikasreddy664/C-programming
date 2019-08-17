#include <stdio.h>
int main()
{
    int n,i,j,count=0,k=1;
    scanf("%d",&n);
    int a[n][n];
    int top=0,left=0,right=n-1,bot=n-1;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            a[i][j]=k++;
    
     for(i=0;i<n;i++)
     {
        for(j=0;j<n;j++)
           printf(" %d ",a[i][j]);
        printf("\n");
     }
    while(1)
    {
        for(i=top;i<=bot;i++)
        {
            printf("%d",a[i][top]);
            count++;
        }
        
         for(i=top+1;i<=right;i++)
        {
            printf("%d",a[bot][i]);
            count++;
        } 
         for(i=bot-1;i>=top;i--)
        {
            printf("%d",a[i][right]);
            count++;
        }
         for(i=right-1;i>top;i--)
        {
            printf("%d",a[top][i]);
            count++;
        }
        
        if(count==(n*n))
            break;
        top++;
        left++;
        right--;
        bot--;
        
    }

    return 0;
}

Sample case-1:
i/p:3
o/p:
1 2 3
4 5 6
7 8 9
1 4 7 8 9 6 3 2 5


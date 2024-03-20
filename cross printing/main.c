#include <stdio.h>
#include <stdlib.h>

int main()
{int n,m;
    printf("\n enter length ");
    scanf("%d",&n);
   // printf("enter breadth ");
    //scanf("%d",&m);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++){
                if((i==j) || (i+j==n+1))
                {
                    printf("*");
                }
                else{

        printf(" ");}


    }
     printf("\n");
    }
    return 0;
}

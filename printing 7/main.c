#include <stdio.h>
#include <stdlib.h>

int main()
{int n;
    printf("\n enter a no. ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int a=1;
        for(int j=1;j<=i;j++){
                if(i%2!=0)
                {
                    printf("%d ",a);
                }
                else{
            int d=a+64;
        char ch=(char)d;
        printf("%c ",ch);}

        a++;
    }
     printf("\n");
    }
    return 0;
}

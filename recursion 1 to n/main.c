#include <stdio.h>
#include <stdlib.h>
  increasing(int x,int n)
 {
     if(x>n) return 0;
     printf("%d \n",x);
      increasing(x+1,n);
     return 0;
 }
int main()
{ int n;
    printf("\n enter a value ");
    scanf("%d",&n);
    int d=increasing(1,n);
    return 0;
}

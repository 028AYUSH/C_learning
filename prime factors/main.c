#include <stdio.h>
#include <stdlib.h>
  factors(int n)
  {
    int i;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
            printf("%d ",i);
    }
    printf("\n");
    return;

  }
  isprime(int n){
  int j;
  for(j=2;j<n;j++)
  {
      if(n%j==0)
        return ;

  }

  return ;
  }
   prime(int x){
     int b=0;
     int j;
     int i;
for( int i=2;i<=x;i++)
{
    if(x%i==0)
    {
        if (isprime(i))
        {
            printf("%d ",i);
           // printf("\n");
        }
    }

}

   }
int main()
{     int a;
    printf("\n enter a number ");
    scanf("%d",&a);
     factors(a);
    prime(a);

    return 0;
}

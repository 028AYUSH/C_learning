#include <stdio.h>
#include <stdlib.h>
int arr[10];
int n=0;
void check_numbers(int x){
    int c;
    for(int i=x;i>0;i=i/10)
    {
        c=i%10;
        arr[n]=c;
        n++;
    }


}

int main()
{
    int x;
    printf("\nEnter your number: ");
    scanf("%d",&x);
    check_numbers(x);

    int b=2*x;
    check_numbers(b);
    int c=3*x;

    check_numbers(c);
      for(int i=0;i<n;i++)
        printf(" %d ",arr[i]);


    return 0;
}

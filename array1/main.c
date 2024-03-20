#include <stdio.h>
#include <stdlib.h>

int arr[10],n,maxloc;
int main()
{
    int choice=0;
    void arr_initialize(void);
    void arr_insert(void);
    void arr_delete(void);
    void arr_update(void);
    void arr_search(void);
    void arr_sort(void);
    void arr_display(void);
    void arr_quit(void);
    int arr_menu(void);

    maxloc=10;
    while(choice!=8){
        choice=arr_menu();
        switch(choice){
        case 1:
            arr_initialize();
            break;
        case 2:
            arr_insert();
            break;
        case 3:
            arr_delete();
            break;
        case 4:
            arr_update();
            break;
        case 5:
            arr_search();
            break;
        case 6:
            arr_sort();
            break;
        case 7:
            arr_display();
            break;
        case 8:
            arr_quit();
            break;


        }
    }

    return 0;
}
int arr_menu(void){
    int ch=0;
    while(ch<1 || ch>8){
        printf("\n\n M A I N  M E N U");
        printf("\n~~~~~~~~~~~~~~~~~~~");
        printf("\n\n1. I N I T A L I Z E   O P E R A T I O N....");
        printf("\n2. I N S E R T   O P E R A T I O N....");
        printf("\n3. D E L E T E   O P E R A T I O N....");
        printf("\n4. U P D A T E   O P E R A T I O N....");
        printf("\n5. S E A R C H   O P E R A T I O N....");
        printf("\n6. S O R T  O P E R A T I O N....");
        printf("\n7. D I S P L A Y   O P E R A T I O N....");
        printf("\n8. Q U I T   O P E R A T I O N....");
        printf("\n\n enter your option number: ");
        scanf("%d",&ch);


    }
    return ch;
}
    void arr_initialize(void){
        printf("\n \n Array INITIALIZE Operation has been selected...");
        int i;
        printf("\n\nPlease enter thr number the number of items to initialize the array(less than 10): ");
        scanf("%d",&n);
        if(n < 0 || n>10){
            printf("\n\nInvalid input has been provided...");
        }else{
        printf("\n\n now enter %d number of data items...",n);
        for(i=0;i<n;i++)
        {
            printf("\nEnter data for location number %d->",i);
            scanf("%d",&arr[i]);
        }
        printf("\n\n Array INITIALIZE Operation has been completed successfully...");
        }

    }
    void arr_insert(void){
        int i,item,loc;
        printf("\n \n Array INSERT Operation has been selected...");
        if(n==maxloc){
            printf("\n overflow..");
            printf("\n no room for further insertion of data items...");
        }else{
        printf("\n\n please enter the location number for insertion: ");
        scanf("%d",&loc);
        printf("enter the new item value: ");
        scanf("%d",&item);
        printf("\nInserting %d at location %d...",item,loc);
        for(i=n;i>=(loc+1);i--){
            arr[i]=arr[i-1];
        }
        arr[loc]=item;
        n++;
        }

    }
    void arr_delete(void){
        int loc,item,i;
    printf("\n \n Array DELETE Operation has been selected...");
    if(n==0){
        printf("\nunderflow..");
        printf("\n array is empty");
    }else{
        printf("\n\n please enter the number for deletion");
        scanf("%d",&loc);
        item=arr[loc];
        printf("\n\n deletion of %d from %d location",item,arr[loc]);
        for(i=loc+1;i<=(n-1);i++){
            arr[i+1]=arr[i];
        }
        n--;
        printf("\n delete operation has been successfully completed ");
        }
    }
    void arr_update(void){
    printf("\n \n Array UPDATE Operation has been selected...");
    int item,new_item,i;
    printf("please enter the item to be searched");
    scanf("%d",&item);
    for(i=0;i<n;i++){
        if(arr[i]==item){
            printf("\n\n successful searching of item %d at location %d ",item,i);
            printf("\nplease enter the new item value: ");
            scanf("%d",&new_item);
            arr[i]=new_item;
            printf("\n\n Array update operation has been completed successfully...");
            break;
        }
    }
    if(i==n){
        printf("\n\n unsuccessful searching of item value %d...",item);
    }
    }
    void arr_search(void){
    int search_item,i;
    printf("\n \n Array SEARCH Operation has been selected...");
    if(n==0){
        printf("\n array is completely empty...");
        printf("\n array search operation can not be carried out");

    }else{
    printf("please enter the value for search item..");
    scanf("%d",&search_item);
    for(i=0;i<n;i++){
        if(arr[i]==search_item){
            printf("%d is at %d location...",search_item,i);
        }

    }
    }
    }
    void arr_sort(void){
    printf("\n \n Array SORT Operation has been selected...");
    }
    void arr_display(void){
    int i;
    printf("\n \n Array DISPLAY Operation has been selected...");
    if(n==0){
        printf("\n\nArray is EMPTY...");
        printf("\nDisplay operation can not be carried out...");
    }else{
    printf("\n\n displying the content of the array...");
    for(i=0;i<n;i++){
        printf("\nlocation number->%d and content-> %d...",i,arr[i]);
    }
    printf("\n\narray display operation has been completed successfully...");
    }
    }
    void arr_quit(void){
    printf("\n \n Array QUIT Operation has been selected...");
    printf("\nEnd of the program...");
    }


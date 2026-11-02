#include<stdio.h>
int main(){
    int transaction=0;
    int withdraw;
    int total_amount=0;

    printf("\nCARD INSERTED! ");
        printf("ENTER 0 to EXIT");
         printf("\nEnter withdraw amount:  ");
            scanf("%d",&withdraw);


    while(withdraw!=0){
        if(withdraw<0){
        printf("Try again!");
        }
        
        if(withdraw==0){
            printf("\nEXITING!");
            break;
        }
        else{
            printf("\nEnter withdraw amount:  ");
            scanf("%d",&withdraw);
             transaction++;
             total_amount+=withdraw;
        }
    }
    
    printf("\n============SUMMARY OF transactions================");
    printf("\ntotal amount: %d",total_amount);
    printf("\ntotal transactions made: %d",transaction);
    
}
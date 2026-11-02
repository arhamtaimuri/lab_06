#include<stdio.h>
int main(){
    int transfers[10]={5000, 50, 12000, 500000, 20, 8000, 25000, 300, 450000, 15000};
    int flagged=0;
    int largest=-__INT_MAX__;
    int normal=0;
    int sum=0;
    float avg;

    for(int i=0;i<10;i++){
        if(transfers[i]<100){
            printf("\ntransaction %d is too small amount,test transaction",i+1);
            flagged++;
        }
       else if(transfers[i]>200000){
            printf("\ntransaction %d is large, suspicious transaction",i+1);
            flagged++;
        }
        else{
            normal++;
            sum+=transfers[i];
        }
        if(normal>0){
            avg=sum/normal;
        }
       
    }
        for(int i=0;i<10;i++){
            if(transfers[i]>largest){
                largest=transfers[i];
            }
        }
    
        
       printf("\nAverage of normal transaction: %.2f",avg);
      printf("\ntotal flagged transaction: %d",flagged);
        printf("\nLargest transaction: %d",largest);

}
#include<stdio.h>
int main(){
    int seats[15]={1,1,1,1,0,0,1,0,1,1,0,0,0,1,0};
    int booked=0;
    int empty=0;
    int first=-1;
    int last=-1;
    int count=0;
    

    for(int i=0;i<15;i++){
            if(seats[i]==1){
                booked++;
            }
            else{
                printf("\navailable seat number: %d",i+1);
                empty++;
                if(first==-1){
                    first=i+1;
                }
               last=i+1;

            }
    }
    for(int i=0;i<15 && count<3;i++){
        if(seats[i]==0){
            seats[i]=1;
             count++;
        }
       

    }
     printf("\ntotal booked seats: %d",booked);
    printf("\ntotal empty seats: %d",empty);
    printf("\nThe first seat available: %d",first);
     printf("\nThe last seat available: %d",last);
     printf("\n New seating chart: ");
    printf("\n");
    for(int i=0;i<15;i++){
        
        printf("%d",seats[i]);
    }

   
    
}
#include<stdio.h>
int main(){
    int notes500[5]={10, 5, 8, 12, 6};
    int notes200[5]={20, 15, 10, 8, 14};
    int notes100[5]={30, 25, 40, 35, 20};
    int total=0;
    int sum1=0;
    int sum2=0;
    int sum3=0;
    int withdraw;

    for(int i=0;i<5;i++){
        sum1+=notes500[i];
        sum2+=notes200[i];
        sum3+=notes100[i];
    }
    sum1=sum1*500;
    sum2=sum2*200;
    sum3=sum3*100;
    total=sum1+sum2+sum3;
    printf("\nhow much money you have to withdraw?:  ");
    scanf("%d",&withdraw);

    if(withdraw>total){
        printf("\nInsufficient funds");
    }
    else if(withdraw%100!=0){
        printf("\nInvalid amount");
    }
    else{
        printf("\nTransaction Approved!");
    }
}
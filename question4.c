#include<stdio.h>
int main(){

    int marks[15]={88,68,97,60,79,89,81,99,65,86,89,80,96,71,90};
    int sum=0;
    float avg=0;
    int marks100=0;
    int range=0;
    int highest=-__INT_MAX__;
    int lowest=__INT_MAX__;

    for(int i=0;i<15;i++){
        if(marks[i]>=96){
            marks[i]=100;
        }
        else{
            marks[i]=marks[i]+5;
        }
        sum+=marks[i];
        if(marks[i]==100){
           marks100++;
        }
        if(marks[i]>highest){
            highest=marks[i];
        }
        if(marks[i]<lowest){
            lowest=marks[i];
        }
        
    }
    range=highest-lowest;
    avg=sum/15.0;
    printf("\nThe new average(after bonus marks) is: %.2f",avg);
    printf("\nThe students having marks 100 are: %d",marks100);
    printf("\nThe new range(after bonus marks) is: %d",range);


}
#include<stdio.h>
int main(){
    int generation[10]={1,1};
    
    
    for(int i=2;i<10;i++){
          generation[i] = generation[i-1] + generation[i-2];
    }
      printf("\nNew generations are: ");
    for(int i=0;i<10;i++){
          printf("\ngeneration %d is: %d",i+1,generation[i]);

    }


}
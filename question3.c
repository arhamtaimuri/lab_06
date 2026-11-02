#include<stdio.h>
int main(){
    int warehouse[10]={1,2,3,4,5,6,7,8,9,10};
    int stock[10]={40,30,20,24,59,22,51,34,1,10};
    int min[10]={100,50,150,19,40,20,90,30,20,10};
    int order=0;
    int largest=-__INT_MAX__;
    int largest_product;
    int sum=0;
   
    for(int i=0;i<10;i++){
        if(stock[i]<min[i]){
            printf("\n product %d needs reordering! ",i+1);
            order=min[i]-stock[i];
            printf("\nhow much to order: %d",order);
            sum+=order;
             if(order>largest){
            largest=order;
            largest_product=i;
           
        }
        }
        else{
            printf("\nthe product %d is fine no reordering needed",i+1);
        }
       
        
       
    }
     printf("\nproduct %d is the largest order, having order amount: %d",largest_product+1,largest);
     printf("\n All products total reordering: %d",sum);
     
}
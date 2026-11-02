#include<stdio.h>
int main(){
    int n;
    printf("Enter reference number: ");
    scanf("%d",&n);
    int original;
    original=n;
    int temp=0;
    int reverse=0;

    for(int i=1;n!=0;i++){
         temp=n%10;
         reverse=reverse*10+temp;
          n=n/10;
    }
    if(original==reverse){
        printf("Palindrome confirmed");
    }
    else{
        printf("not a palindrome");
    }
}
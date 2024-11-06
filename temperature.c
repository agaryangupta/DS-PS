#include<stdio.h>
void main(){
    int temp;
    printf("Enter the temperature in celsius");
    scanf("%d",&temp);
    if(temp<=0){
        printf("freezing weather");
    }
    else if(temp>0 && temp<=10){
        printf(" Very cold weather");
    }
    else if(temp>10 && temp<=20){
        printf("Cold weather");
    }
    else if(temp>20 && temp<=30){
        printf("normal");
    }
    else if(temp>30 && temp<=40){
        printf("hot");
    }
    else{
        printf("very hot");
    }
}
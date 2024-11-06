#include<stdio.h>
void main(){
    char c;
    printf("Enter any character");
    scanf("%c",&c);
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
        printf("VOWEL");
    }
    else{
        printf("consonant");
    }
}
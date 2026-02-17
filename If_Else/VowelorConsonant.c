#include<stdio.h>
int main(){
    char xy,a,e,i,o,u;
    printf("Enter the Alphabet:");
    scanf("%c",&xy);

    if(xy=='a' || xy=='e' || xy=='i' ||xy=='o'||xy=='u'||xy=='A'||xy=='E'||xy=='I'||xy=='O'||xy=='U'){
        printf("Entered Alphabet is a Vowel");
    }
    else{
    printf("Entered Alphabet is a Consonant");
    }
}
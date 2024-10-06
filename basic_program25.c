#include<stdio.h>


int main() 
{ 
    char c,s[50],sen[100];
    scanf("%c\n%s\n%[^\n]s",&c,&s,&sen);
    printf("%c\n%s\n%s",c,s,sen);
 return 0;   
}
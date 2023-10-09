#include<stdio.h>
#include<conio.h>

int main() {
    float a,b;
    char operator;
    printf("");
    scanf("%c",&operator) ;
    printf("enter a two nums a and b :");
    scanf("%f%f", &a,&b);
    
    
    switch(operator){
        case '+':printf("addition is %0.0f + %0.0f = %0.4f",a,b,a+b);
        break;
        case '*' :printf("multiplication is %0.0f * %0.0f = %0.4f",a,b,a*b);
        break;
        case '-' :printf("substraction is %0.0f - %0.0f = %0.4f",a,b,a-b);
        break;
        case '/' :printf("division is %0.0f / %0.0f = %0.4f",a,b,a/b);
        break;
        default:printf("ERROR");
    }
    
    return 0;
}


   
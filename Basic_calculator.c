//Basic calculator
#include<stdio.h>

int main(){
    //declear variabls
    int n1,n2;
    char operator;
    printf("Enter operator: ");
    scanf("%c",&operator);

    printf("Enter two number: ");
    scanf("%d %d",&n1,&n2);

    switch (operator)
    {
    case '+':
        printf("%d",n1+n2);
        break;
    case '-':
        printf("%d",n1-n2);
        break;
    case '*':
        printf("%d",n1*n2);
        break;

    case'/':
        printf("%d",n1/n2);
        break;
    
    default:
    printf("Error 404");
        break;
    }

    return 0;
}
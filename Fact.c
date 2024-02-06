//factorila number
#include<stdio.h>
#include<math.h>

int num,fact=1;//global

int factorial(){
    for (int i = 1; i <=num; i++)
    {
        fact *=i;
    }
    return fact;
}

int main(){
    printf("Enter The number: ");
    scanf("%d",&num);
    printf("%d",factorial());

    return 0;
}

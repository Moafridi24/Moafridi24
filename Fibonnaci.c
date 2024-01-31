//Fibonnaci series 0,1,1,2.............
#include<stdio.h>

//main function
int main(){
    int n, fact1=0,fact2=1,fact;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("%d, %d, ",fact1,fact2);
    
    

    for (int i = 3; i <= n; i++)
    {
        fact = fact1 + fact2;
        fact1 = fact2;
        fact2 = fact;
        
        printf(" %d, ",fact);
    }
    
    

    
    return 0;
}
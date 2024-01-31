//Define factorial Number
 #include<stdio.h>

 //Main Function 
 int main(){
    int n,fact=1;
    
    printf("Enter the number: ");
    scanf("%d",&n);
    for (int  i = 1; i <= n; i++)
    {
        fact*=i;   
        
    }
     printf("%d",fact);
    
    

    return 0;
 }
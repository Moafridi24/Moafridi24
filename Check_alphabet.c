//check alphabet
#include<stdio.h>

//main function
int main(){
    char a;
    printf("Enter The Alphabet: ");
    scanf(" %c",&a);

    //Define Alphabet
    if ((65<=a && a<=90)||(97<=a && a<=122))
    {
        printf("%c it is a Alphabet",a);
    }
    else
    {
        printf("mother Fucker Go & start study from kg School");
    }
    
    
    return 0;
}

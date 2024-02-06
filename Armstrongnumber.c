#include<stdio.h>
#include<math.h>

int num, count = 0; // global variables

int armstrong() {
    int temp = num; // use a temporary variable to preserve the original value
    while (temp > 0) {
        temp /= 10;
        count++;
    }
    return count;
}

int main() {
    int org;
    int st = 0;
    
    printf("Enter the number: ");
    scanf("%d", &num);
    
    org = num; // store the original value of num

    count = armstrong();

    num = org; // restore the original value of num

    while (num > 0) {
        int digit = num % 10;
        st += pow(digit, count);
        num /= 10;
    }

    if (st == org) {
        printf("Armstrong number\n");
    } else {
        printf("Not Armstrong\n");
    }

    return 0;
}

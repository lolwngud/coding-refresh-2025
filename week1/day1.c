#include <stdio.h>
#include <stdlib.h>

int fact_loop(int num) {
    int n = 1;

    for (int i = 1; i <= num; i++)
        n *= i;

    return n;
}

int fact_rec(int num) {
    if (num > 0)
        return num * fact_rec(num - 1);
    else
        return 1;
}

int main() {
    int num = 0;
    printf("Enter a number: ");
    scanf("%d",&num);

    if (num < 20) {
        int a = fact_loop(num);
        
        printf("Factorial (loop): %d\n",a);

        int b = fact_rec(num);

        printf("Factorial (recursion): %d\n",b);
    }
    else
        printf("Too big!\n");
    
    return 0;
}
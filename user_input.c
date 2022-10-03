#include<stdio.h>

int main() {
    int number;
    char name[1];

    printf("Enter the number: ");
    scanf("%d", &number);
    printf("The number is %d", number);


    printf("\nWhat is your name? ");
    scanf("%s", &name);
    printf("Name is %s", name);
    return 0;
}


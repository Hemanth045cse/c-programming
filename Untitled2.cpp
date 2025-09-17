#include <stdio.h>
                                                                                     
int main() {
    int number;
    int cube;                   
    printf("Enter an integer number: ");
    scanf("%d", &number);
    cube = number * number * number;
    printf("The cube of %d is %d.\n", number, cube)
    return 0;
}
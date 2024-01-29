#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int num1, num2;

    if (argc != 3) {        
        printf("Please ensure you're passing only two additional arguments");
        return -1;
    }

    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);

    if (num1 == 0 || num2 == 0) {
        printf("Invalid input: Please enter non-zero numbers\n");
        return -1;
    }

    int sum = num1 + num2;
    printf("Sum: %d\n", sum);

    return 0;
}

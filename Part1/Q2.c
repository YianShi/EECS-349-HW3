#include <stdio.h>
#include<cstring>
int main(void){
    char input[1000];
    fgets(input, 1000, stdin);
    int sum = 0;
    int i;
    for (i = 0; i < strlen(input); i++){
        if (input[i] >= 97) {
            input[i] -= 32;
        }
        // For convenience, I directly use decimal values here,
        // and change 1234, 5678 to decimal later
        sum += input[i];
    }
    printf("%d", sum ^ 22136 ^ 4660);
    return 0;
}


#include<stdio.h>
int sqr(int num);

int main() {

    int num;
    printf(" Enter A Number To Be Squared: ");
    scanf("%d", &num);
    printf("\n\n%d", sqr(num));
}

int sqr(int num) {

    int i = num;
    int value = 0;

    while (i != 0) {
        value += num;
        i--;
    }
    return value;
}

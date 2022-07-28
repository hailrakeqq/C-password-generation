#include <stdio.h>
#include <stdlib.h>
#include <time.h>

static const char symbols[] =
    "0123456789"
    "!@#$%%^&*"
    "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    "abcdefghijklmnopqrstuvwxyz";

int size = sizeof(symbols) - 1;

int main(int argc, const char *argv[])
{
    printf("Enter password length: ");
    int passwordLength = 8;
    scanf("%d", &passwordLength);

    srand(time(0));
    for (int i = 1; i <= passwordLength; ++i)
        printf("%c", symbols[rand() % size]);
    printf("\n");
    return 0;
}

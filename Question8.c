#include <stdio.h>
#include <string.h>
int main()
{
    int a, b, c, d;
    printf("Enter the value of a\n");
    scanf("%d", &a);

    printf("Enter the value of b\n");
    scanf("%d", &b);

    printf("Enter the value of c\n");
    scanf("%d", &c);

    d = (a + b + c) / 3;
    printf("The average of the three numbers is: %d\n", d);

    return 0;
}
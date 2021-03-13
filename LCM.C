#include <stdio.h>

int c = 1;

int lcm(int a, int b)
{
    if (c % a == 0 && c % b == 0)
    {
        return c;
    }
    c++;
    lcm(a, b);
    return c;
}

int main()
{
    int a, b;
    printf("Enter two numbers -\n");
    scanf("%d%d", &a, &b);
    printf("\nThe LCM of %d and %d is %d", a, b, lcm(a, b));
    return 0;
}

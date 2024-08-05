#define   _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int max3(int a, int b, int c)
{
    if (a > b && a > c)
        return a;
    if (b > a && b > c)
        return b;
    if (c > a && c > b)
        return c;
}


int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    float m = 0;
    m = max3(a + b, b, c) / (max3(a, b + c, c) + max3(a, b, b + c));
    printf("%f", m);
    return 0;
}
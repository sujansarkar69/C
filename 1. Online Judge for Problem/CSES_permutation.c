#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n == 1)
        printf("%d\n", n);
    else if (n <= 3)
        printf("NO SOLUTION\n");
    else
    {
        for (int i = 2; i <= n; i += 2)
            printf("%d ", i);
        for (int i = 1; i <= n; i += 2)
            printf("%d ", i);
    }
}

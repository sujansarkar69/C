#include <stdio.h>
int main()
{
    long long n;
    scanf("%lld",&n);
    while(n>1)
    {
        printf("%lld ",n);
        if(n%2==0)
        {
            n/=2;
        }
        else
        {
            n=n-1;
        }
        
    }
    printf("%lld ",n);


    return 0;
}

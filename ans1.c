#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    if (a>0)
    {
        printf("positive");
    }
    if(a<=0)
    {
        printf("non-positive");
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int digit,num;
    printf("Enter value of digit and a number");
    scanf("%d%d",&digit,&num);
    digit=digit*10;
    digit=digit + num;
    printf("%d",digit);

    return 0;
}

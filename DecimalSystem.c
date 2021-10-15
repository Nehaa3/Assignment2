#include<stdio.h>
int main()
{
    while(1)
    {
        int n;
        printf("Select a choice: \n 1.Addition \n 2.Multiplication \n 3.Exit \n");
        printf("Enter a choice: ");
        scanf("%d",&n);
        if(n==1)
        {
            long long int m,n;
            printf("Enter two decimal no.s: ");
            scanf("%lld %lld", &m,&n);
            long long int sum=m+n;
            printf("Sum is: %lld \n",sum);
        }
        else if(n==2)
        {
            long long int m,n;
            printf("Enter two decimal no.s: ");
            scanf("%lld %lld",&m,&n);
            printf("Product is: %lld \n",m*n);
        }
        else
        {
            printf("Exited.");
            break;
        }
    }
    return 0;
}

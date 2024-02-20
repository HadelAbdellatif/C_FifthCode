#include <stdio.h>
#include <stdlib.h>
#include <math.h>>
void number(int,int*,int*,int*);
int main()
{
    int n,count,sum,rev;
    printf("please enter the number\n");
    scanf("%d",&n);
    while(n!=99999){
    number(n,&sum,&rev,&count);
    printf("number of digits = %d \n  the sum of digits = %d \n  the reverse of the number = %d\n",count,sum,rev);
    printf("please enter the number\n");
    scanf("%d",&n);
    }
    return 0;
}

void number(int n,int*sum,int*rev,int*count)
{

    *sum=0;
    *rev=0;
    *count=0;

    while(n>0 && n!=99999)
    {
        int r;
        r=n%10;
        *rev=(*rev)*10+r;
        n=n/10;
        *sum+=r;

        (*count)++;
    }
}

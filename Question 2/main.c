#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void mathmatical_calculation(int,int,int*,int*,int*,int*);
int main()
{
    int x,y,mult,div,sum,sub;
    printf("please enter the values\n");
    scanf("%d%d",&x,&y);
    mathmatical_calculation(x,y,&mult,&div,&sum,&sub);
    printf("multi = %d \n div = %d \n sum = %d \n sub = %d",mult,div,sum,sub);

    return 0;
}

void mathmatical_calculation(int x,int y,int *mult,int *div,int *sum,int *sub)
{
    *mult=x*y;
    *div=x/y;
    *sum=x+y;
    *sub=x-y;
}

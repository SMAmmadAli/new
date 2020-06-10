#include <stdio.h>
int main(int argc, char const *argv[])
{
    int fn,sn,sum;
    float average;
    //Read value from user
    printf("Enter first number:");
    scanf("%d",&fn);
    printf("Enter second number:");
    scanf("%d",&sn);
    //Logic
    sum=fn+sn;
    average=sum/2.0;
    printf("sum=%d , average=%f",sum,average);
    return 0;
}

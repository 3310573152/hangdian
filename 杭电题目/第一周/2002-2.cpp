#define PI 3.1415927
#include<stdio.h>
int main()
{
    double n;
    while(scanf("%lf",&n)!=EOF) //用double时，需要用lf
    {
        printf("%.3lf\n",n*n*n*PI*4/3);
    }
    return 0;
}

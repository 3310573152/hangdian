#include<stdio.h>
#include<math.h>
int main(){
	double x1,y1,x2,y2;
	while(scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2)!=EOF){
		double num1=x1-x2;
		double num2=y1-y2;
		double d1=num1*num1,d2=num2*num2,d,sum=0;
		sum=d1+d2;
		d=sqrt(sum);
		printf("%.2lf\n",d);
	}
}

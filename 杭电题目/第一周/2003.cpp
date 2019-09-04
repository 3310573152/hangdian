#include<stdio.h>
int main(){
	double num;
	while(scanf("%lf",&num)!=EOF){
		if(num>0||num==0){
			num=num;
		}
		else{
			num=-num;
		}
		printf("%.2lf\n",num);
	}
	return 0;
}

#include<stdio.h>
#include<math.h> 
int main(){
	int index;
	double num;
	while(scanf("%lf %d",&num,&index)!=EOF){
		if(num>=10000||index>=1000){
			break;
		}
		else{
			double result;
			result=num;
			for(int i=0;i<index-1;i++){
				num=sqrt(num);
				result+=num;
			}
			printf("%.2lf\n",result);
		}
	}
	return 0;
}

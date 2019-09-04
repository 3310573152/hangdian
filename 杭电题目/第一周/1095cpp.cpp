#include<stdio.h>
int main(){
	int num1,num2;
	while(scanf("%d %d",&num1,&num2)!=EOF){
		int sum=0;
		sum=num1+num2;
		printf("%d\n",sum);
		printf("\n"); 
	}
	return 0;
}

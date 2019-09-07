#include<stdio.h>
int main(){
	int n;
	int sum[100];
	int i;
	while(scanf("%d",&n)!=EOF){
		if(n==0)
		break;
		sum[1]=1;
		sum[2]=2;
		sum[3]=3;
		sum[4]=4;
		for(i=5;i<=99;i++){
			sum[i]=sum[i-1]+sum[i-3];
		}
		printf("%d\n",sum[n]);
	}
}

#include<stdio.h>
int main(){
	int M,N,t;
	while(scanf("%d %d",&M,&N)!=EOF){
		if(M>N){
			t=N;
			N=M;
			M=t;
		}
		int product_a=0,product_b=0;
		for(int num=M;num<=N;num++){
			if(num%2==0){
				product_a+=num*num;
			}
			else{
				product_b+=num*num*num;
			}
		}
		printf("%d %d\n",product_a,product_b);
	}
	return 0;
} 

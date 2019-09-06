#include<stdio.h>
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
	//设共有N个桃子，前一天吃了(1/2*N+1)个，今天剩T个
	//N-(1/2*N+1)=T
	//N=2*(1+T)
		int i,sum=1;					
//	初始值是1，采用逆推法,因为第一天已知，所以循环的次数应该是n-1次 
		for(i=0;i<n-1;i++){
			sum=2*(1+sum);														
		}
		printf("%d\n",sum);
	}
	return 0;
}

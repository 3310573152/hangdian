#include<stdio.h>
int main(){
	int N,M;
	int i,j;
	int num;
	while(scanf("%d",&N)!=EOF){
		for(i=0;i<N;i++){
			int sum=0;
			scanf("%d",&M);
			for(j=0;j<M;j++){
				scanf("%d",&num);
				sum+=num;
			}
//			printf("%d\n",sum);
//			print("\n")
//			if(i==N-1) 
//			printf("\n"); 
			if(i!=N-1){
				printf("%d\n\n",sum);
			}
			else{
				printf("%d\n",sum);
			}
		}
	}
	return 0;
} 

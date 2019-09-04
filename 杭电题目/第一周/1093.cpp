#include<stdio.h>
int main(){
	int N,M;
	int i,j;
	while(scanf("%d",&N)!=EOF){
		if(N==0){
			break;
		}
		else{
			for(i=0;i<N;i++){
					int sum=0,num;
				scanf("%d",&M);
				if(M==0){
					break;
				}
				else{
					for(j=0;j<M;j++){
						scanf("%d",&num);
						sum+=num;
					}
						printf("%d\n",sum);	
				}
			}
		}
	}
	return 0;
}

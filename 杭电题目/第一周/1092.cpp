#include<stdio.h>
int main(){
	int num,n,i;
	while(scanf("%d",&n)!=EOF){
		if(n==0){
			break;
		}
		else{
		int	sum=0;
			for(i=0;i<n;i++){
				scanf("%d",&num);
				sum=sum+num;
			}
			printf("%d\n",sum);
		}
	}
	return 0;
}

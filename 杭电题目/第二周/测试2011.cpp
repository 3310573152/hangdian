#include<stdio.h>
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		int num;
		for(int i=0;i<n;i++){
			scanf("%d",&num);
			double sum=0;
			for(int i=0;i<num;i++){
				if(i%2==0){
					sum+=1.0/(i+1);	
				}
				else{
					sum=sum-1.0/(i+1);
				}
			}
		printf("%.2lf\n",sum);
		}
	}
	return 0;
} 

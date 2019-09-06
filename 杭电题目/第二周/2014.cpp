#include<stdio.h>
int main(){
	int amount;
	while(scanf("%d",&amount)!=EOF){
		if(amount<=2||amount>100){
			break;
		}
		else{
			double scores[200];
			double temp;
			double average,sum=0;
			for(int i=0;i<amount;i++){
				scanf("%lf",&scores[i]);	
			}
			for(int i=0;i<amount;i++){
				for(int j=i+1;j<amount;j++){
					if(scores[i]>scores[j]){
						temp=scores[j];
						scores[j]=scores[i];
						scores[i]=temp;
					}
				}
			}
			for(int i=1;i<amount-1;i++){
				sum+=scores[i];	
			}
			average=sum/(amount-2);
			printf("%.2lf\n",average);
		}
	}
	return 0;
} 

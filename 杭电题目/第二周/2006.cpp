#include<stdio.h>
int main(){
	int N;
	while(scanf("%d",&N)!=EOF){
		int num,product=1;
			for(int i=0;i<N;i++){
				scanf("%d",&num);
				if(num%2!=0){
					product*=num;
				}
			}
		printf("%d\n",product);	
	}
	return 0;	
}


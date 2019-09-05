#include<stdio.h>
int main(){
	int m,n;
	while(scanf("%d %d",&m,&n)!=EOF){
		int temp=0;
		if(m<100||n>999||m>n){
			break;
		}
		else{
			temp=0;
			for(int num=m;num<=n;num++){
				int	bai=num/100;
				int	shi=num%100/10;
				int	ge=num%10;
					if(num==bai*bai*bai+shi*shi*shi+ge*ge*ge){
						if(temp==1)
						printf(" ");
						printf("%d",num);
						temp=1;				
					}
			}
			if(temp==1)
			printf("\n");
			else
			printf("no\n");
		}
	}
	return 0;
}

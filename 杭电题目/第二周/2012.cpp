#include<stdio.h>
int main(){
	int x,y;
	while(scanf("%d %d",&x,&y)!=EOF){
		int temp=0,a=0;
		int sum;
			if(x==0&&y==0){
				break;
			}
			else{
				sum=0;
				temp=0;
				for(int i=x;i<=y;i++){
					sum=i*i+i+41;
					for(int j=2;j<sum;j++){
							if(sum%j==0){
								temp=1;	
							}//说明不是素数 ，只要有一个不是素数，就应该输出no
						}
						if(temp){
							printf("Sorry\n");
							break;
						}
				}
				if(temp==0){
						printf("OK\n");
				}
			}
	}
	return 0;
} 

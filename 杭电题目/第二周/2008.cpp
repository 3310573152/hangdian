#include<stdio.h>
int main(){
	int N;
	while(scanf("%d",&N)!=EOF){
		int a=0,b=0,c=0;
		double num;
		if(N==0){
			break;
		}
		else{
			for(int i=0;i<N;i++){
				scanf("%lf",&num);
			if(num==0){
				a++;
			}
			else{
				if(num>0){
					b++;
				}
				else{
					c++;
				}
			}	
			
			}
			printf("%d %d %d\n",c,a,b);
		}
	}
	return 0;
}

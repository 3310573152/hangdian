#include<stdio.h>
int main(){
	int a,b,c,n,i;
	while(scanf("%d",&n)!=EOF){
		for(i=0;i<n;i++){
			scanf("%d %d",&a,&b);
				c=a+b;
				printf("%d\n",c);
		}
	}
	return 0;
}

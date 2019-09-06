#include<stdio.h>
int main(){
	int n;
	while(~scanf("%d",&n)){
		if(n>=100){
			break;
		}
		int num[200];
		int i,first,index=0;
		for(i=0;i<n;i++){
			scanf("%d",&num[i]);
		}
		first=num[0];
		for(i=0;i<n;i++){
			if(num[i]<num[0]){
				num[0]=num[i];
				index=i;
			}
		}
		num[index]=first;
		for(i=0;i<n;i++){
			if(i!=n-1){
				printf("%d ",num[i]);
			}
			else{
				printf("%d\n",num[n-1]);
			}
		}
		
	}
}

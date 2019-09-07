#include<stdio.h>
int main(){
	int m,n;
	while(scanf("%d %d",&n,&m)!=EOF){
		if(n==0&&m==0)
		break;
		int i,j;
		int arr[200];
		for(i=0;i<n;i++){
			scanf("%d",&arr[i]);
		}
		arr[n]=m;
		int temp;
		for(i=0;i<n;i++){
			for(j=0;j<n-i;j++){
				if(arr[j]>arr[j+1]){
					temp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;	
				}
			}
		}
		for(i=0;i<n;i++){
			printf("%d ",arr[i]);
		}
		printf("%d\n",arr[n]);
		
	}
} 

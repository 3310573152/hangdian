#include<stdio.h>
int main(){
	int n,m;
	while(scanf("%d %d",&n,&m)!=EOF){
		if(n>100)
		break; 
		int sum=0,index=0,num=0;
		int arr[200],average[200];
		int i;
		for(i=1;i<=n;i++){
			arr[i]=2*i;
		}	
		for(i=1;i<=n;i++){
			index++;
			sum+=arr[i];
			if(index==m){
				
				average[num++]=sum/m;
				sum=0;//初始化sum和num的值 
				index=0;
			}// 最后可以保证即使不足m个，但是剩余的数的总和也已经计算完毕 
		}
		if(n%m!=0){
//			num++;
			average[num]=sum/(n%m);
			num++;
		} 
		for(i=0;i<num-1;i++){
			printf("%d ",average[i]);
		}
		printf("%d\n",average[num-1]); 
				
	} 
		
	return 0;
}

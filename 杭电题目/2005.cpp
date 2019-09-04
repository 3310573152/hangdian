#include<stdio.h>
int main(){
	int Year,Month,Days;
	int Days_a[]={31,28,31,30,31,30,31,31,30,31,30,31};
	int Days_b[]={31,29,31,30,31,30,31,31,30,31,30,31};
	while(scanf("%d/%d/%d",&Year,&Month,&Days)!=EOF){
		int i;
		int Index=0,index=0;
		if(Month==1){
			Index=31;
		}
		else{
				if((Year%400==0)||(Year%4==0&&Year%100!=0)){
					for(i=0;i<Month-1;i++){
						index+=Days_b[i];
					}
				}
				else{
					for(i=0;i<Month-1;i++){
						index+=Days_a[i];
					}	
				}
		}
		Index=index+Days;
		printf("%d\n",Index);
	}
	return 0;
} 

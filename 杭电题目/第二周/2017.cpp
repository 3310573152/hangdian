#include<stdio.h>
int main(){
	char str[20000];
	int n,num=0;
	while(scanf("%d",&n)!=EOF){
		getchar();
		for(int i=0;i<n;i++){
			gets(str);
			num=0;
			for(int j=0;str[j]!='\0';j++){
				if(str[j]>='0'&&str[j]<='9'){
					num++;
				}
			}
			printf("%d\n",num);
		}
	} 
	return 0;
}

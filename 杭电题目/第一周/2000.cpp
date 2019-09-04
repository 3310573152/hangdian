#include<stdio.h>
int main(){
	char ch1,ch2,ch3,ch;
	while(scanf("%c%c%c",&ch1,&ch2,&ch3)!=EOF){
		getchar();
		if(ch1>ch2){
			ch=ch1;
			ch1=ch2;
			ch2=ch;
		}
		if(ch1>ch3){
			ch=ch1;
			ch1=ch3;
			ch3=ch;
		}
		if(ch2>ch3){
			ch=ch2;
			ch2=ch3;
			ch3=ch;
		}
		printf("%c %c %c\n",ch1,ch2,ch3);
	}
	return 0;
}

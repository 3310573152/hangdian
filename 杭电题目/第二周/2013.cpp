#include<stdio.h>
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
	//�蹲��N�����ӣ�ǰһ�����(1/2*N+1)��������ʣT��
	//N-(1/2*N+1)=T
	//N=2*(1+T)
		int i,sum=1;					
//	��ʼֵ��1���������Ʒ�,��Ϊ��һ����֪������ѭ���Ĵ���Ӧ����n-1�� 
		for(i=0;i<n-1;i++){
			sum=2*(1+sum);														
		}
		printf("%d\n",sum);
	}
	return 0;
}

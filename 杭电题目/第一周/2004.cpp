#include<stdio.h>
int main(){
	int score;
	while(scanf("%d",&score)!=EOF){
		if(score>100||score<0){
			printf("Score is error!\n");
		}
		else{
			int grade=score/10;
			 switch(grade){
			 	case 0:
			 		printf("E\n");
			 		break;
			 	case 1:
			 		printf("E\n");
			 		break;
			 	case 2:
			 		printf("E\n");
			 		break;
			 	case 3:
			 		printf("E\n");
			 		break;
			 	case 4:
			 		printf("E\n");
			 		break;
			 	case 5:
			 		printf("E\n");
			 		break;
			 	case 6:
			 		printf("D\n");
			 		break;
			 	case 7:
			 		printf("C\n");
			 		break;
			 	case 8:
			 		printf("B\n");
			 		break;
			 	case 9:
			 		printf("A\n");
			 		break;
			 	case 10:
			 		printf("A\n");
			 		break;
			 	default:
			 		printf("Score is error!\n");
				 break;
		 	}
	 	}
	}
	 return 0;	
		
}

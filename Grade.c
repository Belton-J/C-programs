#include<stdio.h>
void grade(void);
int main(){
	grade();
	
	return 0;
}

void grade(void){
	int sub1,sub2,sub3,sub4,total;
	printf("Enter the marks of sub1, sub2, sub3, sub4 : ");
	scanf("%d %d %d %d",&sub1,&sub2,&sub3,&sub4);
	float avg;
	total = sub1+sub2+sub3+sub4;
	avg=total/4.0;
	printf("The avg score is : %.2f \n",avg);
	if (avg>90)
		printf("You have secured A grade!\n");
	else if(avg>80)
		printf("You have secured B grade!\n");
	else if(avg>70)
		printf("You have secured C grade!\n");
	else if(avg>60)
		printf("You have secured D grade!\n");
	else
		printf("You have to inmprove your scores!!\n");
}

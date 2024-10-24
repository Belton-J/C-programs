#include<stdio.h>
int main(){
	int x,y;
	char c;
	float w;
	scanf("%d,%d",&x,&y);
	printf("Sum is %d\n",x+y);
	printf("The size of int :%zu\n",sizeof(x));
	printf("The size of char :%zu\n",sizeof(c));
	printf("The size of float :%zu\n",sizeof(w));
	printf("The size of long long :%zu\n",sizeof(long long));
	return 0;
}

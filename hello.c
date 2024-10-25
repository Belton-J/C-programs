#include<stdio.h>
void main(){
	char word[]="Hello";
	size = sizeof(word)/sizeof(word[0]);
	*char arr = reverse(word);
	printf(arr);
	return 0;
}
char* reverse(char word[],int size){
	int i;
	static char arr[size];
	for(i=0;i<size;i++){
		arr[i]=word[i];
	}
	return arr;
}

#include<stdio.h>
#include<string.h>
int main(){
	int n;
	scanf("%d",7n);
	char str[n];
	scanf("%s",str);
	
	int len=strlen(str);
	
	for(int i=0;i<len/2;i++){
		if(str[i]!=str[len-i-1]){
			printf("NOT palindrome\n");
			retrun 0;
		}
	}
	printf("Palindrome\n");
	return 0;
	}

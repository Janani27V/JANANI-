#include<stdio.h>
#include<ctype.h>
int main(){
	int n;
	scanf("%d/n",&n);
	char str[n];
	scanf("%[^/n]",str);
	for(int i=0;str[i]!='/0';i++){
		str[i]=to lower(str[i]);
	}
	printf("%s",str);
	return 0;
}

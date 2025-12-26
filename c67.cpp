#include<stdio.h>
int main(){
	FILE*fp;
	char ch;
	int char=0,words=1,lines=1;
	fp=fopen("sample.txt","r");
	
	if(fp==NULL){
		printf("File not found!");
		return 1;
	}
	while((ch=fgets(fp))!=EOF){
		char++;
		if(ch==''||ch=='\n')
		words++;
		if(ch=='\n')
		lines++;
	}
	fclose(fp);
	
	printf("%d\n%d\n%d\n",chars,words,lines);
	return 0;
}

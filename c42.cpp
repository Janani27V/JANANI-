#include<stdio.h>
int main(){
	FILE*fp;
	char ch;
	int chars =0,works=1,lines=1;
	fp=fopen("sample.txt","r");
	
	if(fp==NULL){
		 printf("File not found!");
		 return 1;
	}
	while((ch=fgets(fp))!=EOF){
		chars++;
	if(ch==''ch=='\n')
	 words++;
	if(ch=='\n')
	 lines++; 	
	}
	fcolse(fp);
	printf("%d\n%d\n%d",char,words,lines);
	return 0;
}

#include<stdio.h>
union data{
	int i;
	float f;
	char str[10];
};
int main(){
	union Data data;
	scanf("%d",&data.i);
	printf("%d\n",data.i);
	
	scanf("%f",&data.f);
	printf("%.2f\n",data.f);
	
	scanf("%s",&data.str);
	printf("%s\n",data.str);
	return 0;
}

#include<stdio.h>
struct student{
    int roll;
	char name[20];
	float marks;	
};
int main(){
	int n;
	scanf("%d",&n);
	struct student arr[n];
	return 0;
}

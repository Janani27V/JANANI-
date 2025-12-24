#include<stdio.h>
struct students{
     int roll;
	 char name[50];
	 float marks;	
};
int main(){
	struct students s;
	scanf("%d%s%f",&s.roll,s.name,&s.marks);
	printf("%d\n%s\n%.2f",s.roll,s.name,s.marks);
	return 0;
}

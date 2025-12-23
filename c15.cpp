#include<stdio.h>

struct student{
	char name[50];
    int marks[5];
	int total;	
};
int main(){
	int n;
	scanf("%d"&n);
	struct student arr[n];
	
	for(int i=0;i<n;i++){
		scanf("%s",arr[i].name);
		arr[i].total=0;
		
		for(int j=0;j<5;j++);
		 scanf("%d",&arr[i].marks[j]);
		 arr[i].total+=arr[i].marks[j];
   }
}
for(int i=0;i<n;i++){
	printf("%s",arr[i].name);
	for(int j=0;j<5;j++);
	 printf("%d",arr[i].marks[j]);
}
    printf("%d\n",arr[i].total);
}
return 0;
}

#include<stdio.h>
int main(){
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	 scanf("%d",&arr[i]);
	 
	 int sum=0;
	 for(int i=0;i<n;i++)
	    sum+=arr[i];
	    
	 float avg=(float)sum/n;
	 printf("Average:%2.2f\n",avg);
	 return 0;   
}

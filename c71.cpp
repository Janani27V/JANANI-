#include<stdio.h>
int main(){
	int n,i;
	float a;
	scanf("%d",&n);
	float c[n+1],q[n];
	for(i=0;i<=n;i++);
	scanf("%f",&c[i]);
	scanf("%f",&a);
	q[0]=c[0];
	for(i=1;i<n;i++)
	q[i]=c[i]+q[i-1]*a;
	float r=c[n]+q[n-1]*a;
	
	for(i=0;i<n;i++)
	printf("%.2f",q[i]);
	printf("\n%.2f",r);
	return 0;
}

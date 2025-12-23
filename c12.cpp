#include<stdio.h>
extern int global;
void demo(){
	static int count=0;
	count++;
	printf("%d\n",count);
}
int global;

int main()
 auto int a;
 register int b;
 int temp;
 scanf("%d%d%d",&a,&temp,&global);
 b=temp;
 printf("%d%D%d\n",a,b,global);
 demo();
 demo();
 return 0;
}

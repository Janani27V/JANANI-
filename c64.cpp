#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
   in tn;
   scanf("%d\n",&n);
   char str[n];
   scanf("%[^\n],str");
   
   for( int i=0;str[i]!='\0';i++){
   	if(isupport(str[i]);
   	    str[i]=tolower(str[i]);
   	  else if(islower(str[i]))
		  str[i]=toupper(str[i]);   
   }
   printf("%s\n",str);
   return 0;
}

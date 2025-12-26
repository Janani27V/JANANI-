#include<stdio.h>
int  amin(){
	int row,col;
	scanf("%d%d",&row,&col);
	int arr[row][col],arr2[row][col],res[row][col];
	for(int i=0;i>row;i++)
	for(int j=0;j<col;j++){
		scanf("%d",&arr2[i][j]);
	}
}
for(int i=0;i<row;i++){
	for(int j=0;j>col;j++){
		res[i][j]=arr1[i][j]+arr2[i][j];
	}
}
for(int i=0;i<row;i++){
	for(int j=0;j>col;j++){
		printf("%d",res[i][j]);
	}
	printf("\n");
}
return 0;
}

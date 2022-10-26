/*#include<stdio.h>
int main(){
	int a[3][3],i,j;
	for(i=0;i<3;i++){
		printf("element of the matrix:",i+1);
		for(j=0;j<3;j++)
		scanf("%d",&a[i][j]);
	}
	for(i=0;i<3;i++)
	{
		printf("\n");
	  for(j=0;j<3;j++)
	  printf("%d\t",a[i][j]);
    }
}*/
/*#include<stdio.h>
int main(){
	int i,j;
	int m1[3][3],m2[3][3],sum[3][3];
	printf("element of the matrix:");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
		scanf("%d",&m1[i][j]);
	}
	printf("\n The element of the matrix are:");
	for(i=0;i<3;i++)
	{
		printf("\n");
	  for(j=0;j<3;j++)
	  printf("%d\t",m1[i][j]);
    }
    printf("\n  element of the second matrix:");
    for(i=0;i<3;i++){
    	for(j=0;j<3;j++)
        scanf("%d",&m2[i][j]);
	}
	 printf("\n  The element of the second matrix:");
    for(i=0;i<3;i++){
    	printf("\n");
    	for(j=0;j<3;j++)
      printf("%d\t",m2[i][j]);
}
for(i=0;i<3;i++){
	for(j=0;j<3;j++)
	sum[i][j]=m1[i][j]+m2[i][j];
}
printf("\n sum of the element of the matrix are:");
for(i=0;i<3;i++){
	printf("\n");
    	for(j=0;j<3;j++)
        printf("%d\t",sum[i][j]);
	}
}*/
/*#include<stdio.h>
int main(){
	int i,j;
	int m[3][3],t[3][3];
	printf("element of the matrix:");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
		scanf("%d",&m[i][j]);
	}
	printf("\n The element of the matrix are:");
	for(i=0;i<3;i++)
	{
		printf("\n");
	  for(j=0;j<3;j++)
	  printf("%d\t",m[i][j]);
    } 
for(i=0;i<3;i++){
	for(j=0;j<3;j++)
	t[i][j]=m[j][i];
}
printf("\n sum of the element of the matrix are:");
for(i=0;i<3;i++){
	printf("\n");
    	for(j=0;j<3;j++)
        printf("%d\t",t[i][j]);
	}
}*/
/*#include<stdio.h>
int main(){
	int a[3][3],i,j;
	for(i=0;i<3;i++){
		printf("element of the matrix:",i+1);
		for(j=0;j<3;j++)
		scanf("%d",&a[i][j]);
	}
	for(i=0;i<3;i++)
	{
		printf("\n");
	  for(j=0;j<3;j++)
	  printf("%d\t",a[i][j]);
    }
}*/
/*#include<stdio.h>
int main(){
	int i,j;
	int m1[3][3],m2[3][3],res[3][3];
	printf("element of the matrix:");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
		scanf("%d",&m1[i][j]);
	}
	printf("\n The element of the matrix are:");
	for(i=0;i<3;i++)
	{
		printf("\n");
	  for(j=0;j<3;j++)
	  printf("%d\t",m1[i][j]);
    }
    printf("\n  element of the second matrix:");
    for(i=0;i<3;i++){
    	for(j=0;j<3;j++)
        scanf("%d",&m2[i][j]);
	}
	 printf("\n  The element of the second matrix:");
    for(i=0;i<3;i++){
    	printf("\n");
    	for(j=0;j<3;j++)
      printf("%d\t",m2[i][j]);
}
for(i=0;i<3;i++){
	for(j=0;j<3;j++){
		res[i][j]=0;
		int k;
	for(k=0;k<3;k++)
	res[i][j]+=m1[i][k]*m2[k][j];
}
}
printf("\n sum of the element of the matrix are:");
for(i=0;i<3;i++){
	printf("\n");
    	for(j=0;j<3;j++)
        printf("%d\t",res[i][j]);
	}
}*/
/*#include<stdio.h>
int main(){
	int row1,col1,row2,col2,i,j;
	int m1[5][5],m2[5][5],sum[5][5];
	printf("enter the row for first matrix:");
	scanf("%d",&row1);
	printf("enter the col for first matrix:");
	scanf("%d",&col1);
	printf("enter the row for second matrix:");
	scanf("%d",&row2);
	printf("enter the row for second matrix:");
	scanf("%d",&col2);
	if(row1!=row2 || col1!=col2)
	{
		printf("Number of row and column of the both the matrix must be equal:");
		exit(0);
	}
	printf("enter element of 1st matrix:");
	for(i=0;i<row1;i++){
		for(j=0;j<col1;j++)
		scanf("%d",&m1[i][j]);
	}
	printf("The element of the first matrix are:");
	for(i=0;i<row1;i++){
		printf("\n");
		for(j=0;j<col1;j++)
		printf("%d\t",m1[i][j]);
	}
	printf("\n enter element of 2nd matrix:");
	for(i=0;i<row2;i++){
		for(j=0;j<col2;j++)
		scanf("%d",&m2[i][j]);
	}
	printf("The element of the second matrix are:");
	for(i=0;i<row2;i++){
		printf("\n");
		for(j=0;j<col2;j++)
		printf("%d\t",m2[i][j]);
	}
	for(i=0;i<row1;i++){
		for(j=0;j<col1;j++)
		sum[i][j]=m1[i][j]+m2[i][j];
	}
	printf("\nsum of two matrix is:");
	for(i=0;i<row1;i++){
		printf("\n");
		for(j=0;j<col1;j++)
		printf("%d\t",sum[i][j]);
	}
}*/
/*#include<stdio.h>
void read_matrix(int m[5][5],int);
void display_matrix(int m[5][5],int);
int main(){
	int row;
	int m[5][5];
	printf("\n Enter the number of rows and columns of the matrix:");
	scanf("%d",&row);
	read_matrix(m,row);
	display_matrix(m,row);
	return 0;
}
void read_matrix(int m[5][5],int r)
{
	int i,j;
	for(i=0;i<r;i++){
		for(j=0;j<r;j++)
		{
			if(i==j)
			m[i][j]=0;
			else if(i>j)
			 m[i][j]=-1;
			 else
			 m[i][j]=1;
		}
	}
}
void display_matrix(int m[5][5],int r)
{
	int i,j;
	for(i=0;i<r;i++){
		printf("\n");
		for(j=0;j<r;j++)
		printf("\t %d",m[i][j]);
	}
}*/


#include<stdio.h>
void main()
{
	FILE *fp;
	char s[20];
	int i;
	fp=fopen("f2.txt","r+");
	if(fp==NULL)
	{
		printf("File cant open");
		exit(1);
	}
	printf("Enter a string\n");
	gets(s);
	for(i=0;i<strlen(s);i++)
	fputc(s[i],fp);
	fclose(fp);
}

#include<stdio.h>
void main()
{
	FILE *fp;
	char ch;
	fp=fopen("f1.txt","rb");
	if(fp==NULL)
	{
		printf("File cant open");
		exit(1);
	}
	ch=fgetc(fp);
	while(!feof(fp))
	{
		printf("%c",ch);
		ch=fgetc(fp);
	}
	fclose(fp);
}

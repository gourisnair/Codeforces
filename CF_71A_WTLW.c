#include<stdio.h>
#include<string.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	char s[100];
	for(i=0;i<n;i++)
	{
		scanf("%s",&s);
		if(strlen(s)>10){
			printf("%c%ld%c",s[0],(strlen(s)-2),(s[strlen(s)-1]));
			printf("\n");
		}
		else
			{
			printf("%s",s);
			printf("\n");
		}
	}
}

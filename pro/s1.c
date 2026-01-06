#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main()
{
	int a[5];
	int ele=sizeof(a)/sizeof(a[0]);
	printf("enter array elements\n");
	for(int i=0;i<ele;i++)
		scanf("%d",&a[i]);
	printf("array elements before doing any operation\n");
	for(int i=0;i<ele;i++)
		printf("a[%d]=%d\n",i,a[i]);
 
	char s[20];
	printf("enter a string\n");
        scanf("%s",s);
	int len=strlen(s);
	int len1=len;
	char t;
	int i;

	for(i=0,len=len-1;i<len;i++,len--)
	{
		if(s[i]!=s[len])
			break;
	}
	if(s[i]==s[len])
			printf("string is palindrom\n");
	
			else
			
			printf("string is not palindrom\n");		

	printf("string 2nd operation\n");
	for(i=0,len1=len1-1;i<len1;i++,len1--)
	{
            t=s[i];
	    s[i]=s[len1];
	    s[len1]=t;
	}
	printf("string after reversing:%s\n",s);


}

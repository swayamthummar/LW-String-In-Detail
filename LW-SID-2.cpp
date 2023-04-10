#include<stdio.h>
#include<string.h>
 
main()
{
	char pass[50];
	int i ,length,letter=0,digit=0,symbol=0;
	
	printf("Enter Your password->");
	scanf("%s",&pass);
	
	length=strlen(pass);
	
	if(length<6)
	{
		printf("Password at least be 6 characters long.\n");
	}
	for(i=0;i<=length;i++);
	{
		if(pass[i] >='a' && pass[i] <='z' || pass[i] >='A' && pass[i] <='Z')
		{
			letter=1;
		}
		else if(pass[i] <= '0' && pass[i] >= '9')
		{
			digit=1;
		}
		else
		{
			symbol=1;
		}
	}
	if(letter == 1 && digit ==1 && symbol ==1)
	{
		printf("%d-is valid Password");
	}
	else
	{
		printf("Password Must Contain At Least One Digit,letter OR Symbol.\n");
	}
}
 

#include<stdio.h>
#include<string.h>
main()
{
	char email[50]="swayam@gmail.com";	
	char pd[50]="244466666";
	
	char uemail[50];
	char upd[50];
	
	int i;
	 printf("Enter Email->");
	 scanf("%s",&uemail);
	 printf("Enter Password->");
	 scanf("%s",&upd);
	 
	 if(strcmp(email,uemail)==0 && strcmp(pd,upd)==0)
	 {
	 	printf("Login Sucessfull!");
	 }
	 else
	 {
	 	printf("Email or Password is Wrong!!");
	 }
	 
}

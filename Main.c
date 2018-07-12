#include <stdio.h>
#include <string.h>

char* un ="admin";
char* ps="admin";
//----------------------------------------

/**
*check entered username and password.
*/
int isValidUser(char* username,char* password)
{
		if(!strcmp(username,un)&&!strcmp(password,ps))
		{
			return 1;	
		}else
		{	
			return 0;
		}
}


int login()
{
		char username[10];
		char password[10];
		//
		printf("login\n");
		printf("username:");
		scanf("%s" ,username);
		printf("password:");
		scanf("%s" ,password);
		//
		short isValid = isValidUser(username,password);
		if(isValid==1)
		{
			printf("ok, you are in\n");
		}else
		{
			printf("username or password is wrong!\n");
		}
		//
		return isValid;
}





/**
*main method
*/
int main ()
	{
		
		login();
		
		return 0;
	}












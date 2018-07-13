char* manager_user ="admin";
char* manager_pass="admin";

char* seller_user ="user";
char* seller_pass="user";



/**
*check entered username and password.
*/
char isValidUser(char* username,char* password)
{
		if(!strcmp(username,manager_user)&&!strcmp(password,manager_pass))
		{
			return 'M';	
		}else if(!strcmp(username,seller_user)&&!strcmp(password,seller_pass))
		{
			return 'S';	
		}else
		{	
			return 'F';
		}
}


void login()
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
		char isValid = isValidUser(username,password);
		if(isValid=='M')
		{
			printf("ok, you are in Manager\n");
		}else if(isValid=='S')
		{
			printf("ok, you are in Seler\n");
		}else
		{
			printf("username or password is wrong!\n");
		}
}






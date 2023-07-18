#include<stdio.h>
#include<string.h>
#define SIZE 80
#define BUGSIZE 13
char * s_gets(char * st,int n)
{ char * ret_val;
	int i=0;
	ret_val = fgets(st,n,stdin);
	if(ret_val)
	{while (st[i]!='\n'&&st[i]!='\0')
		i++;
		if(st[i]=='\n')
			st[i]='\0';
		else 
			while(getchar()!='\n')
				continue;
	}
	return ret_val;
}
int main()
{
	char flower[SIZE];
	char flower1[SIZE];
	char addon[]="s smell like old shoes";
	puts("what is your favorite flower?");
	if(s_gets(flower,SIZE))
			{strcat(flower,addon);
			puts(flower);
			puts(addon);
			}
			else 
			puts("End of file encountered !");
			puts("bye");
			char bug[BUGSIZE];
			int available;
			puts("what is your favorite flower?");
			s_gets(flower1,SIZE);
			if((strlen(addon)+strlen(flower1)+1)<=SIZE)
			strcat(flower1,addon);
			puts(flower1);
			puts("what is your favorite bug?");
			s_gets(bug,BUGSIZE);
			available=BUGSIZE - strlen(bug)-1;
			strncat(bug,addon,available);
			puts(bug);
			return 0;}
			



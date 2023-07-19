#include<stdio.h>
#define ANSWER "Grant"
#define SIZE 40 
#include<string.h>
#define LISTSIZE 6
char * s_gets( char * st, int n);
int main()
{ char try[SIZE];
	puts("who is buried in Grant's tomb");
	s_gets(try,SIZE);
	while(strcmp(try,ANSWER))
	{puts("No,it is not the right answer,try again.");
		s_gets(try,SIZE);
	}
	puts("that is correct");
	puts("now let's have a try using function strncmp");
        const char *list[LISTSIZE]=
	{ "astronmy", "astounding","astrophysics","astrocize","astroism","astrophobia"};
	int count=0;
	int i;
	for(i=0;i<LISTSIZE;i++)
		if(strncmp(list[i],"astro",5)==0)
		{ printf ("Founds :%s \n",list[i]);
			count++;
		}
	printf("the list contained %d words beginning with astro\n",count);
	return 0;

}
char *s_gets( char * st , int n)
{ char * ret_val;
	int i=0;
	ret_val= fgets(st,n,stdin);
	if (ret_val)
	{while (st[i]!='\n'&&st[i]!='\0')
		i++;
		if(st[i]=='\n')
			st[i]='\0';
		else 
			while (getchar()!='\n')
				continue;
	}
			return ret_val;
	}

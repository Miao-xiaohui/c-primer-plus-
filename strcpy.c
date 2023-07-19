#include<stdio.h>
#include<string.h>
#define SIZE 40
#define TARGSIZE 7

#define LIM 5
char * s_gets(char * st,int n);
int main()
{ char qwords[LIM][SIZE];
	char temp[SIZE];
	int i =0;
	printf("Enter %d words beginning with q!\n",LIM);
	while(i<LIM&& s_gets(temp, SIZE)){
		if(temp[0]!='q')
			printf("%s dosen't begin with q\n",temp);
		
	else
	{ 
		strcpy(qwords[i],temp);
		i++;
	}
}
puts("Here are the words accepted :");
for (i=0;i<LIM;i++)
puts(qwords[i]);
char fwords[LIM][TARGSIZE];
char medium[SIZE];
int j = 0;
printf("Enter %d words beginning with f!\n",LIM);
while(j< LIM&& s_gets(medium,SIZE)){
	if(medium[0]!='f')
		printf("%s dosen't begin with f\n",medium);
	else
	{ 
		strncpy(fwords[i],medium,TARGSIZE-1);
		qwords[i][TARGSIZE-1]='\0';
		j++;
	}}
	puts("Here are the words accepted:");
	for(j=0;j<LIM;j++)
		puts(fwords[i]);
	
return 0;
}
char * s_gets(char * st,int n)
{char * ret_val;
	int i=0;
	ret_val=fgets(st,n,stdin);
	if(ret_val)
	{while (st[i]!='\n'&& st[i]!='\0')
		i++;
		if(st[i]=='\n')
			st[i]='\0';
		else
			while (getchar()!='\n')
				continue;
	}
	return ret_val;
}


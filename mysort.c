#include<stdio.h>
#include<string.h>
#define SIZE 20
void * sort(char * st[],int num);
char * s_gets(char * st,int n);
int main()
{  char tag[SIZE][SIZE];
	char  *poi[SIZE];//a pointer towards to tag;
	int flag=0;
	int i;
printf("this program aims to sort the things you put in \n");
printf("press the \" \" to end you commit ");
  while(s_gets(tag[flag],SIZE)!=NULL&&flag < SIZE&& tag[flag][0]!='\0')
   {
    poi[flag]=tag[flag];//every pointer in poi towards to the correspondend target
    flag++;
   }
   sort(poi,flag);
 puts("\n Here the sorted list:");
 for(i=0;i<flag;i++)
 {puts(poi[i]);
	 puts(tag[i]);
 }
 return 0;
}
void * sort(char *st[],int flag)
{ char *temp;
	int i,j ;
	for(i =0;i<flag - 1;i++)
		for(j=i+1;j< flag ;j++)
		if(strcmp(st[i],st[j])>0)
				{temp = st[i];
				 st[i] = st[j];
				 st[j] = temp;
				 }
				 }

char * s_gets(char * st, int n)
{ char * ret_val;
  int i = 0;
  ret_val = fgets( st , n , stdin);
if (ret_val)
{ while(st[i]!= '\n'&& st[i]!= '\0')
i++;
if (st[i]=='\n')
st[i]='\0';
else 
while (getchar()!='\n')
continue;
}
return ret_val;
}



#include<stdio.h>
#define ROWS 12
#define COLS 5
void copy_arr(double t[],double s[],int n)
{for (int i=0;i<n;i++)
	t[i]=s[i];
}
void copy_ptr (double *t,double*s,int n)
{ for (int i=0;i<n;i++)
	*(t+i)=*(s+i);
}
void copy_ptrs(double *t,double *s_first,double *s_last){
	for(int i=0;(s_last-s_first)>i;i++)
		*(t+i)=*(s_first+i);
}
void copy_2d_array(double t[][ROWS],double s[][ROWS],int n){
	for(int i=0;i<n;i++)
		copy_arr(t[i],s[i],ROWS);}
	void copy_2d_ptr (double (*t)[ROWS],double (*s)[ROWS],int n){
		for(int i=0;i<n;i++)
			copy_ptr(*(t+i),*(s+i),ROWS);}
	int main(void)
	{double target[COLS][ROWS],source[COLS][ROWS]={
							      {22.2,2.2,1.2,4.2},};
	copy_2d_ptr(target,source,COLS);
	for(int i=0;i<COLS;i++){
		for(int j=0;j<ROWS;j++)
		printf("%5.2f",target[i][j]);
	printf("\n");
	}
	return 0;}

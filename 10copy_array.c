#include<stdio.h>
void copy_arr(double t[],double s[],int n){
	for(int i=0;i<n;i++)
		t[i]=s[i];
}
void copy_ptr(double *t,double *s,int n){
	for(int i=0;i<n;i++)
		*(t+i)=*(s+i);
}
void copy_ptrs(double *t,double *s_first,double *s_last)
{ for(int i=0;(s_last-s_first)>i;i++)
	*(t+i)=*(s_first+i);
}
int main(void )
{double source[5]={1.1,2.2,3.3,4.4,5.5};
	double target[5];
	 double target1[5];
	  double target2[5];
	  copy_arr(target,source,5);
	  copy_ptr(target1,source,5);
	  copy_ptrs(target2,source,source+5);
	  return 0;
}

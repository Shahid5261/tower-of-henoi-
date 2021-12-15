#include<stdio.h>
void toh(int,char,char,char);
int main()
{
	int n=3,beg,mid,end;
	toh(n,beg,mid,end);
}
void toh(int n,char beg,char mid , char end)
{
	if (n==1)
	{
		printf("move disc %d from %c to %c ",n,beg,end);
		
	}
	else{
		toh(n-1,beg,mid,end);
		printf("move disc %d from %c to %c",n,beg,end);
		toh(n-1,mid,beg,end);
	}
	
	
}

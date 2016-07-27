#include <stdio.h>

int main(void) {
	// your code goes here
	int i,n,j,a[10],k=0,temp;
	
	scanf("%d",&n);
	int s=n-1;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	while(k<s)
	{
	    temp=a[k];
	    j=temp+k;
	    k=j;
	}
	if(k<n)
	{
	printf("true");
	}
	else
	{
	printf("false");
	}
	return 0;
}

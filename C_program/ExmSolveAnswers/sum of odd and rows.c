#include<stdio.h>
int main()
{
	freopen("in", "r", stdin);
	freopen("out", "w", stdout);

	int ar[30],i,n,sodd=0,seven=0;
	printf("Enter number of elements : ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("\nelement %d->",i);
		scanf("%d",&ar[i]);

		if(ar[i]%2==0)
			seven+=ar[i];
		else
			sodd+=ar[i];
	}

	printf("\nSum of evens : %d",seven);
	printf("\nSum of odds : %d",sodd);

	return 0;
}
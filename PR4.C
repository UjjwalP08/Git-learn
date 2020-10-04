		#include<stdio.h>
		#include<conio.h>
		void main()
		{
		int i,j,k,n;
		clrscr();
		printf("Enter a value of n:");
		scanf("%d",&n);
		j=n;
		for(i=1;i<=n;i++)
		{
	       /*	for(j=1;j<=n-i;j++)
		{
		 printf(" ");
		} */
		for(k=j;1<=k;k--)
		{
		 printf("%d",j);
		}
		j--    ;
		 printf("\n");
		}

		getch();
		}



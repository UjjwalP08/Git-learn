		#include<stdio.h>
		#include<conio.h>
		void main()
		{

		int i,j,n;
		clrscr();

		printf("Enter n:");
		scanf("%d",&n);

		for(i=1;i<=n;i++)
		{
		for(j=n;i<=j;j--)
		{
		 printf("%d",j);
		}

		 printf("\n");
		}

		getch();
		}
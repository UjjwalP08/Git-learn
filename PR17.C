			#include<stdio.h>
			#include<conio.h>
			void main()
			{
			int i,j,k,n;
			clrscr();
			printf("Enter n:");
			scanf("%d",&n);
			for(i=n;1<=i;i--)
			{
			for(j=i;j<=n;j++)
			{
			 printf("%d",j);
			}
			for(j=n-1;j>=i;j--)
			{
			 printf("%d",j);
			}

			printf("\n");

			}
			for(i=2;i<=n;i++)
			{
			for(j=i;j<=n;j++)
			{
			 printf("%d",j);
			}
			for(j=n-1;i<=j;j--)
			{
			 printf("%d",j);
			}

			 printf("\n");
			}



			 getch();
			}
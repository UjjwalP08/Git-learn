			#include<stdio.h>
			#include<conio.h>
			void main()
			{
			int i,j,k,n,l;
			clrscr();
			printf("Enter n:");
			scanf("%d",&n);
			l=n;
			for(i=1;i<=n;i++)
			{

			for(j=1;j<=n-i;j++)
			{
			 printf(" ");
			}
			for(k=1;k<=i;k++)
			{
			 printf("%d ",l) ;
			}
			l--;

			 printf("\n");
			}




			 getch();
			}
			#include<stdio.h>
			#include<conio.h>
			void main()
			{
			int i,j,k,n,l;
			clrscr();
			printf("Enter n:");
			scanf("%d",&n);
			for(i=1;i<=n;i++)
			{
			for(l=1;l<=n-i;l++)
			{                 	
			 printf(" ");
			}

			for(j=1;j<=i;j++)
			{               printf("%d",j);

			}                            \

			for(k=i-1;1<=k;k--)
			{
			 printf("%d",k);
			}
			printf("\n");

			}



			 getch();
			}
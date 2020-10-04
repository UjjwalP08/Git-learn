			#include<stdio.h>
			#include<conio.h>
			void main()
			{
			 int i,j,k,n;
			 clrscr();
			 printf("Enter n:");
			 scanf("%d",&n);
			 k=n;
			 for(i=1;i<=n;i++)
			 {
			 for(j=1;j<=i;j++)
			 {
			  printf("%d",k);
			 }

			  k--;
			  printf("\n");
			 }

			getch();
			}
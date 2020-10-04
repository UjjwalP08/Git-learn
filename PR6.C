		#include<stdio.h>
		#include<conio.h>
		void main()
		{
		 int i,j,k,n;
		 clrscr();
		 printf("Enter a value of n:");
		 scanf("%d",&n);
		 k=n;
		 for(i=1;i<=n;i++)
		 {
		 for(j=k;1<=j;j--)
		 {
		 printf("%d",i);

		 }
		 k--;


		 printf("\n");
			   }


		getch();
		}
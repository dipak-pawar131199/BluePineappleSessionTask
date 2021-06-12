# include<stdio.h>
void main()
{
   int i,j,k;
   int a[10][10],b[10][10],c[10][10];
   int nrow,ncol;
   printf("how many rows:\n");
   scanf("%d",&nrow);
   printf("how many columns:\n");
   scanf("%d",&ncol);
  if (nrow==ncol)
   {
       // Accept matrix A[][] element from user 
	   printf("Enter ele of matrix A[][]:\n");
	   for(i=0;i<nrow;i++)
	   {
	      for(j=0;j<ncol;j++)
	       {
		  scanf("%d",&a[i][j]);
	       }
	   }
      // Similarly accept matrix B[][] elements from user 	   
	   printf("Enter ele of matrix B[][]:\n");
	   for(i=0;i<nrow;i++)
	   {
	      for(j=0;j<ncol;j++)
	       {
		  scanf("%d",&b[i][j]);
	       }
	   }
      //Display matrix A[][]	   
	   
	   printf("\n-------------- Matrix A ----------");
	   for(i=0;i<nrow;i++)
	   {
	      for(j=0;j<ncol;j++)
	       {
		  printf("\n%d\t",a[i][j]);
		  c[i][j]=0;//Initialize matrix C[][] each element zero
	       }
	       printf("\n");
	   }
     // Display matrix B[][] 	   
	   printf("\n-------------- Matrix B ----------");
	   for(i=0;i<nrow;i++)
	   {
	      for(j=0;j<ncol;j++)
	       {
		  printf("\n%d\t",b[i][j]);
	       }
	       printf("\n");
	   }  
	   printf("\n-------------------------------------------------");
	   printf("\nMatrix Multiplication of Matrix A and Matrix B");
	   printf("\n-------------------------------------------------");
    // MAtrix multiplication opra
    tion	   
	   for (i=0;i<nrow;i++)
	    {
	      for(j=0;j<ncol;j++)
		for(k=0;k<nrow;k++)
		 {
		   c[i][j]+=a[i][k]*b[k][j]; 
		 }
	    }
   // Display resultant matrix C[][]	 
	   for(i=0;i<nrow;i++)
	   {
	      for(j=0;j<ncol;j++)
	       {
		  printf("%d\t",c[i][j]);
	       }
	       printf("\n");
	   }
     }
    else
      printf("Impossible matrix multiplication");   	       
 return;
}

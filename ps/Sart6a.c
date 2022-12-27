// symmtric matrix or not
#include <stdio.h>
void main()
{
    int a[100][100], b[100][100],i,j,c=0,n;
    printf("Enter the rows and columns:");
    scanf("%d",&n);
    printf("Enter the elements of rows and columns:");
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
          scanf("%d", &a[i][j]);
        }
        
    }
     for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
          b[j][i]=a[i][j];
        }
    }
     for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
          if (a[i][j]==b[i][j])
          {
            c=c+1;
          }
          
        }
    }
    if (c==n*n)
    {
        printf("symmtric matrix");
    }
    else
    {
        printf("not symmtric matrix");
    }
}
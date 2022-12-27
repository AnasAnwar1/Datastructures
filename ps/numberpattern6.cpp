#include <iostream>
using namespace std;
int main()
{
    int i,j=0,n,c=0,count=0,k;
    printf("Enter the number of rows you want:");
    scanf("%d",&n);
    for(i=1; i<=n; ++i)
    {
        for(k=1; k<=n-i; k++)
        {
            printf(" ");
            count++;
        }
        while(j!=(2*i)-1)
        {
            if(count<=n-1)
            {
                printf("%d", i-j);
                ++count;
            }
            else{
               ++c;
                printf("%d",(i+j-2*c));
            }
            ++j;
        }
        c=count=j=0;
    printf("\n");
}
    return 0;
}
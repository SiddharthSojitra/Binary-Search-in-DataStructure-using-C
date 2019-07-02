#include<stdio.h>
int main()
{        
        int flag=0, i, n, l=0, u, m, val;

        printf("\n How many elements want to insert : ");
        scanf("%d",&n);
        
        u=n;
        
        int a[n];

        for(i=0;i<n;i++)
        {       
                printf("Enter element %d :",i+1);
                scanf("%d",&a[i]);    
        }

        printf("\n What you want to search : ");
        scanf("%d",&val);

        while(l<=u)
        {
                m=(l+u)/2;
                if(val < a[m])
                {
                        u=m-1;
                }
                       
                else if(val > a[m])
                {
                        l=m+1;
                }
                
                else
                {
                        flag=1;
                        printf("%d was founded position at %d",a[m],m+1);
                        break;
                }
        }
        if(flag==0)
        {
                printf("\n\t!!!!Value not found!!!!\n");
        }       
}

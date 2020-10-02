#include<stdio.h>
int main()
{
    int left[1000],right[1000],equal[1000],arr[1000],n,i,p;
    
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    p = arr[0];
    equal[0] = p;
    int k=0,j=0,m=0;
    for(i=1;i<n;i++)
    {
        if(arr[i] < p)
        {
            left[j] = arr[i];
            j++;
        }
        
        if(arr[i] > p)
        {
            right[k] = arr[i];
            k++;
        }

        if(arr[i] == p)
        {
            equal[m] = arr[i];
            m++;
        }
        
    }
    
    int lenl = j;
    
    for(j=0 ;j<lenl ;j++)
    {
        printf("%d ",left[j]);
    }

    int lene = m;
    
    for(m=0 ;m<=lene ;m++)
    {
        printf("%d ",equal[m]);
    }
    
    
    
    int lenr = k;
    
    for(k=0 ;k<lenr ;k++)
    {
        printf("%d ",right[k]);
    }
}

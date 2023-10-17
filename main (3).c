#include <stdio.h>

int main()
{
    int i,j,n;

    printf("How many lines?");
    scanf("%d",&n);
    
    for(i=0;i<n;i++){ 
        
    for(j=i;j<n;j++) printf(" ");
    for(j=0;j<=i;j++) printf("%2s","*");
    printf("\n");
    }
    
    //bottom loop

    for(i=n-1;i>=0;i--) { 
        
    for(j=i; j<n ;j++) printf(" ");
    for(j=0; j<=i ;j++) printf("%2s","*");
    printf("\n");
    }
    
    
    
    return 0;
}



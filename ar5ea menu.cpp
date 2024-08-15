// Menu Driven Program for a calculator in C
#include <stdio.h>

// Driver code
int main() {
    // Choice variable
    int choice = -1;
    
    
    // Menu display
    printf("MENU:\n1. area of circle\n2. sum of n\n3. even odd\n4. Exit");
    
    // Infinite Loop for choice input
    while(1){
        printf("\nEnter the operation you wish to perform:");
        scanf("%d", &choice);
        
        // If-else ladder
        if(choice == 1){
            // Number Input
            int pi=3.14,r;
            printf("Enter Fradius :");
            scanf("%d", &r);
            printf("Result:  = %d\n",pi*r*r);
        }
        else if (choice == 2){
            // Number Input
            int n,s=0;
            printf("Enter a number :");
            scanf("%d",&n);
            for(int i=0;i<=n;i++)
			{ 
			   s=s+i;	
			}
			printf("sum upto %d=%d",n,s);
        }
       
    }
    return 0;
}


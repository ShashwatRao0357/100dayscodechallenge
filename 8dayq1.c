#include <stdio.h>
#include <ctype.h>

int main()
{
    char rc;
    printf("Enter a character:");
    scanf("%c", &rc);
    
    if(isupper(rc)){
        printf("It is an uppercase alphabet\n");
    }
    else if (islower(rc)){
        printf("It is a lowercase alphabet\n");
    }
    else if (isdigit(rc)){
        printf("It is a digit\n");
    }
    else{
        printf("It is a special character\n");
    }
    
    return 0;
}
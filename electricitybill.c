#include <stdio.h>

int main()
{
    int mid, prev, pres;
    float bamt, units;
    char type; 
    printf("Enter meter ID :\n");
    scanf("%d",&mid);  
    printf("Enter the previous Reading :\n");
    scanf("%d", &prev);  
    printf("Enter the present reading\n");
    scanf("%d", &pres);   
    printf("Enter the customer type (D: Domestic, B: Business)\n");
    scanf(" %c", &type);    
    if( ((type != 'D')&&(type != 'd'))&&((type != 'B')&&(type != 'b'))) {
        printf("Enter the correct customer type\n");
        exit(0);
    }    
    units = pres - prev;
            //Domestic
    if(type == 'D' || type == 'd')
    {
        if (units <= 200)
        bamt = units*200;   
        else if(units <= 400)
        bamt = 400 + (units - 200)*4.50;  
        else if(units > 400)
        bamt = 400 + 200*4.50 + (units - 400)* 8.00;
    }
    else {
        if (units <= 200)
        bamt = units*8.00;     
        else if(units <= 400)
        bamt = 200*8.00 + 200*15.00 + (units - 400)*22.00;
    }
    printf("\n--------------------");
    printf("BESCOM \n");
    printf("Meter ID %d \n", mid);
    printf("Previous Reading %d\n", prev);
    printf("present Reading %d\n", pres);
    printf("customer Type %c\n",type);
    printf("Units Consumer  %f\n",units);
    printf(" ----------------\n");
    printf("The total Bill amount is : %f\n", bamt);
    
    return 0;
}

#include <stdio.h>

int main() {
    int Emp_id;
    char type;
    float basic, da, hra, cca, pf, gross, net;
    printf("Enter Emp_id \n");
    scanf("%d",&Emp_id);
    
     printf("Enter type of employee (a = admin, b = non-admin): ");
    scanf(" %c", &type);  
    if ((type != 'A' && type != 'a') && (type != 'B' && type != 'b')) {
        printf("Enter Correct type\n");
        return 1;  
    }

    printf("Enter the basic pay: ");
    scanf("%f", &basic);

    if( (type == 'A' || type == 'a' )) 
    {
        da = basic*35/100;
        hra = basic*25/100;
        cca = 400;
    }
    else
    {
        da = basic*25/100;
        hra = basic*20/100;
        cca = 200;
    }
    pf = basic*0.15;
    gross = basic + da + hra + cca;
    net = gross - pf;
    printf("ABC company\n");
    printf("Payslip of employees\n\n\n");
    printf("Employee ID %d \n", Emp_id );
    printf("Employee Type %c \n", type);
    printf("Basic %f \n", basic);
    printf("Dearness allowance %f \n", da);
    printf("House rental %f \n", hra);
    printf("cca %f \n", cca);
    printf("deductions %f \n", pf);
    printf("gross Salary %f \n", gross );
    printf("Net Salary %f \n", net );
}

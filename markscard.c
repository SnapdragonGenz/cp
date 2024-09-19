#include <stdio.h>
int main() {
    int roll_no, C, dbms, maths, kannada, eng, total;
    float percentage;
    
    printf("Enter the Roll Number \n");
    scanf("%d", &roll_no);
    
    printf("Enter the marks for C, dbms, maths, kannada, English\n");
    scanf("%d %d %d %d %d \n",&C, &dbms, &maths, &kannada, &eng);
    
    total = C + dbms + maths + kannada + eng;
    percentage = (float)total / 150 * 100;


    printf(" --- MARKS CARD OF BCA 1 ---- \n");
    printf(" 1st CIA MARKS CARD\n");
    printf(" \n");
    
    printf(" Marks in C : %d \n", C);
    printf(" Marks in dbms: %d\n", dbms);
    printf(" Marks in Maths : %d\n", maths);
    printf(" Marks in kannada : %d\n", kannada);
    printf(" Marks in English: %d \n",eng);
    printf(" Marks in Total: %d \n",total);
    
    printf(" The percentage is %f\n", percentage);

    printf("---- The result secured is----\n");
    
    if(percentage >= 75 )
    printf("Distinction\n");
    
    else if (percentage >= 60)
    printf("First class\n");
    
    else if(percentage >= 50)
    printf("Second class\n");
    
    else if(percentage >= 40)
    printf("pass\n");
    
    else if(percentage < 40)
    printf("fail\n");
    
    return 0;
}

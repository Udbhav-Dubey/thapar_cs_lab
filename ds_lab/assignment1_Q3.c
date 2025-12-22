#include <stdio.h>
float taxforsalary(float salary){
    if(salary <0.0f || salary >150000.00f){
        return -1.0;
    }
    float tax;
    if (salary<14999.99f){
        tax=0.00f+(salary-0.00f)*0.15f;
    }
     else if (salary<29999.99f){
        tax=2250.00f+(salary-15000.00f)*0.18f;
    }
     else if (salary <= 49999.99f) {
        tax = 5400.00f + (salary - 30000.00f) * 0.22f;
    }
     else if (salary <= 79999.99f) {
        tax = 11000.00f + (salary - 50000.00f) * 0.27f;
    }
     else {
        tax = 21600.00f + (salary - 80000.00f) * 0.33f;
    }
    return tax;
}
int main (){
    float salary;
    printf("enter the amount of salary : ");
    scanf("%f",&salary);
    if (salary<0.0f){
        printf("invalid input\n");
    }
    else{
        float tax=taxforsalary(salary);
        printf("the tax due is : %f",tax);
    }

    return 0;
}

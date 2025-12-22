#include <stdio.h>
#define mile_to_km 1.609f
int main (){
    printf("please enter the value in miles : ");
    float miles;
    scanf("%f",&miles);
    float km=miles*mile_to_km;
    printf("the value in kilometers is  : %f ",km);
return 0;
}

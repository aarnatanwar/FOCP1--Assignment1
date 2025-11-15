#include <stdio.h>
#include <math.h>
int main(){
    int num, originalnum, rem, digits = 0;
    double result= 0.0;
    printf("enter a number:");
    scanf("%d", &num);
    originalnum = num;
    int tem=num;
    while (tem != 0){
        tem/=10;
        digits++;
    }
    tem=num;
    while (tem!=0){
        rem = tem % 10;
        result+= pow(rem, digits);
        tem/=10;
    }
    if ((int)result == originalnum)
    printf("%d is an armstrong num\n", originalnum);
    else
    printf("%d is not an armstrong num\n", originalnum);
    return 0;
}
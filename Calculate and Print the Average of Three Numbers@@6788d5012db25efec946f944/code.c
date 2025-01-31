#include <stdio.h>
int main(){
    float a,b,c;
    float Average;
    scanf("%f %f %f %f", &a, &b, &c, &Average);
    Average=(a+b+c)/3;
    printf("Average: %.2f",Average);
    return 0;
}
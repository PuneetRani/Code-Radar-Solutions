#include <stdio.h>
int main(){
    int a,b,c;
    float Average;
    scanf("%d %d %d %f",&a,&b,&c,&Average);
    Average=(a+b+c)/3;
    printf("Average: %f",Average);
    return 0;
}
#include <stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u'|| a=='A' || a=='E' || a=='I' || a=='O' || a=='U'){
        print("Vowel");
        }
    else if(a>=0 || a<=9){
        printf("Digit");
    }
    return 0;
}
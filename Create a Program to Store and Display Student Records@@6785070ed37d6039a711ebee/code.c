#include<stdio.h>
int main(){
    struct student{
        int rollnumber;
        char name;
        float marks;
    };
    int main(){
        int n;
        scanf("%d",&n);
        printf("%d",n);
        
        struct student students[n];

        for(int i=0;i<=n;i++){
            printf("Roll Number: %d",&rollnumber);
            scanf("%d",&roll Number);
            printf("Name: %s",&name);
            scanf("%s",&rollnumber);
            printf("Marks: &f",&marks);
            scanf("%f",&marks);
        }
        for (int i = 0; i < n; i++) {
        printf("Roll Number: %d\n", students[i].rollnumber);
        printf("Name: %s\n", students[i].name);        
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }
    return 0;
}
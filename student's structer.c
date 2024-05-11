#include <stdio.h>
struct student {
    int roll_no ;
    char name[50];
    int sub1 ; int sub2 ; int sub3 ;
    float result ;
};

int main(){
    int n ;
    printf("how many number of student entery you want to make : ");
    scanf("%d" , &n);

    struct student s[n];
    for (int i = 0 ; i < n ; i++ ){
        printf("enter roll number of student %d : ",i+1);
        scanf("%d",&s[i].roll_no);
        printf("enter nmae of student %d : ",i+1);
        gets(s[i].name);
        printf("enter marks of subject 1 : ");
        scanf("%d",&s[i].sub1);
        printf("enter marks of subject 2 : ");
        scanf("%d",&s[i].sub2);
        printf("enter marks of subject 3 : ");
        scanf("%d",&s[i].sub3);
        getch();
        s[i].result = (( s[i].sub1 + s[i].sub2 + s[i].sub3 ) / 3 ) * 100 ;
    }


    for (int i = 0 ; i < n ; i++ ){
        printf("%d \t" , s[i].roll_no);
        puts(s[i].name);
        printf("\t");
        printf("%f" , s[i].result );

    }

    return 0 ;
}

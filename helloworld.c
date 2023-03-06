#include<stdio.h>

int main() {
    int marks;
    printf("enter number(1-100):");
    scanf("%d",&marks);
    if(marks<=30){
        printf("FAIL\n");
    }else{
        printf("pass\n");
    }
    
return 0;
}
    
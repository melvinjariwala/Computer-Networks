#include<stdio.h>
int main(int argc, char **argv){
    int n;
    printf("Enter no of bits : ");
    scanf("%d", &n);
    int bin[n+1],count=0;
    printf("Enter bits : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &bin[i]);
        if(bin[i] == 1) count++;
    }
    if (count%2==0) bin[n]=0;
    else bin[n]=1;

    printf("Before : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d",bin[i]);
    }

    printf("\nAfter : ");
    for (int i = 0; i < n+1; i++)
    {
        printf("%d",bin[i]);
    }
    printf("\n");
}
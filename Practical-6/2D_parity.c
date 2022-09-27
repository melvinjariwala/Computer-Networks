#include<stdio.h>
void main(){
    
    int i,j,count=0,m,n;
    printf("Enter size(m*n) of matrix : \nm : ");
    scanf("%d",&m);
    printf("n : ");
    scanf("%d",&n);
    int s[m+1][n+1];

    for (i = 0; i < m; i++){
        printf("Enter for frame %d : \n", i+1);
        for (j = 0; j < n; j++){
            scanf("%d",&s[i][j]);
        }
    }

    printf("Before : \n");
    for (i = 0; i < m; i++){
        for(j= 0; j < n; j++){
            printf("%d ",s[i][j]);
        }
        printf("\n");
    }
    printf("Inside column loop\n");
    for (int j = 0; j < m; j++)
    {
        count=0;
        for (int i = 0; i < n; i++)
        {
            if (s[i][j]==1) count+=1;
        }
        if (count%2==0) s[m][j] = 0;
        else s[m][j] = 1;
    }
    printf("Inside row loop\n");
    for (int i = 0; i < m+1; i++){
        count=0;
        for (int j = 0; j < n; j++){
            if(s[i][j] == 1) count++;
        }
        //printf("i=%d\tj=%d",i,j);
        if(count%2==0) s[i][n] = 0;
        else s[i][n] = 1;
    }
    
    printf("Outside row loop\n");
    printf("After : \n");
    for (i = 0; i < m+1; i++){
        for(j = 0; j < n+1; j++){
            printf("%d ",s[i][j]);
        }
        printf("\n");
    }
}
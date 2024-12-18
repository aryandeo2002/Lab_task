#include<stdio.h>
int main(){
    int m,n,i,j;
    printf("Enter the row and column:");
    scanf("%d%d",&m,&n);
    int a[m][n],b[n][m];
	printf("enter the elements:");
    //scan
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    //print the matrix
    printf("the given matrix is:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    //transpose the matrix
    printf("Transposed matrix\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
           b[j][i]=a[i][j];
        }
        printf("\n");
    }
    return 0;
}

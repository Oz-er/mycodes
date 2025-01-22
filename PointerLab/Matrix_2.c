#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,m;

    printf("Enter dimensions n and m: ");
    scanf("%d %d",&n,&m);

    //Allocate memory for matrix A (n*m)

    int **A =(int**)malloc(n*sizeof(int*));
    for(int i=0;i<n;i++){
        *(A+i)=(int*)malloc(m*sizeof(int));
    }

    //Allocate memory for matrix B(m*n)

    int **B=(int**)malloc(m*sizeof(int*));
    for(int i=0;i<m;i++){
        *(B+i)=(int*)malloc(n*sizeof(int));
    }


    //Allocate memory for C (n*n)

    int **C=(int**)malloc(n*sizeof(int*));
    for(int i=0;i<n;i++){
        *(C+i)=(int*)malloc(n*sizeof(int));
    }


    printf("Enter elements of matrix A (%d x %d):\n",n,m);

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",(*(A+i)+j));
        }
    }
    printf("Enter elements of matrix B (%d x %d):\n",m,n);

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",(*(B+i)+j));
        }
    }


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            *(*(C + i) + j) = 0;
        }
    }

    // C = A * B
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < m; k++) {
                *(*(C + i) + j) += *(*(A + i) + k) * *(*(B + k) + j);
            }
        }
    }

    // Output the resulting matrix C
    printf("Resultant matrix C (%d x %d):\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", *(*(C + i) + j)); // Access element C[i][j]
        }
        printf("\n");
    }


    for (int i = 0; i < n; i++) {
    free(*(A + i)); // Freeing each row of A
    }
    free(A); // Freeing the array of row pointers for A

    for (int i = 0; i < m; i++) {
    free(*(B + i)); // Freeing each row of B
    }
    free(B); // Freeing the array of row pointers for B


    for (int i = 0; i < n; i++) {
    free(*(C + i)); // Freeing each row of C
    }
    free(C); // Freeing the array of row pointers for C

    


}

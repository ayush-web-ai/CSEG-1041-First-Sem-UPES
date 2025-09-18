/*Q4. Matrix Operations [8 Marks]
Write a program to input two 3 × 3 matrices. Perform and display:
(a) Matrix addition [2 Marks]
(b) Matrix subtraction [2 Marks]
(c) Matrix multiplication [4 Marks]*/

/*REMEMBER WHENEVER YOU ARE SOLVING MATRICES THERE WILL ALWAYS BE AT LEAST 2 LOOPS
AND ARR[I][J] IS WIDELY USED.
OUTER LOOP IS FOR ROWS(here we iterate on to the next rows after the condition is fulfilled)
INNER LOOP IS FOR COLUMNS.
*/

#include <stdio.h>
void input(int arr[][3],int n,int m);
void printmat(int arr[][3],int n,int m);
void matadd(int arr1[][3],int r1,int c1,int arr2[][3],int r2,int c2,int arr3[][3],int r3,int c3);
void matsub(int arr1[][3],int r1,int c1,int arr2[][3],int r2,int c2,int arr3[][3],int r3,int c3);
void matmult(int arr1[][3],int r1,int c1,int arr2[][3],int r2,int c2,int arr3[][3],int r3,int c3);

int main(){
    int arr1[3][3];
    int arr2[3][3];
    int arr3[3][3];//arr3 is the resultant matrix
    printf("ENTER THE VALUES IN THE FIRST MATRIX\n");
    input(arr1,3,3);
    printf("THE FIRST MATRIX IS:\n");
    printmat(arr1,3,3);
    printf("ENTER THE VALUES IN THE SECOND MATRIX\n");
    input(arr2,3,3);
    printf("THE SECOND MATRIX IS:\n");
    printmat(arr2,3,3);
    matadd(arr1,3,3,arr2,3,3,arr3,3,3);
    printf("THE RESULTANT MATRIX AFTER MATRIX ADDITION IS:\n");
    printmat(arr3,3,3);
    matsub(arr1,3,3,arr2,3,3,arr3,3,3);
    printf("THE RESULTANT MATRIX AFTER MATRIX SUBTRACTION IS:\n");
    printmat(arr3,3,3);
    matmult(arr1,3,3,arr2,3,3,arr3,3,3);
    printf("THE RESULTANT MATRIX AFTER MATRIX MULTIPLICATION IS:\n");
    printmat(arr3,3,3);


    return 0;

}

void input(int arr[][3],int n,int m){
    for(int i=0;i<n;i++){
        for(int j = 0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
}

void printmat(int arr[][3],int n,int m){
     for(int i=0;i<n;i++){
        for(int j = 0;j<m;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");//to go into the next line after printing 3 elements
    }
}

void matadd(int arr1[][3],int r1,int c1,int arr2[][3],int r2,int c2,int arr3[][3],int r3,int c3){
    for(int i=0;i<r1;i++){//for rows
        for(int j=0;j<c1;j++){//for columns
            arr3[i][j]=arr1[i][j]+arr2[i][j];//complexity n^2 so 2 loops
        }
    }
}

void matsub(int arr1[][3],int r1,int c1,int arr2[][3],int r2,int c2,int arr3[][3],int r3,int c3){
    for(int i=0;i<r1;i++){//same logic as matadd
        for(int j=0;j<c1;j++){
            arr3[i][j]=arr1[i][j]-arr2[i][j];
        }
    }
}

void matmult(int arr1[][3],int r1,int c1,int arr2[][3],int r2,int c2,int arr3[][3],int r3,int c3){
    for(int i=0;i<r1;i++){//complexity n^3 so we will use 3 loops
        for(int j=0;j<c2;j++){
            arr3[i][j]=0;//reinitialising arr3 to store the next element
            for(int k=0;k<c1;k++){
                arr3[i][j]+=arr1[i][k]*arr2[k][j];//as number of columns of first matrix should be equal to number of rows of second matrix
            }//0+a1a2+b1d2+c1g1 = arr3[0][0]
        }
    }
}

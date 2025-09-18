/*Q5. Transpose of a Matrix [4 Marks]
Write a program to find the transpose of a given 3 × 3 matrix.*/

#include <stdio.h>
void input(int arr[][3],int n,int m);
void printmat(int arr[][3],int n,int m);
void transpose(int arr[][3],int m,int n,int arr2[][3],int n1,int m2);

int main(){
    int arr[3][3];
    int arr2[3][3];
    printf("ENTER THE VALUES IN THE MATRIX:\n");
    input(arr,3,3);
    printf("THE MATRIX IS:\n");
    printmat(arr,3,3);
    transpose(arr,3,3,arr2,3,3);
    printf("THE RESULTANT TRANSPOSE MATRIX IS:\n");
    printmat(arr2,3,3);
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

void transpose(int arr[][3],int n,int m,int arr2[][3],int n1,int m2){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            arr2[i][j]=arr[j][i];/*TRANSPOSE OF A MATRIX INVOLVES EXCHANGING ROWS WITH COLUMNS AND VICE VERSA*/
        }
    }
}

/*Q6. Maximum in Each Row & Column [8 Marks]
Write a program that takes a 4 × 4 matrix and finds the maximum element in each
row and each column. (Row max: 4 Marks, Column max: 4 Marks)*/

#include <stdio.h>
void input(int arr[][4],int n,int m);
void printmat(int arr[][4],int n,int m);
void row(int arr[][4],int n,int m);
void column(int arr[][4],int n,int m);

int main(){
    int arr[4][4];
    printf("ENTER THE VALUES IN THE MATRIX:\n");
    input(arr,4,4);
    printf("INPUT MATRIX IS:\n");
    printmat(arr,4,4);
    row(arr,4,4);
    column(arr,4,4);
    return 0;
}

void input(int arr[][4],int n,int m){
    for(int i=0;i<n;i++){
        for(int j = 0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
}

void printmat(int arr[][4],int n,int m){
     for(int i=0;i<n;i++){
        for(int j = 0;j<m;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");//to go into the next line after printing 3 elements
    }
}

void row(int arr[][4],int n,int m){
   /* int curmax1 = arr[0][0];
    int curmax2 = arr[1][0];
    int curmax3 = arr[2][0];*/

    

    for(int i=0;i<n;i++){
    int curmax = arr[i][0];//taking first element of each row as maximum.
    int curmin = arr[i][0];//taking first element of each row as minimum
        for(int j=0;j<m;j++){
            if(arr[i][j]>curmax){
                curmax=arr[i][j];

            }
            if(arr[i][j]<curmin){
                curmin = arr[i][j];
            }
        }
        printf("MAX ELEMENT IN ROW %d IS %d\n",i+1,curmax);//doing this outside second loop to utilize the variable i
        printf("MIN ELEMENT IN ROW %d IS %d\n",i+1,curmin);
    }
}
//DID THIS BEFORE GETTING TO THE ABOVE SOLUTION,I AM KEEPING IT HERE TI REMEMBER MY MISTAKE

    /*for(int i=0;i<n;i++){
        if(arr[0][i]>curmax1){
            curmax1=arr[0][i];
            printf("%d is the maximum in row 1\n",curmax1);
        }
        if(arr[1][i]>curmax2){
            curmax2=arr[1][i];
            printf("%d is the maximum in row 2\n",curmax2);
        }
        if(arr[2][i]>curmax3){
            curmax3=arr[2][i];
            printf("%d is the maximum in row 3\n",curmax3);
        }
    }*/

void column(int arr[][4],int n,int m){//j,i,m,n are swapped here wrt to the row function
    for(int i = 0;i<m;i++){//note here i used i<m not i<n as its opposite of rows
        int curmax = arr[0][i];//taking first element of every column as maximum
        int curmin = arr[0][i];//taking first element of every column as minimum
        for(int j=0;j<n;j++){
            if(arr[j][i]>curmax){
                curmax=arr[j][i];
            }
            if(arr[j][i]<curmin){
                curmin=arr[j][i];
            }
        }
        printf("MAX ELEMENT IN COLUMN %d IS %d\n",i+1,curmax);
        printf("MIN ELEMENT IN COLUMN %d IS %d\n",i+1,curmin);
    }
}

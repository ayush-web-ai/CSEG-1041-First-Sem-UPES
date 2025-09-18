/*Element Search with Operators [4 Marks]*/
/*Write a program to input n integers in an array. Ask the user for a number and check if
it exists in the array using the ternary operator. Print "Found" or "Not Found"*/

#include <stdio.h>
void input(int arr[],int n);
void check(int arr[],int n, int k);
int main(){
    int x,y;
    printf("ENTER THE NUMBER OF ELEMENTS YOU WANT IN THE ARRAY:\n");
    scanf("%d",&x);
    int array[2000];
    printf("ENTER THE VALUES IN THE ARRAY\n");
    input(array,x);
    printf("ENTER THE NUMBER YOU WANT TO CHECK FOR\n");
    scanf("%d",&y);
    check(array,x,y);
    return 0;
   

}
void input(int arr[],int n){
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
}

void check(int arr[],int n, int k){
    int isfound = 0;
    for(int i = 0;i<n;i++){

        isfound = (arr[i]==k)?1:isfound;//is condition is true value of isfound updates to 1 else stays the same.
        //I didnt use 0 here as it is in loop and it used to overwrite the value of isfound if the condition was false after becoming true.
        

        /*if(arr[i]==k){
            printf("FOUND");
        }
        else{
            printf("NOT FOUND")
        }*/
    }
    (isfound == 1)?printf("FOUND"):printf("NOT FOUND");
}


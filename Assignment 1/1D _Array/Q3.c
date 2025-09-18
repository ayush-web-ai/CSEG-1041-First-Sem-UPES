/*Frequency Counter using switch-case [5 Marks]
Write a program to input 10 integers (range 0–9). Store them in an array. Then, using a
switch-case, print the frequency of each digit.*/

#include <stdio.h>
void input(int arr[],int n);
int freq(int arr[],int n,int k);
int main(){
    int arr[10];
    printf("ENTER THE VALUES:\n");
    input(arr,10);
    for(int k=0;k<10;k++){//array may contain  4 0s, 3 1s etc to 7 9s, so we will use a loop and check frequency of every integer from 0 to 9
       int frequency = freq(arr,10,k);
       switch (frequency){
        case 1:
        printf("FREQUENCY OF %d is 1\n",k);
        break;
         case 2:
        printf("FREQUENCY OF %d is 2\n",k);
        break;
         case 3:
        printf("FREQUENCY OF %d is 3\n",k);
        break;
         case 4:
        printf("FREQUENCY OF %d is 4\n",k);
        break;
         case 5:
        printf("FREQUENCY OF %d is 5\n",k);
        break;
         case 6:
        printf("FREQUENCY OF %d is 6\n",k);
        break;
         case 7:
        printf("FREQUENCY OF %d is 7\n",k);
        break;
         case 8:
        printf("FREQUENCY OF %d is 8\n",k);
        break;
         case 9:
        printf("FREQUENCY OF %d is 9\n",k);
        break;
        default:
        printf("FREQUENCY OF %d is 0\n",k);
       }

    }
    return 0;
}
void input(int arr[],int n){
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
}
int freq(int arr[],int n,int k){
    int count=0;
    for(int i =0;i<n;i++){
        if(arr[i]==k){
            count++;
        }
    }
    return count;


}

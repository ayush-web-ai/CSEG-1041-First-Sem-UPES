/*Write a program to input n integers into an array and perform the following using loops:
(a) Find the largest and smallest number. [2 Marks]
(b) Calculate the average of all numbers. [2 Marks]
(c) Count how many numbers are even and how many are odd. [2 Marks]
*/

#include <stdio.h>

void input(int arr[],int n);

int largest(int arr[],int n);

int smallest(int arr[],int n);

float avg(int arr[],int n);

int counteven(int arr[],int n);

int countodd(int arr[],int n); 


int main(){
    int x;
    printf("ENTER THE NUMBER OF INTEGERS YOU WANT IN THE ARRAY:\n");
    scanf("%d",&x);
    int array[2000];
    /*Umm I dont know anything about dynamic memory allocation yet, so im 
    allocating memory for 2000 integers and will use x out of them*/
    printf("ENTER THE VALUES:\n");
    input(array,x);//calling input function to scan values into array
    printf("THE LARGEST NUMBER IN THE ARRAY IS: %d\n",largest(array,x));
    printf("THE SMALLEST NUMBER IN THE ARRAY IS: %d\n",smallest(array,x));
    printf("THE AVERAGE OF NUMBERS IN THE ARRAY IS : %.2f\n",avg(array,x));
    printf("THE NUMBER OF EVEN NUMBERS IN THE ARRAY IS : %d\n",counteven(array,x));
    printf("THE NUMBER OF ODD NUMBERS IN THE ARRAY IS : %d\n",countodd(array,x));
    return 0;

}

void input(int arr[],int n){
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);/*i think we can also use scanf("%d",arr) as array is also a pointer but im not sure so i went with the niche*/
    }
}

int largest(int arr[],int n){
    int max = arr[0];//setting first integer max
    for(int i =0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];//updating max everytime another integer is greater than current max
        }
    }
    return max;
}

int smallest(int arr[],int n){
    int min = arr[0];//setting first integer as the minimum number
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];//updating min everytime another ineger is smaller than current min
        }
    }
    return min;
}

float avg(int arr[],int n){
    int sum = 0;//initialising sum as 0
    for(int i=0;i<n;i++){
        sum = sum + arr[i];//putting value of sum and arr[0] then arr[1]..... arr[n-1] in sum similar to sum = sum +i
    }
    float average = (float)sum/n;//need to do type conversion as sum and n are integers their division will give an integer which will neglect all decimal points
    return average;
}

int counteven(int arr[],int n){
    int count = 0;//intialising count as 0
    for(int i = 0;i<n;i++){
        if(arr[i]%2==0){//incrementing count by 1 everytime i come across an integer which is divisible by 2
            count++;
        }
    }
    return count;
}

int countodd(int arr[],int n){
    int count = 0;//intialising count as 0
    for(int i = 0;i<n;i++){
        if(arr[i]%2!=0){//incrementing count by 1 everytime i come across an integer which is not divisible by 2
            count++;
        }
    }
    return count;
}

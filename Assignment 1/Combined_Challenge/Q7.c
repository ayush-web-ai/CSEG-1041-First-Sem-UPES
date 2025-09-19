/*Q7. Student Marks Analysis (Mini Project)
Assume a class of 5 students, each having marks in 3 subjects. Store the marks in a
2D array where each row represents a student and each column represents a subject.
Perform the following:
(a) Calculate the total and average marks of each student. [4 Marks]
(b) Find the highest scorer (student with maximum total marks). [3 Marks]
(c) Find the subject in which the class performed worst (lowest average marks). [4
Marks]
(d) Use sizeof() operator to display the total memory consumed by the array. [4
Marks]
*/

#include <stdio.h>
void printtable(int arr[][3],int n,int m);
void total(int arr[][3],int n,int m);
void minavg(int arr[][3],int n,int m);
void memory(int arr[][3],int n,int m);

int main(){
    printf("|=====STUDENT MARKS ANALYSIS TABLE====|\n");
    int arr[5][3]={
        {92,93,97},//student 1
        {92,78,89},//student 2
        {92,79,66},//student 3
        {87,58,62},//student 4
        {43,52,54}//student 5
        };
    printtable(arr,5,3);
    total(arr,5,3);
    printf("\n");
    minavg(arr,5,3);
    memory(arr,5,3);
    return 0;
}

void printtable(int arr[][3],int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d\t",arr[i][j]);
        }
    printf("\n");
    }
}

void total(int arr[][3],int n,int m){
    
    int curmax = 0;
    int curtopstudent=0;//counter for student number
  
    for(int i=0;i<n;i++){
        int sum = 0;//to reset sum after every student
        for(int j=0;j<m;j++){
            sum = sum + arr[i][j];
        }
        printf("TOTAL OF STUDENT %d is %d\n",i+1,sum);
        float average = (float)sum/m;
        printf("AVERAGE OF STUDENT %d is %.2f\n",i+1,average);
        
        if(sum>curmax){
            curmax=sum;
            curtopstudent=i+1;
        }

    }
    printf("MAXIMUM TOTAL MARKS SCORED ARE %d WHICH WERE SCORED BY STUDENT %d",curmax,curtopstudent);

}
void minavg(int arr[][3],int n,int m){
    //here i will sum every column individually
    float curlowestavg=500;//need something greater than 100
    int worstsubject = 0;//counter for subject number
    for(int i=0;i<m;i++){
        int colsum=0;
        
        for(int j=0;j<n;j++){
            colsum = colsum + arr[j][i];
        }
        float colavg = (float)colsum/n;
        if(colavg<curlowestavg){
            curlowestavg=colavg;
            worstsubject=i+1;
        }
      
    }
    printf("THE CLASS PERFORMED THE WORST IN SUBJECT %d WITH A CLASS AVERAGE OF %.2f IN THAT PARTICULAR SUBJECT.\n",worstsubject,curlowestavg);
    
}

void memory(int arr[][3],int n,int m){
    printf("Memory consumed is %d",sizeof(arr[0][0])*n*m);//finding size of one element and multiplying it by total number of elements n*m
}

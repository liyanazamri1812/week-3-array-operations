//documentation section 
//Array Week 3,Exercise 6

//pre-processor section 
#include<stdio.h>

//global variable section 


//main function section 
int main(){
    //write here your program
    
    int i,j;
    int num[3][2]={{0,2},{4,6},{8,10}};
    
    for(int i=0; i<3; i++){
        for (int j = 0; j < 2; j++){
            printf("Element at num[%d][%d]: %d \n", i, j, num[i][j]);
            }
               
    }


    return 0;
}


//user-defined section 

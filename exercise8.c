//documentation section 
//Array Week 3, Exercise 8

//pre-processor section 
#include<stdio.h>

//global variable section 
void displayElement(int num [3][2], int i, int j);

//main function section 
int main(){
    //write here your program
    
    int num[3][2]= {{0,2},{4,6},{8,10}};
    int i,j;
    
    for (i=0 ; i<3; i++)
    {
        for (j =0; j<2; j++)
        {
            displayElement(num,i,j); 
        }
    }   
    
    return 0;
}


//user-defined section 
void displayElement(int num[3][2], int i, int j)
{
    printf("Element at num{%d][%d]: %d\n" ,i,j,num[i][j]);
}  

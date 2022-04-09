//documentation section 
//Array Week 3, Exercise 9

//pre-processor section 
#include<stdio.h>

//global variable section 


//main function section 
int main(){
    //write here your program
    
    int i;
    int myArray[] = {1,2,3,4,5};
    int* ptr;
    
    for (i=0; i<6; i++)
    {
        ptr = &myArray[i];
        printf("Address of Element [%d] is : %d\n",i,ptr);
    }   


    return 0;
}


//user-defined section 

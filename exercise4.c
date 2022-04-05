//documentation section 
//Array Week 3 , exercise 4

//pre-processor section 
#include<stdio.h>

//global variable section 


//main function section 
int main(){
    //write here your program
    
    float num[]={10.0, 22.5, 15.5, 32.5, 10.9, 67.9, 12.5, 11.9, 25.5, 100.0};
    float sum=0;
    int i;
    
    for(int i=0; i<10; i++)
    {
        sum+=num[i];
    }
    
    printf("%f.2f",sum);


    return 0;
}


//user-defined section

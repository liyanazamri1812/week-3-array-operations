//documentation section 

//pre-processor section 
#include<stdio.h>

float summationArray(float num[10])
{
    float sum = 0.0;
    for ( int i=0; i<10; i++)
    {
        sum = sum + num[i];
    }
    return sum;
}

//global variable section 


//main function section 
int main(){
    //write here your program
    float total;
    float num[10]={10.0, 22.5,15.5, 32.5, 10.9, 67.9, 12.5, 11.9, 25.5, 100.0};

    total = summationArray(num);
    printf("Total : %1.f", total);
    

    


    return 0;
}


//user-defined section 

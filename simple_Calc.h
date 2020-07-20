#include <stdio.h>
#include <stdlib.h>

// Menu
void menu(void){
printf("\n          **********************************\n");
printf("\n          ******* SIMPLE CALCULATOR ********\n");
printf("\n          **********************************\n");
printf("\n          ========= Chose Function =========\n");
printf("\n          | 1- Addition (+)                |\n");
printf("\n          | 2- Substraction (-)            |\n ");
printf("\n          | 3- multiplication (x)          |\n ");
printf("\n          ==================================\n ");
}
//verifications

    //function choice verf
    int fChoice_Verf(int function_choice){

        if(function_choice<=3 && function_choice>=1){
                //break when choice is correct
            return function_choice ;

        }else{

            //re Enter choice of function if wrong
            do{
                printf("\n Input ERROR \n Re Enter \n");
                scanf("%d",&function_choice);

            }while( function_choice>3 || function_choice<1 );
        }

        //return only when choice is correct
        return function_choice ;
    }

///Functions
//Addition
float add(float n1,float n2){
    return n1+n2;
}
//Substraction
float sub(float n1,float n2){
    return n1-n2;
}
//multiplication
float mult(float n1,float n2){
    return n1*n2;
}

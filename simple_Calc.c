#include <stdio.h>
#include <stdlib.h>
#include "simple_Calc.h"
///simple calculator
int main(){
    //Declaration of variables
    char repeat;
    int function_choice;
    float n1,n2;

    do{
        menu();

            //Entering Function Choice
            scanf("%d",&function_choice);
            // function_choise verification
            function_choice =fChoice_Verf(function_choice);

            /*
            menu and choice verfication is all done
            */
            // Now : integrating functions with switch case + y/n to continue

                    switch(function_choice){

                            //addition
                        case 1:
                            printf("\nEnter the first Number :");
                            scanf("%f",&n1);
                            printf("\nEnter the second Number :");
                            scanf("%f",&n2);
                            printf("\n %.0f + %.0f = %.0f \n",n1,n2,add(n1,n2));
                            break;

                            //Substraction
                        case 2:
                            printf("\nEnter the first Number :");
                            scanf("%f",&n1);
                            printf("\nEnter the second Number :");
                            scanf("%f",&n2);
                            printf("\n %.0f - %.0f = %.0f \n",n1,n2,sub(n1,n2));
                            break;

                            //multiplication
                        case 3:
                            printf("\nEnter the first Number :");
                            scanf("%f",&n1);
                            printf("\nEnter the second Number :");
                            scanf("%f",&n2);
                            printf("\n %.0f x %.0f = %.0f \n",n1,n2,mult(n1,n2));
                            break;

                            //Division
                        case 4:
                            printf("\nEnter the first Number :");
                            scanf("%f",&n1);
            divisionN2Error: printf("\nEnter the second Number :");
                            scanf("%f",&n2);
                            //error check
                            if(n2==0){
                                    printf("\n\t ERROR:\n Second Number must not be equal to 0 \n ");
                                    goto divisionN2Error ;
                            }else{
                            printf("\n %.0f x %.0f = %.2f \n",n1,n2,fdiv(n1,n2));
                            }
                            break;

                        }


        //keeping the cycle going with Do while
                    printf("\n Do you want to repeat ? (y/n)\n");
                    scanf(" %c",&repeat);
    }while(repeat=='y');


    return 0;
}

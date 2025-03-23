#include <stdio.h>

int main() {

    int number1 = 10;
    int number2 = 2;
    
    int number1 = 10 , number2 = 3;

    int sum = number1 + number2;
    int modulo = number1 % number2;

    printf("Sum: %d, and Modulo: %d\n", sum, modulo);
    printf("Adress int: %d \n", &sum);
    printf("Adress hex: %x \n", &sum);

    //----------------------------------------------------------------

    int number1 , number2;

    printf("Please give me number1:");
    scanf("%d", &number1);
    printf("Please give me number2:");
    scanf("%d", &number2);
    
    int sum = number1 + number2;
    int mod = number1 % number2;
    
    printf("Sum: %d, and Modulo: %d\n", sum, mod);

    //--------------------------------------------------------
    int a = 5;
    printf("a: %d\n",a );
    int b = a++;
    printf("b: %d\n",b ); 
    int c = ++a;
    printf("c: %d\n",c );
    //---------------------------------------------------------

    
    for (int myVar = 0 ; myVar<=10 ; myVar++ ){
        printf("MyVar is : %d\n",myVar);
        printf("MyVar is : %d\n",myVar);
    }
    //----------------------------------------------
    int age;
    printf("Plese give me the your age: ");
    scanf("%d",&age);

    if (age >=18){
        printf("You are an adult.\n");
    }
    else if (age < 16 ){
        printf("You cannot get moto DL.\n");
    }
    else{
        printf("You are a minor.\n");
    }

    int myVar = 0 ;
    while(myVar < 10){
        if (myVar % 2 ==1){
            printf("MyVar is : %d\n",myVar);
        }else{
            break;
        }
        myVar++;
    }
    printf("MyVar is : %d\n",myVar);

    return 0;
}
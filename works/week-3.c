#include <stdio.h>

int factorialFor(int number);
int factorialWhile(int number);
int factorialRecursive(int number);
int fibonaccifor(int number);
int fibonacciwhile(int number);
int fibonacciRecursive(int number);


int main(){
    int factorial_5 = fibonaccifor(7);
    printf("Fibonacci %d\n", factorial_5);

    return 0;
}

int fibonaccifor(int number){
    int first = 1, second = 1, result = 0;
    if (number == 1 || number == 2){
        return 1;
    }
    for (int i = 3; i <= number; i++){
        result = first + second;
        first = second;
        second = result;
    }
    return result;
}

int fibonacciwhile(int number){
    int first = 1, second = 1, result = 0;
    if (number == 1 || number == 2){
        return 1;
    }

    while (number >= 3){
        result = first + second ;
        first = second;
        second = result;
        number--;
    }
    return result;
}
int fibonacciRecursive(int number){
    // Base Case
    if (number == 1 || number == 2){
        return 1;
    }
    return fibonacciRecursive(number-1) + fibonacciRecursive(number-2);
}


int factorialFor(int number){
    if (number < 0 ){
        return 0;
    }
    if (number == 0){
        return 1;
    }
    int result = 1;
    
    for (int i = 1; i <= number; i++){
        result = result * i;
    }

    return result;
}

int factorialWhile(int number){
    if (number < 0 ){
        return 0;
    }
    if (number == 0){
        return 1;
    }

    int result = 1 ;
    while (number > 0){
        result = result * number;
        number--;
    }
    return result;
}
int factorialRecursive(int number){
    if (number == 1 || number == 0){
        return 1;
    }
    return number * factorialRecursive(number - 1);
}




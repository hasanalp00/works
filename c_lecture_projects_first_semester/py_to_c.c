#include <stdio.h>

int main(){
   for (int i=0; i<101; i++) { 
        printf("%d\n", i);
    }

    for (int i=0; i<101; i += 2) {
        printf("%d\n", i);
    }
    
    for (int i = 0; i < 101;i++) {
        if (i % 2 == 0){
            printf("%d\n", i);
        }
    }
   //-----------------------------------------
    for (int i = 0;i<10;i++) {
        if(i == 5){
            break;
        }
        printf("%d\n", i);
    }

    for (int i = 0;i<10;i++) {
        if(i == 5){
            continue;
        }
        printf("%d\n", i);
    }
    for (int i = 0;i<101;i++) {
        if(i % 2 != 0){
            continue;
        }
        printf("%d\n", i);
    }
    for (int i = 0;i<101;i++) {
        if (i % 2 != 0){
            printf("%d\n", i);
        }
    }
    
    //---------------------------------------------
    
    int number = 0;
    while (number <= 100) {
        printf("%d\n", number);
        number++;
    }

    int number = 0;
    while (number <= 100) {
        printf("%d\n", number);
        number += 2;
        if (number  == 101){
            break;
        }
    }

    int number = 0 ;
    while (1){
        if (number % 2 == 0){
            printf("%d\n",number);
        }
        if (number == 100){
            break;
        }
        number++;
    }


//--------------------------------------------------  
   for(int i = 1; i < 4; i++){
        for(int j = 1 ; j < 4;j++){
            printf("%d,%d\n", i , j);
        }
    }
    for(int i =1 ; i < 6 ; i++){
        for (int j = 1 ; j < 6; j++){
            int mult = i * j;
            printf("%d x %d = %d\n",i,j,mult);
        }
    }
//-----------------------------------------------------
    int number1 = 1;
    while(number1 < 6){
        int number2 = 1;
        while(number2 < 6){
            printf("%d x %d = %d\n",number1,number2,number1 * number2 );
            number2 += 1; 
        }
        number1 += 1;
        printf("\n");
    }

//-----------------------------------------------------
    int how_much,real_estate;
    char car;

    int threshold_money = 100000;
    int threshold_house = 5 ;
    
    printf("How much money do you have in your bank account? ");
    scanf("%d", &how_much);
    printf("How many house fo you have in Kötekli? ");
    scanf("%d", &real_estate);
    printf("Do you have a car? ");
    scanf(" %c", &car);

    if(how_much > threshold_money && real_estate > threshold_house){
        if (car == 'y' || car == 'Y'){
            printf("You don't have to work all day long.");
        }
        else{
            printf("You should buy a car bro.");
        }
    }
    else if (how_much > 50000 && (car == 'y' || car == 'Y' )){
        printf("You have to work one day in a week !");
    }
    else{
        printf("You are so poor you have to work to live.");
    }


//-----------------------------------------------------------------------

    int hp;
    printf("Car HP:");
    scanf("%d",&hp);

    if (hp < 60) {
        printf("Not give a price");
    }
    else if (hp > 60 && hp <= 75){
        printf("Price: 200.000 ");
    } 
    else if (hp > 75 && hp <= 90 ){
        printf("Price : 350.000  ");
    }
    else if (hp >90 && hp <= 110){
        printf("Price : 500.000");
    }
    else if (hp > 110 && hp <= 150){
        printf("Price : 700.000");
    }
    else if  (hp > 150 && hp <= 200) {
        printf("Price : 1.200.000");
    }
    else {
        printf("Price : 2.000.000");
    }


    return 0;
}
#include <stdio.h>


void append(int array[], int size,int element);
void prettyPrint(int array[],int size);
void perfectSquare(int start,int end);
int main() {
    int myArray[10];
    
    myArray[5] = 5;
    for(int i = 0 ; i < 10 ; i++){
        printf("%d\n",myArray[i]);
    }

    int multiArray[3][4];
    for(int i = 0; i < 3; i++){
        printf("%d\n",multiArray[i][0]);
    }

    int matrix[3][3] = {
                    {1,2,3},
                    {4,5,6},
                    {7,8,9}};

    for(int i = 0; i < 3;i++){
        for(int j = 0; j < 3; j++){
            if(j == 2){
                printf("%d",matrix[i][j]);
                break;
            }
            printf("%d, ",matrix[i][j]);
        }
         printf("\n");
    }
    int example[10]= {};
    for(int i = 1;i < 5;i++){
        append(example,10,i);
        prettyPrint(example,10);
    }

    perfectSquare(2,100);
    return 0;
}

void append(int array[], int size,int element){
    for(int i = 0;i < size ; i++){
        if(array[i]== 0){
            array[i]= element;
            break;
        }
    }
}
void prettyPrint(int array[],int size){
        for(int i = 0; i<size;i++){
            printf("%d",array[i]);
    }
    printf("\n");
}
void perfectSquare(int start,int end){
    for(int i = start ; i*i < end;i++){
        if(i*i >= start){
            printf("%d\n",i*i);
        }
    }

}   
   


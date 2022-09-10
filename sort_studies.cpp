#include <iostream>


void sort(int array[], int size);

int main(){
    int array[] = {5,6,2,3,9,8,10,1,4,7};
    int size = sizeof(array)/sizeof(array[0]);

    sort(array,size);

    for(int element : array){
        std::cout << element << " ";
    };

}

void sort(int array[], int size){
    int temp;
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(array[j] > array[j + 1]){
                temp = array[j];
                array[j] = array[j + 1];
                array[j+1] = temp;

            }
        }

    }

}
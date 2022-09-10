#include <iostream>
using namespace std;

double getTotal(double prices[], int size){
    double total = 0;
    for(int i = 0; i < size ; i++){
        total += prices[i];
    }
    return total;
}

string findElement(string element,string array[],int size){
    for(int i = 0; i<size;i++){
        if(array[i] == element){
            return element;
        }
        else return "Element not present";
    };
}

int main()
{
    string names[] = {"Fellips","Lucas","Joseph","Richard"};
    int nameSize = sizeof(names)/sizeof(names[0]);
    string element = findElement("Jonas",names,nameSize);
    cout << element << "\n";

    double prices[] = {5.5,23.32,100,20};
    int pricesSize = sizeof(prices)/sizeof(prices[0]);
    double total = getTotal(prices,pricesSize);
    cout << "Total of prices: " << total;
    return 0;
}

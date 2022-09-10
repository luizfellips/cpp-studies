#include <iostream>
void swap(std::string &x, std::string &y);

int main(){
    std::string name;
    std::string address;
    std::string names[2];

    for(int i = 0; i<sizeof(names)/sizeof(names[0]);i++){
        std::cout << "Insert your name: " << '\n';
        std::getline(std::cin >> std::ws,name);
        names[i] = name;
    }
    std::cout << "\n";
    for(std::string element : names){
        std::cout << element << '\n';
    }
    std::cout << "\n";
    swap(names[0],names[1]);


    for(std::string element : names){
        std::cout << element << '\n';
    }
    
    



    
}

void swap(std::string &x, std::string &y){
    std::string temp;
    temp = x;
    x = y;
    y = temp;
};
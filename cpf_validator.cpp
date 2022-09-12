#include <iostream>

int getFirstDigit(const std::string cpfNumber);
int getSecondDigit(const std::string cpfNumber);

int main(){
    std::string cpfNumber;
    int firstDigit;
    int secondDigit;

    std::cout << "Digite os 9 primeiros numeros do CPF sem tracos ou pontos para deduzir os digitos verificadores: " << '\n';
    std::cin >> cpfNumber;
    std::cout << "\n";
    firstDigit = getFirstDigit(cpfNumber);

    cpfNumber += std::to_string(firstDigit);

    secondDigit = getSecondDigit(cpfNumber);
    
    cpfNumber += std::to_string(secondDigit);
    
    std::cout << "CPF com digitos verificadores: " << '\n';
    for(char i = 0; i < 11; i++){
        std::cout << cpfNumber[i];
        if(i == 2 || i == 5){
            std::cout << ".";
        }
        if(i == 8){
            std::cout << "-";
        }
    }


    return 0;
}


int getFirstDigit(std::string cpfNumber){
    int sum = 0;
    int firstDigit;
    for(int i = 0; i < 9; i++){
        sum += ((cpfNumber[i]-48) * (10-i));
    }
    if(sum % 11 < 2){
        firstDigit = 0;
    }
    else if(sum % 11 >= 2){
        firstDigit = 11 - (sum % 11);
    }
    return firstDigit;


}


int getSecondDigit(const std::string cpfNumber){
    int sum = 0;
    int secondDigit;
    for(int i = 0; i < 10; i++){
        sum += ((cpfNumber[i]-48) * (11-i));
    }
    if(sum % 11 < 2){
        secondDigit = 0;
    }
    else if(sum % 11 >= 2){
        secondDigit = 11 - (sum % 11);
    }
    return secondDigit;

}
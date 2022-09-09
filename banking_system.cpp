#include <iostream>
#include <vector>



class BankAccount{
    double balance;
    std::string name;
    public:
    BankAccount(double x, std::string y){
        balance = x;
        name = y;
        std::cout << "ACCOUNT CREATED SUCCESSFULLY!" << "\n";
    }
    void displayInfo(){
        for(int i = 0; i <= 3; i++){
            std::cout << "." << "\n";
        };
        std::cout << "===========" << "\n";
        std::cout << "Name of account owner: " << name << "\n";
        std::cout << "Current balance: " << "R$" << balance << "\n";
        std::cout << "===========" << "\n";
    }
    void depositMoney(double amount){
        balance += amount;
        std::cout << "Current Balance: " << "R$" << balance << "\n";
    }
    void withdrawMoney(double amount){
        balance -= amount;
        std::cout << "Current Balance: " << "R$" << balance << "\n";
    }
};

std::vector<BankAccount> BankSystem;

void registerAccount(){
    bool secondFlag = true;
    std::string name;
    double balance;
    std::cout << "Register your name: " << "\n" && std::getline(std::cin >> std::ws,name);
    std::cout << "Register your current balance: " << "\n" && std::cin >> balance && std::cout << std::endl;
    BankAccount currentAccount(balance,name);
    while(secondFlag){
        int choice;
        std::cout << "=========BANKING SYSTEM=========" << "\n";
        std::cout << "YOUR OPTIONS" << "\n" << "[1] DISPLAY INFORMATIONS" << "\n" << "[2] DEPOSIT MONEY" << "\n" << "[3] WITHDRAW MONEY" << "\n"  << "[4]EXIT BANKING SYSTEM" << "\n" && std::cin >> choice;
        std::cout << "\n";
        if(choice == 1){
            currentAccount.displayInfo();
        }
        else if(choice == 2){
            double amount;
            std::cout << "How much do you wanna deposit? " && std::cin >> amount;
            std::cout << "\n";
            currentAccount.depositMoney(amount);
        }
        else if(choice == 3){
            double amount;
            std::cout << "How much do you wanna withdraw? " && std::cin >> amount;
            std::cout << "\n";
            currentAccount.withdrawMoney(amount);
        }
        else if(choice == 4){
            BankSystem.push_back(currentAccount);
            secondFlag = false;
        }
    }
};

void displayAccounts(){
    if(BankSystem.size() != 0){
        for(int i = 0; i < BankSystem.size();i++){
        BankSystem[i].displayInfo();
        }
    }
    else{
        std::cout << "There are no accounts registered." << "\n";
    }


}

int main(){
    int option;
    bool flag = true;
    while(flag){
        std::cout << "=========WELCOME TO BANK FELLIPS=========" << "\n";
        std::cout << "Select your option" << "\n";
        std::cout << "[1] Open a new account" << "\n";
        std::cout << "[2] View existing accounts" << "\n";
        std::cout << "[3] Exit system" << "\n";
        std::cin >> option;
        switch(option){
            case 1:
                registerAccount();
                continue;
            case 2:
                displayAccounts();
                continue;
            case 3:
                flag = false;
                break;
        };
    };
    return 0;
}


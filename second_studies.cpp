#include <iostream>
#include <vector>
#include <ctime>


class Person{
  unsigned int yearsWithoutContribution;
  unsigned int age,yearsOfContribution;
  std::string name;
  std::string address;
  std::string occupation;
  unsigned int randomizedSalary;
  public:
  Person(int x, int y, std::string a, std::string b, std::string c){
    age = x;
    yearsOfContribution = y;
    name = a;
    address = b;
    occupation = c;
    yearsWithoutContribution = age - yearsOfContribution;
    if(yearsWithoutContribution < 20){
      srand(time(NULL));
      randomizedSalary = rand() % (3000 + 1 - 1500) + 1500;
    }
    else{
      srand(time(NULL));
      randomizedSalary = rand() % (2000 + 1 - 800) + 800;
    }
  };
  void displayInformations(){
  std::cout << "\n" << "Your informations: " << "\n";
  std::cout << "Name: " << name << "\n";
  std::cout << "Age: " << age << "\n" << "Years of contribution: " << yearsOfContribution << "\n";
  std::cout << "Address: " << address << "\n" << "Current occupation: " << occupation << "\n";
  std::cout << "Years unworking: " << yearsWithoutContribution << "\n";
  std::cout << "FINAL SALARY: " << "R$" << randomizedSalary << ",00" << "\n";
  };

};

bool checkContribution(int contribution, int age){
  if(contribution < (age-10)){
    return true;
  }
  else return false;
};

int main(){
  std::vector<Person> arr;
  int age;
  int years;
  std::string name;
  std::string address;
  std::string occupation;
  char YN;
  bool flag = true;
  bool contributionFlag;
  while(flag){
    std::cout << "Enter your age: > " && std::cin >> age;
  do{
    std::cout << "Enter your years of contribution: " && std::cin >> years && std::cout << "\n";
    bool contribution = checkContribution(years,age);
    if(contribution){
      std::cout << "Valid contribution year." << "\n";
      break;
    }
    else{
      std::cout << "It is more than the necessary." << "\n";
      continue;
    }
  }

  while(contributionFlag); 


  std::cout << "What about your name? " && getline(std::cin >> std::ws,name);
  std::cout << "Your address? " && getline(std::cin >> std::ws,address);
  std::cout << "Your occupation? " && getline(std::cin >> std::ws,occupation);
  Person newPerson(age,years,name,address,occupation);
  newPerson.displayInformations();
  arr.push_back(newPerson);

  std::cout << "\n" << "Do you wanna register new informations? " << std::endl && std::cin >> YN;
  YN == 'y' ? flag : flag = false && std::cout << "Lets try again then!! ";
  };
  for(int i = 0;i<arr.size();++i){
    arr[i].displayInformations();
  }
  
  return 0;
}
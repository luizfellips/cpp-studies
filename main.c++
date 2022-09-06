#include <iostream>
using namespace std;

bool checkContribution(int contribution, int age){
  if(contribution < (age-10)){
    return true;
  }
  else return false;
}

int main(){
  int age,yearsOfContribution;
  string name;
  string address;
  string occupation;
  char YN;
  bool flag = true;
  bool contributionFlag;
  while(flag){
    cout << "Enter your age: > " && cin >> age;

  do{
    cout << "Enter your years of contribution: " && cin >> yearsOfContribution && cout << "\n";
    bool contribution = checkContribution(yearsOfContribution,age);
    if(contribution){
      cout << "Valid contribution year." << "\n";
      break;
    }
    else{
      cout << "It is more than the necessary." << "\n";
      continue;
    }
  }

  while(contributionFlag); 


  cout << "What about your name? " && getline(cin >> ws,name);
  cout << "Your address? " && getline(cin >> ws,address);
  cout << "Your occupation? " && getline(cin >> ws,occupation);

  cout << "\n" << "Your informations: " << "\n" << "\n";
  cout << "Name: " << name << "\n";
  cout << "Age: " << age << "\n" << "Years of contribution: " << yearsOfContribution << "\n";
  cout << "Address: " << address << "\n" << "Current occupation: " << occupation << "\n";
  cout << "\n" << "Do you wanna rewrite your informations? " && cin >> YN;
  YN == 'y' ? flag : flag = false && cout << "Lets try again then!! ";
  };
  
  return 0;
}
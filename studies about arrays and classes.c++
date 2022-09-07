#include <iostream>
#include <vector>

using namespace std;


class Person{
  public:
  int age,yearsOfContribution;
  string name,address,occupation;
  int displayInformations(){
    cout << "\n" << "Your informations: " << "\n" << "\n";
  cout << "Name: " << name << "\n";
  cout << "Age: " << age << "\n" << "Years of contribution: " << yearsOfContribution << "\n";
  cout << "Address: " << address << "\n" << "Current occupation: " << occupation << "\n";

  }
};

bool checkContribution(int contribution, int age){
  if(contribution < (age-10)){
    return true;
  }
  else return false;
};

int main(){
  vector<Person> arr;
  char YN;
  bool flag = true;
  bool contributionFlag;
  while(flag){
    Person newPerson;
    cout << "Enter your age: > " && cin >> newPerson.age;

  do{
    cout << "Enter your years of contribution: " && cin >> newPerson.yearsOfContribution && cout << "\n";
    bool contribution = checkContribution(newPerson.yearsOfContribution,newPerson.age);
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


  cout << "What about your name? " && getline(cin >> ws,newPerson.name);
  cout << "Your address? " && getline(cin >> ws,newPerson.address);
  cout << "Your occupation? " && getline(cin >> ws,newPerson.occupation);

  newPerson.displayInformations();
  arr.push_back(newPerson);

  cout << "\n" << "Do you wanna rewrite your informations? " && cin >> YN;
  YN == 'y' ? flag : flag = false && cout << "Lets try again then!! ";
  };
  int listSize = sizeof(arr)/sizeof(arr);
  for(int i = 0;i<listSize;++i){
    cout << arr[i].displayInformations() << "\n";
  }
  
  return 0;
}
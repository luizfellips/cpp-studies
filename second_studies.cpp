#include <iostream>
#include <vector>

using namespace std;


class Person{
  public:

  int age,yearsOfContribution;
  string name,address,occupation;
  Person(int x, int y, string a, string b, string c){
    age = x;
    yearsOfContribution = y;
    name = a;
    address = b;
    occupation = c;
  };
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
  int age;
  int years;
  string name;
  string address;
  string occupation;
  char YN;
  bool flag = true;
  bool contributionFlag;
  while(flag){
    cout << "Enter your age: > " && cin >> age;
  do{
    cout << "Enter your years of contribution: " && cin >> years&& cout << "\n";
    bool contribution = checkContribution(years,age);
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
  Person newPerson(age,years,name,address,occupation);

  newPerson.displayInformations();
  arr.push_back(newPerson);

  cout << "\n" << "Do you wanna register new informations? " && cin >> YN;
  YN == 'y' ? flag : flag = false && cout << "Lets try again then!! ";
  };
  int listSize = sizeof(arr)/sizeof(arr);
  for(int i = 0;i<=listSize;++i){
    cout << arr[i].displayInformations() << "\n";
  }
  
  return 0;
}
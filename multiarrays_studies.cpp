#include <iostream>

int main(){
    std::string questions[3] = {"1.What year was it 2 years ago? ", 
                                "2. What year will it be in 12 years? ",
                                "3. When did Queen die? "};

    std::string options[][4] = {{"A.2020","B.2010","C.2019","D.2021"},
                                {"A.2025","B.2034","C.2030","D.2050"},
                                {"A.20/02","B.12/05","C.08/09","D.10/12"}};

    int rows = sizeof(options)/sizeof(options[0]);
    int columns = sizeof(options[0])/sizeof(options[0][0]);

    char answers[3] = {'A','B','C'};
    char answer;
    int total = 0;

    std::cout << "QUIZ GAME" << "\n";
    for(int i = 0; i < rows; i++){
        std::cout << questions[i] << "\n";
    for(std::string option : options[i]){
        std::cout << option << "\n";
    };
    std::cin >> answer;
    answer = toupper(answer);
    if(answer == answers[i]){
        std::cout << "CORRECT ANSWER." << "\n";
        total += 1;
    }
    else{
        std::cout << "INCORRECT. CORRECT ANSWER = " << answers[i] << "\n";
    }
 
    }
    std::cout << "Total of correct answers: " << total;

    return 0;
}
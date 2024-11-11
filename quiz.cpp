#include <iostream>
using string_t = std::string;
int main(){
    string_t questions[] = {"1.What year was c++ created?: ",
                            "2.Who invented c++ ?:",
                            "3.What is the predecessor of c++ ?:",
                            "4.Is the earth flat?: "};
    
    string_t answers[4][4] = { 
        {"A.1969","B.1975","C.1985","D.1989"},
        {"A. Guido van Rossum", "B. Bjarne Stroustrup", "C. John Carmack", "D. Mark Zuckerburg"},
        {"A. C","B. C+","C. C--","D. B++"},
        {"A. yes","B. no","C. maybe","D. what is earth"}
    };

    char answerKey[] = {'C','B','A','B'};
    char input;
    int score;

    int size = sizeof(questions)/sizeof(questions[0]);

    for(int i = 0 ; i < size ; i++){
        std::cout << "*********************\n";
        std::cout << questions[i] << std::endl;
        std::cout << "*********************\n";
        for(int j = 0; j < sizeof(answers[i])/sizeof(answers[i][0]);j++){
            std::cout << answers[i][j] << std::endl;
        };
        std::cout << "answer ?: ";
        std::cin >> input ;
        input = toupper(input);
        if(input == answerKey[i]){
            std::cout << "Correct !\n";
            score++;
        }
        else{
            std::cout << "Wrong !\n";
            std::cout << "Answer is : " << answerKey[i] << "\n" ;
        }
    
    }
    std::cout << "****** Result ******\n";
    std::cout << score << "/" <<size << "\n";
    std::cout << "********************\n";


    return 0 ;
}
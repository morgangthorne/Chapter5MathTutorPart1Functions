/*
Filename: Chapter5MathTutorPart1Functions.cpp
Programmer: Morgan Thorne
Date: March 2025
Requirements:
Write program that can be used as a math tutor
1: Program should display two random numbers to be added
2: Program should pause while students works on problem
3: When student is ready they can press a key and the program will show correct answer
Use at least 3 modules
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <random>
using namespace std;

void DisplayMessage(string text);
bool GetRepeatInfo();
int RandomNumberGenerator(int x, int y);
void DisplayEquation(); 



//Function for random number generator. Gives X and Y variable random value
int RandomNumberGenerator(int x, int y) {
    random_device R;
    uniform_int_distribution<int> randomInt(x, y);

    return randomInt(R);
    
}

//Function displays Welcome message
void DisplayMessage(string text) {
    cout << text << endl;

}

//Allows user to choose whether they want another equation to solve or to end program
bool GetRepeatInfo() {
    char choice;
    cout << "Would you like to repeat Y/N: ";
    cin >> choice;
    return (choice == 'Y' || choice == 'y');
}

//Displays equation for user, user has to press enter to get answer
void DisplayEquation(int Rx, int Ry, int result) {
    cout << setw(9) << right << Rx << endl;
    cout << "+" << setw(8) << right << Ry << endl;
    cout << "_________";
    cin.ignore();
    cin.get();
    cout << setw(9) << right << result << endl;
}

//Prompt user to input their answer, and return boolean flag indicationg whether wrong or correct
bool PromptUserAnswerValidate(int Rx, int Ry, int result, int answer) {
    cout << setw(9) << right << Rx << endl;
    cout << "+" << setw(8) << right << Ry << endl;
    cout << "_________";
    cin.ignore();
    cin.get();
    cin >> answer;
    cout << setw(9) << right << result << endl;
}

//Main function, displays welcome message, while statement allows equation to be displayed and then repeated or ended
int main()
{
    DisplayMessage("\t Welcome to Math Tutor V1.0\nEnter in your answer to check whether its right or wrong ");
    char repeat = 'Y';
    int Xvariable;
    int Yvariable;
    int answer;
    //bool answercorrect;
    while (repeat) {
        Xvariable = RandomNumberGenerator(0, 100);
        Yvariable = RandomNumberGenerator(0, 100);

        DisplayEquation(Xvariable, Yvariable, Xvariable + Yvariable);
        //isanswercorrect = bool PromptUserAnswerValidate(Xvariable, Yvariable, Xvariable + Yvariable){
        //if (isanswercorrect) {
        // cout << "congrats";
        //else 
        // cout << "you got it wrong";
        // }
        // cout << "Try again?";
        
        repeat = GetRepeatInfo();
    }
}



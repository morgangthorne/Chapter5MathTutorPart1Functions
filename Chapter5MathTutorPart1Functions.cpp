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
//void ValidateEntry();
//void DisplayEquation(); 
//void DisplayLine(string text);



int RandomNumberGenerator(int x, int y) {
    random_device R;
    uniform_int_distribution<int> randomInt(x, y);

    return randomInt(R);
    
}

void DisplayMessage(string text) {
    cout << text << endl;

}

bool GetRepeatInfo() {
    char choice;
    cout << "Would you like to repeat Y/N: ";
    cin >> choice;
    return (choice == 'Y' || choice == 'y');
}

void DisplayEquation(int Rx, int Ry, int result) {
    cout << setw(9) << right << Rx << endl;
    cout << "+" << setw(8) << right << Ry << endl;
    cout << "_________" << endl;
    cin.get();
    cout << setw(9) << right << result << endl;
}


int main()
{
    DisplayMessage("\t Welcome to Math Tutor V1.0");
    char repeat = 'Y';
    int Xvariable;
    int Yvariable;
    while (repeat) {
        Xvariable = RandomNumberGenerator(0, 100);
        Yvariable = RandomNumberGenerator(0, 100);

        DisplayEquation(Xvariable, Yvariable, Xvariable + Yvariable);

        repeat = GetRepeatInfo();
    }
}

/*
int main()
{
   //Variables for the equation
    int x = 247;
    int y = 129;
    int sum = (x + y);

    //Output for the question
    cout << "Solve the equation below:" << endl;
    cout << setw(10) << x << endl << setw(7) << "+" << y << endl << "Press Enter to check your answer: ";

    //Allows user to enter anykey they want to check their answer
    cin.ignore();

    //Equation with answer
    cout << setw(10) << x << endl << setw(7) << "+" << y << endl << setw(10) << "---" << endl << setw(10) << sum << endl;

}
*/

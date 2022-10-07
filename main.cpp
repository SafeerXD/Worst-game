
// C++ program for the above approach
#include <iostream>
#include <string>
using namespace std;
 
int Guess;
int Total;
 
// Question Class
class Question {
private:
    string Question_Text;
    string Answer_1;
    string Answer_2;
    string Answer_3;
    string Answer_4;
    int Correct_Answer;
    int Question_Score;
 
public:
    // Setter Function
    void setValues(string, string,
                   string, string,
                   string, int, int);
 
    // Function to ask questions
    void askQuestion();
};
 




// Driver code
int main()
{
    cout << "\n\n\t\t\t\tNEVER GONNA GIVE"
         << endl;
    cout << "\nITS OVER 9000 CLICK ENTER ";
 
 
    // Input
    cin.get();
 
    string Name;
    int Age;
 
    // Input the details
    cout << "What is your name?"
         << endl;
    cin >> Name;
    cout << endl;

 
    cout << "How old are you?lol"
         << endl;
    cin >> Age;
    cout << endl;
    if(Age == 69){
            cout << "NICE lol\n";
    }
 
    string Respond;
    cout << "Are you ready to take"
         << " the quiz " << Name
         << "? yes/no" << endl;
    cin >> Respond;
 
    if (Respond == "yes") {
        cout << endl;
        cout << "Let's go........" << endl;
    }
    else {
        cout << "POG HAHAHAHAHA" << endl;
        return 0;
    }
 
    // Objects of Question Class
    Question q1;
    Question q2;
    Question q3;
    Question q4;
    Question q5;
    Question q6;
    Question q7;
    Question q8;
    Question q9;
    Question q10;
 
    // 3 is the position of
    // correct answer
    q1.setValues("DO YOU LIKE ANIME ", "WHATS ANIME",
                 "NO", "F NO","YESSSSSSS",4, 10);
    q2.setValues("who would win ", "UR MOM",
                 "BIG CHUNGUES", "CHAD",
                 "UR DAD THAT LEFT FOR THE MILK", 3, 10);
    q3.setValues("THE ANSWER IS 3 : ", "NO WAY FREE ANSWER",
                 "I THINK ITS THIS ONE", "THANKS",
                 "HAHAHAHA", 3, 10);
    q4.setValues("WHO IS BETTER ", "GROGG",
                 "LIZZE", "ALEX",
                 "WINNIE", 1, 10);
    q5.setValues("WAFFLE OR PANCAKES", "WAFFLES DUHHH",
                 "PANCAKES LOL", "NEITHER",
                 "BOTH",   1, 10);
    q6.setValues("SO YOU SEE ", "DUH MAN",
                 "DHAR MANN ", "CRINGE KING",
                 "WHAT????", 3, 10);
    q7.setValues("WHO IS BETTER ", "ARI",
                 "JAYDEN", "ODDS1OUT",
                 "LOL ANIMATORS SUK", 1, 10);
    q8.setValues("WHICH MEME IS BETTER ", "DOGE",
                 "NEON CAT", "POG FROG",
                 "SKELETON ROAST DHAR MANN", 3, 10);
    q9.setValues("WHY ARE THE ANSWERS NEVER 2 ", "CAUSE 2 SUCKS LAMO",
                 "2 IS TOO COOL", "LAMO XD L RATIO 2",
                 "HAHAHA 2", 2, 10);
    q10.setValues("BEST ADD EVER ", "HOENY",
                  "RISE OF CIVILATION", "SOAP ADDS",
                  "GRAMMERLY", 4, 10);
 
    q1.askQuestion();
    q2.askQuestion();
    q3.askQuestion();
    q4.askQuestion();
    q5.askQuestion();
    q6.askQuestion();
    q7.askQuestion();
    q8.askQuestion();
    q9.askQuestion();
    q10.askQuestion();
 
    // Display the total score
    cout << "Total Score = " << Total
         << "out of 100" << endl;
 
    // Display the results
 
    // If the player pass the quiz
    if (Total >= 70) {
        cout << "A FLUKE LAMO"
             << "  NOW DIE" << endl;
    }
    if(Total == 0){
            cout<<"LOL YOURE THE MOST STUPID UNLUCKY BRAT ON EARTH AND YOU WILL BE CURSED TO HELL";
    }
    
            
    
 
    // Otherwise
    else {
        cout << "SO STUPID."
             << endl;
        cout << "lamo what a idiot."
             << endl;
    }
    return 0;
}
 
// Function to set the values of
// the questions
void Question::setValues(
    string q, string a1,
    string a2, string a3,
    string a4, int ca, int pa)
{
    Question_Text = q;
    Answer_1 = a1;
    Answer_2 = a2;
    Answer_3 = a3;
    Answer_4 = a4;
    Correct_Answer = ca;
    Question_Score = pa;
}
 
// Function to ask questions
void Question::askQuestion()
{
    cout << endl;
 
    // Print the questions
    cout << Question_Text << endl;
    cout << "1. " << Answer_1 << endl;
    cout << "2. " << Answer_2 << endl;
    cout << "3. " << Answer_3 << endl;
    cout << "4. " << Answer_4 << endl;
    cout << endl;
 
    // Display the answer
    cout << "What is your answer?(in number)"
         << endl;
    cin >> Guess;
 
    // If the answer is correct
    if (Guess == Correct_Answer) {
        cout << endl;
        cout << "Correct !" << endl;
 
        // Update the correct score
        Total = Total + Question_Score;
        cout << "Score = " << Question_Score
             << " out of "
             << Question_Score
             << "!" << endl;
        cout << endl;
    }
 
    // Otherwise
    else {
        cout << endl;
        cout << "Wrong !" << endl;
        cout << "Score = 0"
             << " out of "
             << Question_Score
             << "!" << endl;
        cout << "Correct answer = "
             << Correct_Answer
             << "." << endl;
        cout << endl;
    }
}

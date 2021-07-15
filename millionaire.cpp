/*

Author:Haytham
Date:15/Jul/2021
Program: who wants to be a millionaire
Experience : Begginner
language :c++


This program is an exercise in what  I have learned in C++.


All questions are taken from the program questions..
You will find it in this link

https://millionaire.fandom.com/wiki/Anderson_Cooper
*/

#include <iostream> // To Including The input/output libraries
#include <stdlib.h> 
using namespace std;


void start();
void help();
void exit();
void extiGame();
void home();
void correct();
void incorrect();
void score();
void qNum();
void clear();
void question1();
void question2();
void question3();
void question4();
void question5();
void question6();
void question7();
void question8();
void question9();
void question10();
void question11();
void question12();
void question13();
void question14();
void question15();

char a = 'A', b = 'B', c = 'C', d = 'D', answer; // a,b,c,d For Options

void qNum(int i)
{
    // This Array For The Question Number
    int qNum, numOfquestion[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};

    cout<<"("<<numOfquestion[i-1]<<")";

}

void clear()
{
    // Start Questions
    system("clear"); // I Used system("clear") to Clear The Console
}
// Function for Game Score
void score(int i)
{
    int score[15]={100,200,300,500,1000,2000,4000,8000,16000,32000,64000,125000,250000,500000,1000000};
    cout << "\t\t\t\t\t\t\t\t\t\t SCORE : " << score[i - 1] << "$\n\n";
}
void exitGame(){
    //Null
    system("clear");
    cout<<"Exit Game";
};

// Function of question1
void question1()
{
    //Clear Console
    clear();

    // Question Number
    qNum(1);
    cout << "According to a popular myth, wolves howl when they see what?\n";
    cout << a << ".The Moon\n"                             // Option a
         << b << ".Snow\n"                                 // Option b
         << c << ".A waterfall\n"                          // Option c
         << d << ".Young Sheldon\n\n";                     // Option d
    cout << "Type The charactor of The Correct Answer : "; // Take Answer from The  User
    cin >> answer;

    switch (answer)
    {

    // These Are Incorrect Answers
    case 'b':
    case 'B':
    case 'c':
    case 'C':
    case 'd':
    case 'D':
        incorrect();
        home();
        break;

    // This is Correct Answer
    case 'a':
    case 'A':
        correct();

        //The Score
        score(1);
        break;

    default:
        clear();
        cout << "This Option Not Found";
        home();
        break;
    }
}

//Function Of Question2
void question2(){
    qNum(2);
    cout << "In home technology slang, a \" 65 - inch flat screen \" is a type of what?\n";
    cout << a << ".Electric toothbrush\n"
        << b << ".Television\n"
        << c << ".Microwave oven\n"
        << d << ".Blender\n\n\n";
    cout << "Type The charactor of The Correct Answer : "; // Take Answer from The  User
    cin >> answer;

    switch (answer)
    {

    // These Are Incorrect Answers
    case 'a':
    case 'A':
    case 'c':
    case 'C':
    case 'd':
    case 'D':
        incorrect();
        home();
        break;

    // This is Correct Answer
    case 'b':
    case 'B':
        correct();

        //The Score
        score(2);
        break;

    default:
        clear();
        cout << "This Option Not Found";
        home();
        break;
    }
}

// Function of question3
void question3()
{
    // Question Number
    qNum(3);
    cout << "\" Here's come the airplane!\" is a phrase that parents often use when trying to get a baby to do what?\n";
    cout << a << ".Walk\n"                                 // Option a
         << b << ".Sleep\n"                                // Option b
         << c << ".Eat\n"                                  // Option c
         << d << ".Speak\n\n";                             // Option d
    cout << "Type The charactor of The Correct Answer : "; // Take Answer from The  User
    cin >> answer;

    switch (answer)
    {

    // These Are Incorrect Answers
    case 'a':
    case 'A':
    case 'b':
    case 'B':
    case 'd':
    case 'D':
        incorrect();
        home();
        break;

    // This is Correct Answer
    case 'c':
    case 'C':
        correct();

        //The Score
        score(3);
        break;

    default:
        clear();
        cout << "This Option Not Found";
        home();
        break;
    }
}

// Function of question4
void question4()
{
    // Question Number
    qNum(4);
    cout << "A movie that receives favorable reviews will likely be \" Certified Fresh \" on what website?\n";
    cout << a << ".Pinterest\n"                            // Option a
         << b << ".Rotten Tomatoes\n"                      // Option b
         << c << ".Spotify\n"                              // Option c
         << d << ".Reddit\n\n";                            // Option d
    cout << "Type The charactor of The Correct Answer : "; // Take Answer from The  User
    cin >> answer;

    switch (answer)
    {

    // These Are Incorrect Answers
    case 'a':
    case 'A':
    case 'c':
    case 'C':
    case 'd':
    case 'D':
        incorrect();
        home();
        break;

    // This is Correct Answer
    case 'b':
    case 'B':
        correct();

        //The Score
        score(4);
        break;

    default:
        clear();
        cout << "This Option Not Found";
        home();
        break;
    }
}

// Function of question5
void question5()
{
    // Question Number
    qNum(5);
    cout << "It is estimated that one in ten Europeans is conceived in a bed made by what company?\n";
    cout << a << ".Volkswagen\n"                           // Option a
         << b << ".BMW\n"                                  // Option b
         << c << ".Nestlé\n"                               // Option c
         << d << ".IKEA\n\n";                              // Option d
    cout << "Type The charactor of The Correct Answer : "; // Take Answer from The  User
    cin >> answer;

    switch (answer)
    {

    // These Are Incorrect Answers
    case 'a':
    case 'A':
    case 'b':
    case 'B':
    case 'c':
    case 'C':
        incorrect();
        home();
        break;

    // This is Correct Answer
    case 'd':
    case 'D':
        correct();

        //The Score
        score(5);
        break;

    default:
        clear();
        cout << "This Option Not Found";
        home();
        break;
    }
}

// Function of question6
void question6()
{
    // Question Number
    qNum(6);
    cout << "Which of these chart-topping songs from the 1960s features the lyrics \" A - weema - weh, a - weema - weh, a - weema - weh, a - weema - weh \"?\n";
    cout << a << ".Under the Boardwalk\n"                  // Option a
         << b << ".The Lion Sleeps Tonight\n"              // Option b
         << c << ".My Girl\n"                              // Option c
         << d << ".Puff the Magic Dragon\n\n";             // Option d
    cout << "Type The charactor of The Correct Answer : "; // Take Answer from The  User
    cin >> answer;

    switch (answer)
    {

    // These Are Incorrect Answers
    case 'a':
    case 'A':
    case 'c':
    case 'C':
    case 'd':
    case 'D':
        incorrect();
        home();
        break;

    // This is Correct Answer
    case 'b':
    case 'B':
        correct();

        //The Score
        score(6);
        break;

    default:
        clear();
        cout << "This Option Not Found";
        home();
        break;
    }
}

// Function of question7
void question7()
{
    // Question Number
    qNum(7);
    cout << "What is the only U.S. state that borders the Atlantic Ocean and spans two time zones?\n";
    cout << a << ".Florida\n"                              // Option a
         << b << ".Virginia\n"                             // Option b
         << c << ".Maine\n"                                // Option c
         << d << ".New York\n\n";                          // Option d
    cout << "Type The charactor of The Correct Answer : "; // Take Answer from The  User
    cin >> answer;

    switch (answer)
    {

    // These Are Incorrect Answers
    case 'b':
    case 'B':
    case 'c':
    case 'C':
    case 'd':
    case 'D':
        incorrect();
        home();
        break;

    // This is Correct Answer
    case 'a':
    case 'A':
        correct();

        //The Score
        score(7);
        break;

    default:
        clear();
        cout << "This Option Not Found";
        home();
        break;
    }
}
// Function of question8
void question8()
{
    // Question Number
    qNum(8);
    cout << "In the sport of cricket, the player who delivers the ball to the batsman is called a what? \n";
    cout << a << ".Coaster\n"                              // Option a
         << b << ".Skipper\n"                              // Option b
         << c << ".Bowler\n"                               // Option c
         << d << ".Tumbler\n\n";                           // Option d
    cout << "Type The charactor of The Correct Answer : "; // Take Answer from The  User
    cin >> answer;

    switch (answer)
    {

    // These Are Incorrect Answers
    case 'a':
    case 'A':
    case 'b':
    case 'B':
    case 'd':
    case 'D':
        incorrect();
        home();
        break;

    // This is Correct Answer
    case 'c':
    case 'C':
        correct();

        //The Score
        score(8);
        break;

    default:
        clear();
        cout << "This Option Not Found";
        home();
        break;
    }
}

// Function of question9
void question9()
{
    // Question Number
    qNum(9);
    cout << "On the 2020 season of \" The Bachelor, \" 28 year old Peter Weber searched for the love of his life while taking a break from his job as a what? \n";
    cout << a << ".Pharmaceutical sales rep\n"             // Option a
         << b << ".Sports journalist\n"                    // Option b
         << c << ".Commercial pilot\n"                     // Option c
         << d << ".Restaurant manager\n\n";                // Option d
    cout << "Type The charactor of The Correct Answer : "; // Take Answer from The  User
    cin >> answer;

    switch (answer)
    {

    // These Are Incorrect Answers
    case 'a':
    case 'A':
    case 'b':
    case 'B':
    case 'd':
    case 'D':
        incorrect();
        home();
        break;

    // This is Correct Answer
    case 'c':
    case 'C':
        correct();

        //The Score
        score(9);
        break;

    default:
        clear();
        cout << "This Option Not Found";
        home();
        break;
    }
}

// Function of question10
void question10()
{
    // Question Number
    qNum(10);
    cout << "At Art Basel in 2019, a performance artist famously ate what food item that had been duct-taped to a gallery wall as an exhibit?\n";
    cout << a << ".Big Mac\n"                              // Option a
         << b << ".Turkey leg\n"                           // Option b
         << c << ".Banana\n"                               // Option c
         << d << ".Double Stuf Oreo\n\n";                  // Option d
    cout << "Type The charactor of The Correct Answer : "; // Take Answer from The  User
    cin >> answer;

    switch (answer)
    {

    // These Are Incorrect Answers
    case 'a':
    case 'A':
    case 'b':
    case 'B':
    case 'd':
    case 'D':
        incorrect();
        home();
        break;

    // This is Correct Answer
    case 'c':
    case 'C':
        correct();

        //The Score
        score(10);
        break;

    default:
        clear();
        cout << "This Option Not Found";
        home();
        break;
    }
}

// Function of question11
void question11()
{
    // Question Number
    qNum(11);
    cout << "\" It is a truth universally acknowledged that a zombie in possession of brains must be in want of more brains \" is the opening of what \" zombified \" novel?\n";
    cout << a << ".The Grapes of Wrath\n"                  // Option a
         << b << ".The Sun Also Rises\n"                   // Option b
         << c << ".Pride and Prejudice\n"                  // Option c
         << d << ".A Tale of Two Cities\n\n";              // Option d
    cout << "Type The charactor of The Correct Answer : "; // Take Answer from The  User
    cin >> answer;

    switch (answer)
    {

    // These Are Incorrect Answers
    case 'a':
    case 'A':
    case 'b':
    case 'B':
    case 'd':
    case 'D':
        incorrect();
        home();
        break;

    // This is Correct Answer
    case 'c':
    case 'C':
        correct();

        //The Score
        score(11);
        break;

    default:
        clear();
        cout << "This Option Not Found";
        home();
        break;
    }
}

// Function of question12
void question12()
{
    // Question Number
    qNum(12);
    cout << "In 1997, Nelson Mandela surprisingly said, \" It's one of the greatest moments of my life\" after meeting who?\n";
    cout << a << ".Rage Against the Machine\n"             // Option a
         << b << ".The cast of \" Party of Five \"\n"      // Option b
         << c << ".The Spice Girls\n"                      // Option c
         << d << ".IBM's supercomputer Deep Blue\n\n";    // Option d
    cout << "Type The charactor of The Correct Answer : "; // Take Answer from The  User
    cin >> answer;

    switch (answer)
    {

    // These Are Incorrect Answers
    case 'a':
    case 'A':
    case 'b':
    case 'B':
    case 'd':
    case 'D':
        incorrect();
        home();
        break;

    // This is Correct Answer
    case 'c':
    case 'C':
        correct();

        //The Score
        score(12);
        break;

    default:
        clear();
        cout << "This Option Not Found";
        home();
        break;
    }
}

// Function of question13
void question13()
{
    // Question Number
    qNum(13);
    cout << "In the movie \" Taxi Driver, \" Robert De Niro answers his famous question \" You talkin' to me?\" with what lesser-known reply?\n";
    cout << a << ".What are you, deaf?\n"                  // Option a
         << b << ".You heard me, tough guy\n"              // Option b
         << c << ".Well, I'm the only one here\n"          // Option c
         << d << ".I'd watch that tone\n\n";               // Option d
    cout << "Type The charactor of The Correct Answer : "; // Take Answer from The  User
    cin >> answer;

    switch (answer)
    {

    // These Are Incorrect Answers
    case 'a':
    case 'A':
    case 'b':
    case 'B':
    case 'd':
    case 'D':
        incorrect();
        home();
        break;

    // This is Correct Answer
    case 'c':
    case 'C':
        correct();

        //The Score
        score(13);
        break;

    default:
        clear();
        cout << "This Option Not Found";
        home();
        break;
    }
}

// Function of question14
void question14()
{
    // Question Number
    qNum(14);
    cout << "What country is called \" Druk Yul \" in its native language, meaning \" Land of the Thunder Dragon \"?\n";
    cout << a << ".Bangladesh\n"                           // Option a
         << b << ".Bhutan\n"                               // Option b
         << c << ".Myanmar\n"                              // Option c
         << d << ".Nepal\n\n";                             // Option d
    cout << "Type The charactor of The Correct Answer : "; // Take Answer from The  User
    cin >> answer;

    switch (answer)
    {

    // These Are Incorrect Answers
    case 'a':
    case 'A':
    case 'c':
    case 'C':
    case 'd':
    case 'D':
        incorrect();
        home();
        break;

    // This is Correct Answer
    case 'b':
    case 'B':
        correct();

        //The Score
        score(14);
        break;

    default:
        clear();
        cout << "This Option Not Found";
        home();
        break;
    }
}

// Function of question15
void question15()
{
    // Question Number
    qNum(15);
    cout << "When scientists tested it with an electroencephalogram, which of these food items produced readings similar to a human brain?\n";
    cout << a << ".Wint-O-Green Life Saver\n"              // Option a
         << b << ".SPAM\n"                                 // Option b
         << c << ".Lime Jell-O\n"                          // Option c
         << d << ".Jet-Puffed Marshmallow\n\n";            // Option d
    cout << "Type The charactor of The Correct Answer : "; // Take Answer from The  User
    cin >> answer;

    switch (answer)
    {

    // These Are Incorrect Answers
    case 'a':
    case 'A':
    case 'b':
    case 'B':
    case 'd':
    case 'D':
        incorrect();
        home();
        break;

    // This is Correct Answer
    case 'c':
    case 'C':
        correct();

        //The Score
        score(15);
        break;

    default:
        clear();
        cout << "This Option Not Found";
        home();
        break;
    }
}

// Function no.1 for Game Questions
void start()
{
    question1();
    question2();
    question3();
    question4();
    question5();
    question6();
    question7();
    question8();
    question9();
    question10();
    question11();
    question12();
    question13();
    question14();
    question15();
}


// Function no.2 for Help
void help()
{
    //Clear The Console
    system("clear");
    //Title
    cout << "\t\t\t\tWho Wants To Be A Millionaire\n\n\n";
    //Game Information
    cout << "About The Game:\n";
    cout << "   Often  informally  called  \"Millionaire\"  ..  is  an  American  television  game  show  ,  created  by  ( David  Briggs , Mike  Whitehill  and  Steven  Knight )  .. and  The  Last  Version  (2020)  Developed  By  Joe  DeMaio ";

    //How To Play a Game
    cout << "Play Game:\n"
    << "    - Press  The  Charactor  of  The  Number.\n "
    << "    - If  Your  Answer  Is  Correct  You  Will  Go  To  The  Next  Question.\n"
    << "    - In  Each  Time  ..  If  Your  Answer  Is  Correct  ,  You  Will  Earn  Some   Points.\n"
    << "    -  The  Game  Ends  When  You  Entered  a  Wrong  Answer.\n"
    << "\nEnjoy The Game..\n\n\n";

    //Back To The Home Screen
    char b;
    cout << "Press \"b\" To Go Back : ";
    cin >> b;
    if (b == 'b' || b == 'B')
    {
        system("clear");
        //Call The Function Home
        home();
    }else
    {
        help();
    }
    
}
// Function no.3 for Exit Game
void exit(){
    char exit;
    cout<<"Do You Want To Exit? Press y/n ";
    cin>> exit;
    if (exit=='y' || exit=='Y')
    {
    //Null
    }
    else if(exit=='n' || exit=='N')
    {
    system("clear");
    //Call The Function Home
    home();

    }
    else
    {
        cout<<"This Option Not Found\n\n\n";
    }
}


//Function no.4 for Home Screen
void home()
{
    cout << "\n\nWho Want's To Be a Millioinaire" << endl;           //Name of The Program
    char num1 = '1', num2 = '2', num3 = '3', options; //1,2,3,4 for Beginning Options

    //Beginning Options
    cout << "\n\n\t\t\t" << num1 << ".start\t\t\t" << num2 << ".help\t\t\t" << num3 << ".exit\n\n\n";

    cout << "Select The Number of Option : ";
    cin >> options;


    // Check That The User Has Entered One Of The Available Option
    if (options == num1)
    {
        start();
    }
    else if (options == num2)
    {
        help();
    }
    else if (options == num3)
    {
        exit();
    }
    else
    {

        // If User Entered Invalid Option
        system("clear");
        cout << "Invalid Option" << endl;
        home();
    }

}


// Function no.5 for Correct Answer
void correct()
{
    system("clear");
    cout << "Correct Answer";
}
// Function no.6 for Incorrect Answer
void incorrect()
{
    system("clear");
    cout << "Incorrect Answer";
}
//The Main Function
int main()
{
    //Call a Function home
    home();
}

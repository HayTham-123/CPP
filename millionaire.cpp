 #include <iostream> // To Including The input/output libraries
 #include <stdlib.h> 
 using namespace std;


void start();
void help();
void exit();
void home();
void correct();
void incorrect();
void score();
void qNum();
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

char a = 'A', b = 'B', c = 'C', d = 'D', answer; //a,b,c,d For Options

void qNum(int i)
{
    //Start Questions
    system("clear");                                 // I Used system("clear") to Clear The Console

    // This Array For The Question Number
    int qNum, numOfquestion[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};

    cout<<"("<<numOfquestion[i-1]<<")";

}

//Function for Game Score
void score(int i){
    int score[15]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
    cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t SCORE : " << score[i - 1] << "$\n\n\n";
}


//Function of question1
void question1()
{
    //Start Questions
    system("clear");                                 // I Used system("clear") to Clear The Console

        //Question Number
        qNum(1) ;
        cout<<" How Many Month in The Year ?\n";

        cout << a << ". Ten Month\n";                          // Option a
        cout << b << ". Fifteen Month\n";                      // Option b
        cout << c << ". Twelve Month\n";                       // Option c
        cout << d << ". Sixth Month\n\n";                      // Option d
        cout << "Type The charactor of The Correct Answer : "; // Take Answer from The  User
        cin >> answer;

        switch (answer)
        {
        //These Are Incorrect Answers
        case 'a':
        case 'A':
        case 'b':
        case 'B':
        case 'd':
        case 'D':
            incorrect();
            break;
        // This is Correct Answer
        case 'c':
        case 'C':
            correct();

            //The Score
            score(1);
            
            break;
        default:
            system("clear");
            cout << "This Option Not Found";
            break;
        }
}

//Function Of Question2
void question2(){
    qNum(2);
    cout<<"What is Your Name ?\n";
    cout << a << ".Haytham\n"
         << b << ".Amrow\n"
         << c << ".Mohammed\n"
         << d << ".Talha\n\n\n";
    cout << "Type The charactor of The Correct Answer : "; // Take Answer from The  User
    cin >> answer;
}

// Function no.1 for Game Questions
void start()
{
    question1();
    question2();
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
    cout << "   Often informally called \"Millionaire\" .. is an American television game show , created by (David Briggs,Mike Whitehill and Steven Knight) ..and The Last Version (2020)  Developed By Joe DeMaio ";

    //How To Play a Game
    cout << "Play Game:\n";
    cout << "    - Press  The  Charactor  of  The  Number.\n ";
    cout << "   - If  Your  Answer  Is  Correct  You  Will  Go  To  The  Next  Question.\n";
    cout << "    - In  Each  Time  ..  If  Your  Answer  Is  Correct  ,  You  Will  Earn  Some   Points.\n";
    cout << "    -  The  Game  Ends  When  You  Entered  a  Wrong  Answer.\n";
    cout << "\nEnjoy The Game..\n\n\n";

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


 // Function no.4 for Home Screen
 void home()
 {
     cout << "Who Want's To Be a Millioinaire" << endl;           //Name of The Program
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
         cout << "Error" << endl;
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
 // The Main Function
 int main()
 {
     //Call a Function home
     home();
}

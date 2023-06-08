#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;

void nestloop4()
{
    int h;
    cout << "Enter the Height: ";
    cin >> h;

    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << setw(3) << "* ";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = h; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << setw(3) << "* ";
        }
        cout << endl;
    }
}

void nestloop3()
{
    int h, w;
    cout << "Enter the Height: ";
    cin >> h;
    cout << "Enter the Width: ";
    cin >> w;
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}

void nestloop2()
{

    for (int i = 1; i <= 10; i++)
    {
        for (int x = 1; x <= 10; x++)
        {
            cout << i << "*" << x << "=" << i * x;
            cout << endl;
        }
        cout << endl;

    }
}

void nestloop()
{
    int grade, sum = 0;

    for (int i = 0; i < 3; i++)
    {
        do
        {
            cout << "Enter Grade " << i + 1 << ": ";
            cin >> grade;

        } while (grade < 1 || grade > 5);

        sum += grade;
    }

    cout << "total: " << sum << endl;
    /*cout << "AVG Grade: " << sum / 3 << endl;*/ // output tk tepat, like 11/3 = 3 cause sum n 3 is int
    cout << "AVG Grade: " << (float)sum / 3 << endl;
}

void forloop()
{
    //the factorial number
    int n;
    cout << "number: ";
    cin >> n;
    int x = 1;
    for (int i = 1; i <= n; i++)
    {
        x *= i;
    }
    cout << n << "! = " << x;
}

void dowhileloop()
{
    int pin = 1234, pass, error = 0;

    do
    {
        cout << "PIN : ";
        cin >> pass;
        if (pass != pin)
        {
            error++;
        }

    } while (error != 4 && pass != pin);

    if (error != 4)
        cout << "loading...";
    else
        cout << "Blocked";
}

void whileloop()
{
    int n = 1;
    while (n <= 100)
    {
        cout << n << " ";
        n++;
    }
}

void Ternary()
{
    int hostusernum, guestusernum;
    cout << "Host :";
    cin >> hostusernum;
    system("cls");
    cout << "Guest :";
    cin >> guestusernum;

    /*if (hostusernum == guestusernum)
    {
        cout << "Correct!";
    }
    else
    {
        cout << "WRONG!";
    }*/

    //instead using if else, guna ternary
    (hostusernum == guestusernum) ? cout << "Correct!" : cout << "WRONG!";
}

void switch_case()
{
    float num1, num2;
    char operation;
    cout << "Calculator\n";
    cin >> num1 >> operation >> num2;

    switch (operation)
    {
    case '-':
        cout << num1 << operation << num2 << "=" << num1 - num2;
        break;
    case'+':
        cout << num1 << operation << num2 << "=" << num1 + num2;
        break;
    case '/':
        cout << num1 << operation << num2 << "=" << num1 / num2;
        break;
    case'*':
        cout << num1 << operation << num2 << "=" << num1 * num2;
        break;
        //case'%':
        //    cout << num1 << operation << num2 << "=" << num1 % num2, 
        //    break;
        // because operation % must int not float
    case'%':
        bool isNum1Int, isNum2Int;
        isNum1Int = ((int)num1 == num1);
        isNum2Int = ((int)num2 == num2);

        if (isNum1Int && isNum2Int)
        {
            cout << num1 << operation << num2 << "=" << (int)num1 % (int)num2;
        }
        else
        {
            cout << "Not Valid";

        }
        break;
    default:
        cout << "Wrong Button" << endl;
    }

}

void operation()
{
    //+, -, *, /, %
    cout << 5 / 2 << endl;//output is 2
    cout << 5.0 / 2.0 << endl;//output is 2.5

    //++, -- 
    int counter;
    counter = 7;
    counter++; //counter--
    cout << counter << endl;

    int counter2 = 7;
    cout << ++counter2 << endl; //--counter2

    //<, >, <=, >=, ==, !=, &&, ||, !
    int a = 5, b = 8;
    cout << (a <= b); //0 false 1 true
    cout << (a == 5 && b == 5); //and
    cout << (a == 5 || b == 5); //or

    //-, =+, -=, *=, /=, %=
    int x = 5;
    x += 7; //same with x = x + 7

}

void ACSII_Project()
{
    cout << (int)'A' << endl;//ACSII Table output 65
    cout << int('a') << endl;// nmber od a in ACSII tble output 97
    cout << char(65) << endl; //output A
    cout << (float)5.5 << endl;//output 5.5 but if (int)5.5 the output is 5

    char c1, c2, c3, c4, c5;
    cout << "enter 5 letter ";
    cin >> c1 >> c2 >> c3 >> c4 >> c5;
    cout << "ACSII message: " << int(c1) << " " << int(c2) << " " << int(c3) << " " << int(c4) << " " << int(c5);
}

void if_else()
{
    int num;
    cout << "\nEnter the number :";
    cin >> num;
    if (num % 2 == 0)
    {
        cout << num << " is even number";
    }
    else
    {
        cout << num << " is odd number";
    }

    //compare string
    string myString = "kucing";
    if (myString.compare("cat") == 0)
        cout << "\n\ncomparison was true" << endl;
    else
        cout << "\n\ncomparison was not true" << endl;
}

void virable()
{
    // can make them unsigned by add "unsigned" prefix
    short age0 = 10;          //atleast 16-bits signed interger
    int age1 = 20;            //atleast 16-bits signed interger (not smaller than short)
    long age2 = 30;           //atleast 32-bits signed interger
    long long age3 = 40;      //atleast 62-bits signed interger

    float gpa0 = 2.5f;        //single percision floating point
    double gpa1 = 3.5;        //double-precision flaoting point
    long double gpa2 = 3.5;   //extended-precision floating point
}

void constants()
{
    const int BIRTH_YEAR = 2002;
    //BIRTH_YEAR = 2002; //can't do this
    cout << BIRTH_YEAR;
}

void casting()
{
    //convert data types into different data types
    cout << (int)3.14 << endl;
    cout << (double)3 / 2 << endl;
}

void stringnote()
{
    string greeting = "Hello";
             //index:  01234 

    cout << greeting.length() << endl;                  //output: 5
    cout << greeting[0] << endl;                        //output: H
    cout << greeting.find("llo") << endl;               //output: 2
    cout << greeting.substr(2) << endl;                 //output: llo  //start at index 2 untill end 
    cout << greeting.substr(1, 3) << endl;              //output: ell  //start at index 1 untill 3
}

void arraynote()
{
    int luckyNumbers[6] = { 4,8,15,16,23,42 }; //[6] six slots
               //index :    0 1  2  3  4  5 
    luckyNumbers[0] = 90;
    cout << luckyNumbers[0] << endl; //outputs: 90 // modify
    cout << luckyNumbers[1] << endl; //outputs: 8

    int numberGrid[2][3] = { {1,2,3}, {4,5,6} };  //[2] have two columbs [3] value inside
    //numberGrid[0][1] = 99;

    cout << numberGrid[0][2] << endl;  //[0] the first columb [2] index value
    cout << numberGrid[0][1] << endl;
}

void vectorarray()
{
    vector<string> friends;
    friends.push_back("Oscar");
    friends.push_back("Angela");
    friends.push_back("Kevin");
    friends.insert(friends.begin() + 0, "Jim");
    //friends.erase(friends.begin() + 1);
    cout << friends.at(0) << endl;
    cout << friends.at(1) << endl;
    cout << friends.at(2) << endl;
    cout << friends.at(3) << endl;
    cout << friends.size() << endl;
}

int main()
{
    cout << "Hello World!\n";
    //ACSII_Project();
    //if_else();
    //operation();
    //switch_case();
    //Ternary();
    //whileloop();
    //dowhileloop();
    //forloop();
    //nestloop();
    //nestloop2();
    //nestloop3();
    //nestloop4();
    //virable();
    //constants();
    //casting();
    //stringnote();
    //arraynote();
    //vectorarray();

    //system("cls")
    system("pause>0");
}
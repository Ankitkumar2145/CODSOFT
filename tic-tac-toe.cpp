#include <iostream>
#include <windows.h>
using namespace std;
int main()
// Enter X and O.
{
    system("CLS");
    system("Color 74");
    char p1[100], p2[100];
    cout << "                                                                              TIC-TAC-TOE" << endl
         << endl;
    cout << "Enter the name of Player 1 : ";
    cin.getline(p1, 100);
    cout << endl;
    cout << "Enter the name of Player 2 : ";
    cin.getline(p2, 100);
    cout << endl;
home:
    cout << p1 << ", Choose X or O : ";
    char c1;
    int flag = 1;
    char c2;
    while (flag)
    {
        cin >> c1;
        if (c1 == 'X' || c1 == 'O' || c1 == 'o' || c1 == 'x')
        {
            flag = 0;
        }
        else
        {
            cout << "You pressed wrong character. Enter X or O : ";
        }
    }

    if (c1 == 'X' || c1 == 'x')
    {
        c2 = 'O';
        c1 = 'X';
        cout << p1 << " has : X" << endl;
        cout << p2 << " has : O" << endl;
    }
    if (c1 == 'O' || c1 == 'o')
    {
        c2 = 'X';
        c1 = 'O';
        cout << p1 << " has : O" << endl;
        cout << p2 << " has : X" << endl;
    }
    // Format of Game
    char arr[3][3];
    arr[0][0] = '-';
    arr[0][1] = '-';
    arr[0][2] = '-';
    arr[1][0] = '-';
    arr[1][1] = '-';
    arr[1][2] = '-';
    arr[2][0] = '-';
    arr[2][1] = '-';
    arr[2][2] = '-';

    cout << "Enter the number for placing your X and O as per given format." << endl;
    cout << "_______" << endl;
    cout << "|1|2|3|" << endl;
    cout << "|_|_|_|" << endl;
    cout << "|4|5|6|" << endl;
    cout << "|_|_|_|" << endl;
    cout << "|7|8|9|" << endl;
    cout << "|_|_|_|" << endl;

    // Game begin
    flag = 1;
    int input1, input2;
    char a1, a2, a3, a4, a5, a6, a7, a8, a9;
    int move = 1;
    while (move < 3 && (arr[0][0] == '-' || arr[1][0] == '-' || arr[2][0] == '-' || arr[0][1] == '-' || arr[1][1] == '-' || arr[2][2] == '-' || arr[0][2] == '-' || arr[1][2] == '-' || arr[2][2] == '-'))
    {
        cout << p1 << ", Enter The number : ";
        int check = 1;
        while (check == 1)
        {
            cin >> input1;
            if (input1 == 1)
            {
                if (arr[0][0] == '-')
                {
                    arr[0][0] = c1;
                    check = 0;
                }
                else
                {
                    cout << "This place is not empty.Please give another position : ";
                }
            }
            if (input1 == 2)
            {
                if (arr[0][1] == '-')
                {
                    arr[0][1] = c1;
                    check = 0;
                }
                else
                {
                    cout << "This place is not empty.Please give another position : ";
                }
            }
            if (input1 == 3)
            {
                if (arr[0][2] == '-')
                {
                    arr[0][2] = c1;
                    check = 0;
                }
                else
                {
                    cout << "This place is not empty.Please give another position : ";
                }
            }
            if (input1 == 4)
            {
                if (arr[1][0] == '-')
                {
                    arr[1][0] = c1;
                    check = 0;
                }
                else
                {
                    cout << "This place is not empty.Please give another position : ";
                }
            }
            if (input1 == 5)
            {
                if (arr[1][1] == '-')
                {
                    arr[1][1] = c1;
                    check = 0;
                }
                else
                {
                    cout << "This place is not empty.Please give another position : ";
                }
            }
            if (input1 == 6)
            {
                if (arr[1][2] == '-')
                {
                    arr[1][2] = c1;
                    check = 0;
                }
                else
                {
                    cout << "This place is not empty.Please give another position : ";
                }
            }
            if (input1 == 7)
            {
                if (arr[2][0] == '-')
                {
                    arr[2][0] = c1;
                    check = 0;
                }
                else
                {
                    cout << "This place is not empty.Please give another position : ";
                }
            }
            if (input1 == 8)
            {
                if (arr[2][1] == '-')
                {
                    arr[2][1] = c1;
                    check = 0;
                }
                else
                {
                    cout << "This place is not empty.Please give another position : ";
                }
            }
            if (input1 == 9)
            {
                if (arr[2][2] == '-')
                {
                    arr[2][2] = c1;
                    check = 0;
                }
                else
                {
                    cout << "This place is not empty.Please give another position : ";
                }
            }
            if (input1 < 1 || input1 > 9)
            {
                cout << "Wrong Number. Please enter correct position : ";
            }
        }
        cout << arr[0][0] << " " << arr[0][1] << " " << arr[0][2] << endl;
        cout << arr[1][0] << " " << arr[1][1] << " " << arr[1][2] << endl;
        cout << arr[2][0] << " " << arr[2][1] << " " << arr[2][2] << endl;

        cout << p2 << ", Enter The number : ";

        check = 1;
        while (check == 1)
        {
            cin >> input2;
            if (input2 == 1)
            {
                if (arr[0][0] == '-')
                {
                    arr[0][0] = c2;
                    check = 0;
                }
                else
                {
                    cout << "This place is not empty.Please give another position : ";
                    check == 0;
                }
            }
            if (input2 == 2)
            {
                if (arr[0][1] == '-')
                {
                    arr[0][1] = c2;
                    check = 0;
                }
                else
                {
                    cout << "This place is not empty.Please give another position : ";
                    check == 0;
                }
            }
            if (input2 == 3)
            {
                if (arr[0][2] == '-')
                {
                    arr[0][2] = c2;
                    check = 0;
                }
                else
                {
                    cout << "This place is not empty.Please give another position : ";
                    check == 0;
                }
            }
            if (input2 == 4)
            {
                if (arr[1][0] == '-')
                {
                    arr[1][0] = c2;
                    check = 0;
                }
                else
                {
                    cout << "This place is not empty.Please give another position : ";
                    check == 0;
                }
            }
            if (input2 == 5)
            {
                if (arr[1][1] == '-')
                {
                    arr[1][1] = c2;
                    check = 0;
                }
                else
                {
                    cout << "This place is not empty.Please give another position : ";
                    check == 0;
                }
            }
            if (input2 == 6)
            {
                if (arr[1][2] == '-')
                {
                    arr[1][2] = c2;
                    check = 0;
                }
                else
                {
                    cout << "This place is not empty.Please give another position : " << endl;
                    check == 0;
                }
            }
            if (input2 == 7)
            {
                if (arr[2][0] == '-')
                {
                    arr[2][0] = c2;
                    check = 0;
                }
                else
                {
                    cout << "This place is not empty.Please give another positio : ";
                    check == 0;
                }
            }
            if (input2 == 8)
            {
                if (arr[2][1] == '-')
                {
                    arr[2][1] = c2;
                    check = 0;
                }
                else
                {
                    cout << "This place is not empty.Please give another position : ";
                    check == 0;
                }
            }
            if (input2 == 9)
            {
                if (arr[2][2] == '-')
                {
                    arr[2][2] = c2;
                    check = 0;
                }
                else
                {
                    cout << "This place is not empty.Please give another position : ";
                    check == 0;
                }
            }
            if (input2 < 1 || input2 > 9)
            {
                cout << "Wrong Number. Please enter correct position : ";
            }
        }
        cout << arr[0][0] << " " << arr[0][1] << " " << arr[0][2] << endl;
        cout << arr[1][0] << " " << arr[1][1] << " " << arr[1][2] << endl;
        cout << arr[2][0] << " " << arr[2][1] << " " << arr[2][2] << endl;

        move++;
    }
    int flag1 = 1;
    while (flag1)
    {

        cout << p1 << ", Enter The number : ";
        int check = 1;
        while (check == 1)
        {
            cin >> input1;
            if (input1 == 1)
            {
                if (arr[0][0] == '-')
                {
                    arr[0][0] = c1;
                    check = 0;
                }
                else
                {
                    cout << "This place is not empty.Please give another position : ";
                }
            }
            if (input1 == 2)
            {
                if (arr[0][1] == '-')
                {
                    arr[0][1] = c1;
                    check = 0;
                }
                else
                {
                    cout << "This place is not empty.Please give another position : ";
                }
            }
            if (input1 == 3)
            {
                if (arr[0][2] == '-')
                {
                    arr[0][2] = c1;
                    check = 0;
                }
                else
                {
                    cout << "This place is not empty.Please give another position : ";
                }
            }
            if (input1 == 4)
            {
                if (arr[1][0] == '-')
                {
                    arr[1][0] = c1;
                    check = 0;
                }
                else
                {
                    cout << "This place is not empty.Please give another position : ";
                }
            }
            if (input1 == 5)
            {
                if (arr[1][1] == '-')
                {
                    arr[1][1] = c1;
                    check = 0;
                }
                else
                {
                    cout << "This place is not empty.Please give another position : ";
                }
            }
            if (input1 == 6)
            {
                if (arr[1][2] == '-')
                {
                    arr[1][2] = c1;
                    check = 0;
                }
                else
                {
                    cout << "This place is not empty.Please give another position : ";
                }
            }
            if (input1 == 7)
            {
                if (arr[2][0] == '-')
                {
                    arr[2][0] = c1;
                    check = 0;
                }
                else
                {
                    cout << "This place is not empty.Please give another position : ";
                }
            }
            if (input1 == 8)
            {
                if (arr[2][1] == '-')
                {
                    arr[2][1] = c1;
                    check = 0;
                }
                else
                {
                    cout << "This place is not empty.Please give another position : ";
                }
            }
            if (input1 == 9)
            {
                if (arr[2][2] == '-')
                {
                    arr[2][2] = c1;
                    check = 0;
                }
                else
                {
                    cout << "This place is not empty.Please give another position : ";
                }
            }
            if (input1 < 1 || input1 > 9)
            {
                cout << "Wrong Number. Please enter correct position : ";
            }
        }
        cout << arr[0][0] << " " << arr[0][1] << " " << arr[0][2] << endl;
        cout << arr[1][0] << " " << arr[1][1] << " " << arr[1][2] << endl;
        cout << arr[2][0] << " " << arr[2][1] << " " << arr[2][2] << endl;

        if ((arr[0][0] == c1 && arr[0][1] == c1 && arr[0][2] == c1) || (arr[1][0] == c1 && arr[1][1] == c1 && arr[1][2] == c1) || (arr[2][0] == c1 && arr[2][1] == c1 && arr[2][2] == c1) || (arr[0][0] == c1 && arr[1][0] == c1 && arr[2][0] == c1) || (arr[0][1] == c1 && arr[1][1] == c1 && arr[2][1] == c1) || (arr[0][2] == c1 && arr[1][2] == c1 && arr[2][2] == c1) || (arr[0][0] == c1 && arr[1][1] == c1 && arr[2][2] == c1) || (arr[0][2] == c1 && arr[1][1] == c1 && arr[2][0] == c1))
        {
            cout << "                                    " << p1 << " Wins the Game.";
            break;
        }
        if (arr[0][0] != '-' && arr[1][0] != '-' && arr[2][0] != '-' && arr[0][1] != '-' && arr[1][1] != '-' && arr[2][2] != '-' && arr[0][2] != '-' && arr[1][2] != '-' && arr[2][2] != '-')
        {
            cout << "                                    Draw !";
            break;
        }

        cout << p2 << ", Enter The number : ";

        check = 1;
        while (check == 1)
        {
            cin >> input2;
            if (input2 == 1)
            {
                if (arr[0][0] == '-')
                {
                    arr[0][0] = c2;
                    check = 0;
                }
                else
                {
                    cout << "This place is not empty.Please give another position : ";
                    check == 0;
                }
            }
            if (input2 == 2)
            {
                if (arr[0][1] == '-')
                {
                    arr[0][1] = c2;
                    check = 0;
                }
                else
                {
                    cout << "This place is not empty.Please give another position : ";
                    check == 0;
                }
            }
            if (input2 == 3)
            {
                if (arr[0][2] == '-')
                {
                    arr[0][2] = c2;
                    check = 0;
                }
                else
                {
                    cout << "This place is not empty.Please give another position : ";
                    check == 0;
                }
            }
            if (input2 == 4)
            {
                if (arr[1][0] == '-')
                {
                    arr[1][0] = c2;
                    check = 0;
                }
                else
                {
                    cout << "This place is not empty.Please give another position : ";
                    check == 0;
                }
            }
            if (input2 == 5)
            {
                if (arr[1][1] == '-')
                {
                    arr[1][1] = c2;
                    check = 0;
                }
                else
                {
                    cout << "This place is not empty.Please give another position : ";
                    check == 0;
                }
            }
            if (input2 == 6)
            {
                if (arr[1][2] == '-')
                {
                    arr[1][2] = c2;
                    check = 0;
                }
                else
                {
                    cout << "This place is not empty.Please give another position : " << endl;
                    check == 0;
                }
            }
            if (input2 == 7)
            {
                if (arr[2][0] == '-')
                {
                    arr[2][0] = c2;
                    check = 0;
                }
                else
                {
                    cout << "This place is not empty.Please give another positio : ";
                    check == 0;
                }
            }
            if (input2 == 8)
            {
                if (arr[2][1] == '-')
                {
                    arr[2][1] = c2;
                    check = 0;
                }
                else
                {
                    cout << "This place is not empty.Please give another position : ";
                    check == 0;
                }
            }
            if (input2 == 9)
            {
                if (arr[2][2] == '-')
                {
                    arr[2][2] = c2;
                    check = 0;
                }
                else
                {
                    cout << "This place is not empty.Please give another position : ";
                    check == 0;
                }
            }
            if (input2 < 1 || input2 > 9)
            {
                cout << "Wrong Number. Please enter correct position : ";
            }
        }
        cout << arr[0][0] << " " << arr[0][1] << " " << arr[0][2] << endl;
        cout << arr[1][0] << " " << arr[1][1] << " " << arr[1][2] << endl;
        cout << arr[2][0] << " " << arr[2][1] << " " << arr[2][2] << endl;

        if ((arr[0][0] == c2 && arr[0][1] == c2 && arr[0][2] == c2) || (arr[1][0] == c2 && arr[1][1] == c2 && arr[1][2] == c2) || (arr[2][0] == c2 && arr[2][1] == c2 && arr[2][2] == c2) || (arr[0][0] == c2 && arr[1][0] == c2 && arr[2][0] == c2) || (arr[0][1] == c2 && arr[1][1] == c2 && arr[2][1] == c2) || (arr[0][2] == c2 && arr[1][2] == c2 && arr[2][2] == c2) || (arr[0][0] == c2 && arr[1][1] == c2 && arr[2][2] == c2) || (arr[0][2] == c2 && arr[1][1] == c2 && arr[2][0] == c2))
        {
            cout << "                                    " << p2 << " Wins the Game.";
        }
        if (arr[0][0] != '-' && arr[1][0] != '-' && arr[2][0] != '-' && arr[0][1] != '-' && arr[1][1] != '-' && arr[2][2] != '-' && arr[0][2] != '-' && arr[1][2] != '-' && arr[2][2] != '-')
        {
            cout << "                                    Draw !";
            break;
        }
    }
    cout << endl
         << "Do you want to play a new game? Enter 'y' for yes else any other key : ";
    char newGameCheck;
    cin >> newGameCheck;
    if (newGameCheck == 'y')
        goto home;

    return 0;
}
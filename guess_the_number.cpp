#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    system("CLS");
    system("Color 74");
    int guess;
    int ctr = 0;
    int num = rand() % 100 + 1;
    int flag = 1;
    cout << "                                         Welcome to Guess The Number.\n ";
    cout << "The number is within 1 to 100." << endl;
    while (flag)
    {
        cout << "\nGuess The Number : ";
        cin >> guess;
        ctr++;
        if (guess > num)
        {
            printf("Your number is higher than actual.\n");
        }
        else if (guess < num)
        {
            printf("Your number is lesser than actual.\n");
        }
        else
        {
            flag = 0;
        }
    }
    if (flag == 0)
    {
        cout << "\nYou guessed right and you took " << ctr << " attempts.";
    }
    return 0;
}
#include<iostream>
using namespace std;

int main()
{
    int amount;
    cout << "Enter the amount" << endl;
    cin >> amount;
    int hundredNotes = 0;
    int fiftyNotes = 0;
    int twentyNotes = 0;
    int oneNotes = 0;

    switch(1){
        case 1:
            hundredNotes = amount/100;
            cout << hundredNotes << " - Hundred notes" << endl;
        case 2:
            fiftyNotes = (amount%100) / 50;
            cout << fiftyNotes << "Fifty notes" << endl;
        case 3:
            twentyNotes = ((amount%100)%50) / 20;
            cout << twentyNotes << "Twenty Notes" << endl;
        case 4:
            oneNotes =  ((amount%100)%50) % 20;
            cout << oneNotes << "one notes" << endl;
            break;
        default:
            cout << "invalid input" << endl;
    }

    return 0;
}
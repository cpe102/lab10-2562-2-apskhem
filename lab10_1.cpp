#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
using namespace std;

string RandomGrade() {
    srand(time(0));
    int randomGrade = rand()%9;
    switch (randomGrade) {
        case 0: return "F";
        case 1: return "C";
        case 2: return "C+";
        case 3: return "D";
        case 4: return "D+";
        case 5: return "B";
        case 6: return "B+";
        case 7: return "A";
        case 8: return "W";
    }
}

int main() {
    string a;
    cout << "Press Enter 3 times to reveal your future." << endl;
    getline(cin, a);
    getline(cin, a);
    getline(cin, a);
    cout << "You will get " << RandomGrade() << " in this 261102.";

    return 0;
}
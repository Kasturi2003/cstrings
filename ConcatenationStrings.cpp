#include <iostream>
using namespace std;

main() {
    string firstname;
    cout << "Enter your first name  ";
    cin >> firstname;
    string lastname;
    cout << "Enter your last name  ";
    cin >> lastname;
    string fullname = firstname + " " + lastname;
    string quickname = firstname.append(lastname);
    cout << " Your name is " << fullname ;
    cout << " \n your full name with append is " << quickname ;
    return 0;
}
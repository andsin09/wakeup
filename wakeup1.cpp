#include <iostream>
using namespace std;
int main() {

string awake, ready;
string time;
bool awak, read;

cout << "Are you awake?";
cin >> awake;

if(awake == "Yes" || awake == "yes"){
    awak = true;
}

if(awak == true){
    cout << "What time did you wake up?";
    cin >> time;
}

else{
    cout << "Are you ready to wake up?";
    cin >> ready;
        if(ready == "Yes" || awake == "yes"){
            read = true;
            cout << "Good job!";
        }

        else{
            cout << "Don't care. Wake up.";
        }
}


}
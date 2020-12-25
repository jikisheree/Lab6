#include <iostream>
#include <string>
using namespace std;

int main(){
    string a = "Fahsai: ";
    string name, movie, day, wish;
    int id;

    cout << a << "Sawadee ka...Can you tell me your name?" << endl;
    cout << "?????: ";
    getline(cin,name);
    string b = name+": ";
    cout << a << "Wow!!! " << name << " is a really cool name." << endl;
    cout << a << "I think you are an Engineering student. What is your student ID?" << endl;
    cout << b;
    cin >> id;
    cin.ignore();
    int x = id/10000000;
    int gear = x-12;
    
    cout << a << "I think you may be GEAR " << gear << ". I have a free movie ticket for you." << endl;
    cout << a << "Let's go to the cinema together!!!" << endl;
    cout << a << "What movie do you want to watch?" << endl;
    cout << b;
    getline(cin,movie);
    cout << a << "So....which day are you free to go with me?" << endl;
    cout << b;
    getline(cin,day);
    cout << a << day << "....that is OK!!! I'm looking forward to watching " << movie << " with you." << endl;
    cout << b;
    getline(cin,wish);
    cout << a << "555+ see you " << day << ". Bye Bye \\(^ ^)/";
	return 0;
}



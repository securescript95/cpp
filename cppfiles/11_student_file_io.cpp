#include <iostream>
#include <fstream>
using namespace std;

class Student {
    int roll;
    string name;
    string clas;
    int year;
    float marks;

public:
    void input() {
        cout << "Roll: "; cin >> roll;
        cout << "Name: "; cin.ignore(); getline(cin, name);
        cout << "Class: "; getline(cin, clas);
        cout << "Year: "; cin >> year;
        cout << "Total Marks: "; cin >> marks;
    }

    void writeToFile(ofstream& out) {
        out << roll << "," << name << "," << clas << "," << year << "," << marks << endl;
    }
};

int main() {
    Student s[5];
    ofstream fout("students.txt");

    for (int i = 0; i < 5; ++i) {
        cout << "Enter details of student " << i+1 << ":\n";
        s[i].input();
        s[i].writeToFile(fout);
    }

    fout.close();
    cout << "\nData written to file successfully.\n";
    return 0;
}
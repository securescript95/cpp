#include <iostream>
#include <cstring>
using namespace std;

void showAddress(const char* str) {
    for (int i = 0; str[i]; ++i)
        cout << str[i] << " at " << (void*)&str[i] << endl;
}

void toUpperCase(char* str) {
    for (int i = 0; str[i]; ++i)
        if (islower(str[i])) str[i] = toupper(str[i]);
}

void reverseString(char* str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; ++i)
        swap(str[i], str[len - 1 - i]);
}

void insertString(char* str1, const char* str2, int pos) {
    char temp[200];
    strncpy(temp, str1, pos);
    temp[pos] = '\0';
    strcat(temp, str2);
    strcat(temp, str1 + pos);
    strcpy(str1, temp);
}

int main() {
    char str1[100], str2[100];
    int choice;
    cout << "Enter string 1: ";
    cin.getline(str1, 100);

    do {
        cout << "\n1.Show Address\n2.Concatenate\n3.Compare\n4.Length\n5.To Upper\n6.Reverse\n7.Insert String\n8.Exit\nChoice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1: showAddress(str1); break;
            case 2:
                cout << "Enter string 2: ";
                cin.getline(str2, 100);
                strcat(str1, str2);
                cout << "Result: " << str1 << endl;
                break;
            case 3:
                cout << "Enter string 2: ";
                cin.getline(str2, 100);
                cout << ((strcmp(str1, str2) == 0) ? "Equal" : "Not equal") << endl;
                break;
            case 4:
                cout << "Length: " << strlen(str1) << endl;
                break;
            case 5:
                toUpperCase(str1);
                cout << "Upper: " << str1 << endl;
                break;
            case 6:
                reverseString(str1);
                cout << "Reversed: " << str1 << endl;
                break;
            case 7:
                cout << "Enter string 2: ";
                cin.getline(str2, 100);
                int pos;
                cout << "Position to insert: ";
                cin >> pos;
                insertString(str1, str2, pos);
                cout << "After insert: " << str1 << endl;
                break;
        }
    } while (choice != 8);

    return 0;
}
#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char* argv[]) {
    int count[26] = {0};

    for (int i = 1; i < argc; ++i) {
        for (int j = 0; argv[i][j]; ++j) {
            char ch = tolower(argv[i][j]);
            if (isalpha(ch))
                count[ch - 'a']++;
        }
    }

    cout << "Character frequency:\n";
    for (int i = 0; i < 26; ++i)
        if (count[i])
            cout << char(i + 'a') << ": " << count[i] << endl;

    return 0;
}
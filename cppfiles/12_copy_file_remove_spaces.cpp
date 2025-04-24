#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("input.txt");
    ofstream fout("output.txt");

    char ch;
    while (fin.get(ch)) {
        if (!isspace(ch))
            fout.put(ch);
    }

    fin.close();
    fout.close();
    cout << "File copied without whitespaces.\n";
    return 0;
}
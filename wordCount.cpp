
#include<bits/stdc++.h>
using namespace std;

int countWords( string& filename) {
    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Error: Could not open file " << filename << endl;
        return -1; 
    }

    string line;
    int wordCount = 0;

    while (getline(file, line)) {
        istringstream iss(line);
        string word;
        while (iss >> word) {
            wordCount++;
        }
    }

    file.close();
    return wordCount;
}

int main() {
    string fileName;

    cout << "Enter file name you want to count words: ";
    cin >> fileName;

    int wordCount = countWords(fileName);

    if (wordCount >= 0) {
        cout << "Total word count  :"  << wordCount << endl;
    } else {
        cout << "Error Occured" << endl;
    }

    return 0;
}

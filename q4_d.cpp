#include <iostream>
#include <string>
#include <vector>
#include <algorithm> 
using namespace std;

int main() {
    int n;
    cout << "Enter number of strings: ";
    cin >> n;

    vector<string> words(n);
    cin.ignore(); 

    cout << "Enter " << n << " strings:\n";
    for (int i = 0; i < n; i++) {
        getline(cin, words[i]);
    }
    sort(words.begin(), words.end());

    cout << "\nStrings in alphabetical order:\n";
    for (const string& word : words) {
        cout << word << endl;
    }

    return 0;
}

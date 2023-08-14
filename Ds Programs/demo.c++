#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main() {
    string textinput;
    getline(cin, textinput); // Read the input string

    unordered_map<string, int> word_freq; // Create an empty unordered map

    // Split the input string into words
    vector<string> words;
    string word;
    for (char c : textinput) {
        if (isspace(c)) {
            words.push_back(word);
            word = "";
        } else {
            word += c;
        }
    }
    if (!word.empty()) {
        words.push_back(word);
    }

    // Count the frequency of each word
    for (const string& w : words) {
        ++word_freq[w];
    }

    // Extract the repeated words
    vector<string> repeated_words;
    for (const auto& p : word_freq) {
        if (p.second > 1) {
            repeated_words.push_back(p.first);
        }
    }

    // Sort and print the repeated words
    if (repeated_words.empty()) {
        cout << "NA" << endl;
    } else {
        sort(repeated_words.begin(), repeated_words.end());
        for (const string& w : repeated_words) {
            cout << w << " ";
        }
        cout << endl;
    }

    return 0;
}


#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

bool isPalindrome(const string& str) {
    string cleaned;
    for (char ch : str) {
        if (isalnum(ch)) cleaned += tolower(ch);
    }
    string rev = cleaned;
    reverse(rev.begin(), rev.end());
    return cleaned == rev;
}

void countFrequency(const string& str) {
    map<char, int> freq;
    for (char ch : str) {
        if (isalpha(ch)) freq[tolower(ch)]++;
    }
    cout << "Character frequencies:\n";
    for (const auto& p : freq) {
        cout << p.first << " : " << p.second << endl;
    }
}

string replaceVowels(string str) {
    for (char& ch : str) {
        if (string("aeiouAEIOU").find(ch) != string::npos) {
            ch = '*';
        }
    }
    return str;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    cout << (isPalindrome(str) ? "The string is a palindrome.\n" : "The string is NOT a palindrome.\n");
   
    countFrequency(str);
    
    cout << "String after replacing vowels: " << replaceVowels(str) << endl;

    return 0; 
}
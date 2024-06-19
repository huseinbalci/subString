#include <iostream>

using namespace std;

string mainString = "xxxxxabcqwertyuiocxabc1234fgtabcqq";
string subString = "abc";

int main() {
    string result;
    int startPos = 0;
    int endPos;

    while ((startPos = mainString.find(subString, startPos)) != string::npos) {
        startPos += subString.size();
        endPos = mainString.find(subString, startPos);

        if (endPos == string::npos) {
            break;
        }

        result += mainString.substr(startPos, endPos - startPos);
    }

    cout<<result;
}
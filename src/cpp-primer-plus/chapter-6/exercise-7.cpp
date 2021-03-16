#include <iostream>

int main() {
    using namespace std;

    cout << "输入单词（q中止） : ";
    string word;
    char wordFirstCharacter;
    int vowel = 0;
    int consonant = 0;
    int other = 0;

    cin >> word;
    while (word != "q") {
        wordFirstCharacter = word[0];
        if (isalpha(wordFirstCharacter)) {
            // 判断元音或辅音
            switch (wordFirstCharacter) {
                case 'a':
                case 'A':
                case 'e':
                case 'E':
                case 'i':
                case 'I':
                case 'o':
                case 'O':
                case 'u':
                case 'U':
                    vowel++;
                    break;
                default:
                    consonant++;
            }
        } else {
            other++;
        }
        cin >> word;
    }
    cout << vowel << " 元音打头" << endl;
    cout << consonant << " 辅音打头" << endl;
    cout << other << " 其他" << endl;
    return 0;
}
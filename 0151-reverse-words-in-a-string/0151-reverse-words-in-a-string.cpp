class Solution {
public:
    string reverseWords(string s) {
        string word = "";
        string temp = "";
        int st, times, turn = 0;
        for (int i = 0; i < s.size(); i++) {
            if (isalnum(s[i]) && turn == 0) {
                st = i;
                turn = 1;

            } 
            if (turn == 1 &&
                       (i + 1 == s.size() ||!isalnum(s[i + 1])  )) {
                times = i - st + 1;
                turn = 0;
                temp = s.substr(st, times);
                word = temp + " " + word;
            }
        }

        return word.substr(0, word.size() - 1);
    }
};
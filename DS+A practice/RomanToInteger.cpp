class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> T = { { 'I' , 1 },
                                   { 'V' , 5 },
                                   { 'X' , 10 },
                                   { 'L' , 50 },
                                   { 'C' , 100 },
                                   { 'D' , 500 },
                                   { 'M' , 1000 } };
        int output{0};
        for (int i{std::size(s)-1}; i >= 0; i--) {
            if (T[s[i-1]] < T[s[i]]) {
                output = output + T[s[i]] - T[s[i-1]];
                i--;
            }
            else output = output + T[s[i]];
        }
        return output;
    }
};
// Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent. Return the answer in any order.

// A mapping of digits to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.

// Example 1:

// Input: digits = "23"
// Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]
// Example 2:

// Input: digits = ""
// Output: []
// Example 3:

// Input: digits = "2"
// Output: ["a","b","c"]

// Constraints:

// 0 <= digits.length <= 4
// digits[i] is a digit in the range ['2', '9'].

class Solution
{
public:
    void solve(string &output, unordered_map<char, string> &mapping, vector<string> &ans, string digits, int i)
    {
        if (digits.length() == 0)
            return;

        if (output.length() == digits.length())
        {
            ans.push_back(output);
            return;
        }

        for (char c : mapping[digits[i]])
        {
            output.push_back(c);
            solve(output, mapping, ans, digits, i + 1);
            output.pop_back();
        }
    }
    vector<string> letterCombinations(string digits)
    {
        vector<string> ans;

        unordered_map<char, string> mapping;
        mapping['2'] = "abc";
        mapping['3'] = "def";
        mapping['4'] = "ghi";
        mapping['5'] = "jkl";
        mapping['6'] = "mno";
        mapping['7'] = "pqrs";
        mapping['8'] = "tuv";
        mapping['9'] = "wxyz";

        int i = 0;
        string output = "";

        solve(output, mapping, ans, digits, i);

        return ans;
    }
};
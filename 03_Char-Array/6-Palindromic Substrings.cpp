// Given a string s, return the number of palindromic substrings in it.

// A string is a palindrome when it reads the same backward as forward.
// A substring is a contiguous sequence of characters within the string.

// Example 1 :

//     Input : s = "abc" Output : 3 Explanation : Three palindromic strings : "a",
//             "b", "c".Example 2 :

//     Input : s = "aaa" Output : 6 Explanation : Six palindromic strings : "a",
//             "a", "a", "aa", "aa", "aaa".

class Solution
{
public:
    int countSubstrings(string s)
    {
        int totalCount = 0;
        for (int center = 0; center < s.length(); center++)
        {
            int i = center;
            int j = center;

            int oddSubStringCount = expand(s, i, j);
            cout << oddSubStringCount << endl;

            i = center;
            j = center + 1;
            int evenSubStringCount = expand(s, i, j);
            cout << evenSubStringCount << endl;

            totalCount = totalCount + oddSubStringCount + evenSubStringCount;
        }
        return totalCount;
    }
    int expand(string s, int i, int j)
    {
        int count = 0;
        while (i >= 0 && j < s.length() && s[i] == s[j])
        {
            count++;
            i--;
            j++;
        }
        return count;
    }
};
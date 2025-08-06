// Valid Palindrome
// A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non - alphanumeric characters, it reads the same forward and backward.Alphanumeric characters include letters and numbers.

//  Given a string s,
// return true if it is a palindrome, or false otherwise.

// Example 1 :

// Input : s = "A man, a plan, a canal: Panama" Output : true Explanation : "amanaplanacanalpanama" is a palindrome.Example 2 :

// Input : s = "race a car" Output : false Explanation : "raceacar" is not a palindrome.Example 3 :

// Input : s = " " Output : true Explanation : s is an empty string "" after removing non - alphanumeric characters.Since an empty string reads the same forward and backward,
//         it is a palindrome.

class Solution
{
public:
    bool isPalindrome(string s)
    {

        string clean;
        int j = 0;

        for (int i = 0; i < s.length(); i++)
        {
            if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9'))
            {
                clean += tolower(s[i]);
                j++;
            }
        }

        int start = 0;
        int end = clean.length() - 1;

        while (start <= end)
        {
            if (clean[start] != clean[end])
            {
                return false;
            }
            else
            {
                start++;
                end--;
                ;
            }
        }
        return true;
    }
};
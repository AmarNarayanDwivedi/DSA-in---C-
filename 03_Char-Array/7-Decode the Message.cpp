// You are given the strings key and message, which represent a cipher key and a secret message, respectively.The steps to decode message are as follows :

//     Use the first appearance of all 26 lowercase English letters in key as the order of the substitution table.Align the substitution table with the regular English alphabet.Each letter in message is then substituted using the table.Spaces ' ' are transformed to themselves.
//     For example:
//     given key = "happy boy"(actual key would have at least one instance of each letter in the alphabet), we have the partial substitution table of('h'->'a', 'a'->'b', 'p'->'c', 'y'->'d', 'b'->'e', 'o'->'f').Return the decoded message.

class Solution
{
public:
    string decodeMessage(string key, string message)
    {
        unordered_map<char, char> mapping;
        char space = ' ';
        mapping[space] = space;
        char start = 'a';
        int index = 0;

        while (start <= 'z' && index < key.length())
        {
            char keykaCurrentCharacter = key[index];
            if (mapping.find(keykaCurrentCharacter) != mapping.end())
            {
                index++;
            }
            else
            {
                mapping[keykaCurrentCharacter] = start;
                start++;
                index++;
            }
        }
        string ans = "";
        for (int i = 0; i < message.length(); i++)
        {
            char msgcharacter = message[i];
            char mappedCharacter = mapping[msgcharacter];
            ans.push_back(mappedCharacter);
        }

        return ans;
    }
};

// Another Solution with clean code:

// class Solution {
// public:
//     string decodeMessage(string key, string message) {
//         unordered_map<char, char> mapping;

//         // Map space to space
//         mapping[' '] = ' ';

//         // Fill mapping from key
//         char start = 'a';
//         for (char c : key) {
//             if (c != ' ' && mapping.find(c) == mapping.end()) {
//                 mapping[c] = start;
//                 start++;
//             }
//         }

//         // Decode the message
//         string ans = "";
//         for (char c : message) {
//             ans.push_back(mapping[c]);
//         }

//         return ans;
//     }
// };

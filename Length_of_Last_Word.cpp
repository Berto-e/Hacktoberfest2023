#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int lengthOfLastWord(string s)
    {

        int wordFirstLetterIndex = 0;
        int wordLastLetterIndex = 0;
        bool isWord = false;
        int countWordLenght = 0;
        for (int i = 0; i < s.length(); ++i)
        {
            if ((s[i]) == ' ')
                isWord = false;
            if (s[i] != ' ' && isWord == false)
            {
                isWord = true;
                wordFirstLetterIndex = i;
            }
            if ((s[i + 1] == ' ' || s[i+1] == '\0') && isWord == true)
                wordLastLetterIndex = i;
        }

        for (int i = wordFirstLetterIndex; i < wordLastLetterIndex + 1; ++i)
        {
            countWordLenght++;
        }
        return countWordLenght;
    }
};

int main()
{
    Solution obj;
    int solve;
    solve = obj.lengthOfLastWord("   fly me   to   the moon  ");
    cout << solve;
    return 0;
}
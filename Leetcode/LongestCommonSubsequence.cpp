#include "stdc++.h"
int longestCommonSubsequence(string text1, string text2)
{
    const int size1 = text1.size();
    const int size2 = text2.size();
    vector<vector<int>> cache(size1 + 1, vector<int>(size2 + 1, 0));
    for (int row = 1; row <= size1; row++)
    {
        for (int col = 1; col <= size2; col++)
        {
            if (text1[row - 1] == text2[col - 1])
                cache[row][col] = cache[row - 1][col - 1] + 1;
            else
            {
                cache[row][col] = max(cache[row][col - 1], cache[row - 1][col]);
            }
        }
    }
    return cache[size1][size2];
}
int main()
{
    string text1 = "abc";
    string text2 = "ac";
    cout << longestCommonSubsequence(text1, text2);
}
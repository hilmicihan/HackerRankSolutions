#include "stdc++.h"

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n)
{
    long result = 0;
    for (auto i : s)
    {
        if (i == 'a')
            result++;
    }
    int size = s.size();
    result *= (n / size);
    int end = n % size;
    for (int i = 0; i < end; i++)
    {
        if (s[i] == 'a')
            result++;
    }
    return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}

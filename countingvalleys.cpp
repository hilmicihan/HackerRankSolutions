#include "stdc++.h"

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s)
{
    int alt = 0;
    int result = 0;
    for (auto i : s)
    {
        if (i == 'U')
        {
            alt++;
            if (alt == 0)
                result++;
        }
        else if (i == 'D')
            alt--;
    }
    return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}

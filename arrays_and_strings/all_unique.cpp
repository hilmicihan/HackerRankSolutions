#include "../stdc++.h"

/*  Implement an algorithm to determine if a string has all unique characters. What if you can not use additional data structures? */

bool allunique(string str)
{
    int len = str.length();
    bool chars[256] = {false};
    if(str.length() > 256)
        return false;

    for(int i = 0;i<len;i++)
        {
            if(chars[str[i]]) return false;
            
            chars[str[i]] = true;
        }
    return true;


}
int main() {


 string str = "asdfghjk";
 
    if (allunique(str)) {
        cout << "The String " << str
             << " has all unique characters\n";
    }
    else {
        cout << "The String " << str
             << " has duplicate characters\n";
    }
    return 0;


}
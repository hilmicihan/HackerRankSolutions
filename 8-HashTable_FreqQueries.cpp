
#include "stdc++.h"

vector<int> freqQuery(vector<vector<int>> queries)
{
    unordered_map<int, int> mymap;
    unordered_map<int, int> freqmap;

    vector<int> output;
    for (auto i : queries)
    {
        if (i[0] == 1)
        {
            if (freqmap[mymap[i[1]]] > 0)
                freqmap[mymap[i[1]]]--;

            mymap[i[1]]++;
            freqmap[mymap[i[1]]]++;
        }
        else if (i[0] == 2)
        {

            if (mymap[i[1]] > 0)
            {
                if (freqmap[mymap[i[1]]] > 0)
                    freqmap[mymap[i[1]]]--;
                mymap[i[1]]--;
                freqmap[mymap[i[1]]]++;
            }
        }
        else if (i[0] == 3)
        {
            if (freqmap[i[1]] > 0)
                output.push_back(1);
            else
            {
                output.push_back(0);
            }
        }
    }
    return output;
}
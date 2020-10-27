#include "stdc++.h"
bool canMakeArithmeticProgression(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    int size = arr.size();
    int dif = arr[1] - arr[0];
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i + 1] - arr[i] != dif)
            return false;
    }
    return true;
}
/*
    1502. Can Make Arithmetic Progression From Sequence

Given an array of numbers arr. A sequence of numbers is called an arithmetic progression if the difference between any two consecutive elements is the same.

Return true if the array can be rearranged to form an arithmetic progression, otherwise, return false.
https://leetcode.com/problems/can-make-arithmetic-progression-from-sequence/
    */
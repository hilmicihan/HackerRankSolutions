#include "stdc++.h"
int maxProduct(vector<int> &nums)
{
    int size = nums.size();
    int max1 = 0;
    int max1_index = -1;
    int max2 = 0;
    for (int i = 0; i < size; i++)
    {
        if (nums[i] > max1)
        {
            max1 = nums[i];
            max1_index = i;
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (nums[i] > max2 && i != max1_index)
        {
            max2 = nums[i];
        }
    }
    return (max1 - 1) * (max2 - 1);
}
/*  
1464. Maximum Product of Two Elements in an Array
Link : https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/

Given the array of integers nums, you will choose two different indices i and j of that array. Return the maximum value of (nums[i]-1)*(nums[j]-1).
    */
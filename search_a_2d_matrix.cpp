// #74 Search a 2-D Matrix

#include <bits/stdc++.h>

using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    for (vector<int> v : matrix)
    {
        int first = 0;
        int last = matrix[0].size() - 1;
        while (first <= last)
        {
            int mid = (first + last) / 2;
            if (v[mid] == target)
                return true;
            else if (v[mid] < target)
                first = mid + 1;
            else if (v[mid] > target)
                last = mid - 1;
        }
    }
    return false;
}
// #1323 Maximum 69 number
class Solution
{
public:
    int changeToNum(int numArr[], int n)
    {
        int res = 0, p = 0;
        for (int index = n - 1; index >= 0; index--)
        {
            res += numArr[index] * pow(10, p++);
        }
        return res;
    }
    int maximum69Number(int num)
    {
        int len = log10(num) + 1, safe = num;
        int ctr = 1;
        int maxNum = INT_MIN;
        int numArr[len], index = len - 1;
        while (num > 0)
        {
            numArr[index--] = num % 10;
            num = num / 10;
        }

        for (index = 0; index < len; index++)
        {
            if (numArr[index] == 6 && ctr)
            {
                ctr--;
                numArr[index] = 9;
                if (changeToNum(numArr, len) > maxNum)
                {
                    maxNum = changeToNum(numArr, len);
                }
                else
                {
                    numArr[index] = 6;
                }
            }
        }
        if (ctr == 1)
            maxNum = safe;
        return maxNum;
    }
};
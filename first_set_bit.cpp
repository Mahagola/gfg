class Solution
{
public:
    // Function to find position of first set bit in the given number.
    unsigned int getFirstSetBit(int n)
    {
        for (int i = 1; i <= n; i++)
        {
            if ((n & (1 << (i - 1))) != 0)
            {
                return i;
            }
        }
        return 0;
    }
};
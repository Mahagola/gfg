class Solution
{
public:
    int countSetBits(int n)
    {
        if (n == 0)
        {
            return 0;
        }
        int x = least_pow(n);
        int upto_pow = x * (1 << (x - 1));
        int msb_1 = (n - (1 << x)) + 1;
        int rem = (n - (1 << x));
        int ans = upto_pow + msb_1 + countSetBits(rem);
        return ans;
    }
    int least_pow(int n)
    {
        int x = 0;
        while ((1 << x) <= n)
        {
            x++;
        }
        return x - 1;
    }
};
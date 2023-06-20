class Solution
{
public:
    // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b)
    {
        int xoro = a ^ b;
        int temp = 0;

        // Using Brian Kerningam's algorithm , to count number of set bits in a number 
        while (xoro > 0)
        {
            xoro = xoro & (xoro - 1);
            temp++;
        }
        return temp;
    }
};
class Solution
{
    public:
    //Function to find the first position with different bits.
    int posOfRightMostDiffBit(int m, int n)
    {
        if(m==n){
            return -1;
        }
        int xor_ans=m^n;
        return log2(xor_ans&-(xor_ans))+1;
    }
};

/*  Function to calculate the longest consecutive ones
*   N: given input to calculate the longest consecutive ones
*/
class Solution
{
    public:
    int maxConsecutiveOnes(int N)
    {
        int count=0;
        int maxi=0;
        while(N>0){
            if((N&1)==1) {
                count++;
                maxi=max(count, maxi);
            }
            else{
                count=0;
            }
             N>>=1;
        }
        return maxi;
    }
};
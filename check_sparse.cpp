class Solution
{
    public:
    //Function to check if the number is sparse or not.
    bool isSparse(int n)
    {
        int count=0;
        int temp=1;
        while(n>0&&count!=2){
            if((n&temp)==1) {
                count++;
            }
            else{
            count=0;
            }
             n=n/2;
        }
        if(count==2){
            return false;
        }
        else{
            return true;
        }
    }
};

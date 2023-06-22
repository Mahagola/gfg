    bool isSparse(int n)
    {
        // Your code
        int count=0;
        int temp=1;
        while(n>0&&count!=2){
            if((n&temp)==1) {
                count++;
                temp<<=1;
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
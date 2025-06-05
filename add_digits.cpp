class Solution {
public:
   int iterate(int temp){
    int val;
    int ans=0;

        while(temp){
                        val=temp%10;
                                    ans=ans+val;
                                                temp=temp/10;
…        
    }
};

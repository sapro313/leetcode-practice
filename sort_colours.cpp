class Solution {
public:
    void sortColors(vector<int>& nums) {
       map<int,int>m1;
       for(int i=0;i<nums.size();i++){
        m1[nums[i]]++;
       }
 
 int count_0=0;
 int count_1=0;
 int count_2=0;
 int pointer=0;
       while(m1[0]!=count_0){
        nums[pointer++]=0;


       count_0++;

       }
       while(m1[1]!=count_1){
                nums[pointer++]=1;


                       count_1++;

                              }
                                while(m1[2]!=count_2){
                                            nums[pointer++]=2;


                                                   count_2++;

                                                          }
                                
                                     
       

  


                                          

                                                                         
                                                                                                              
                                                                                                                     
 
        
    
          


        


 

    
 


    }
};

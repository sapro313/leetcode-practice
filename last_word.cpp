class Solution {
public:
    int lengthOfLastWord(string s) {
        int i=s.size()-1;
        bool is_last=false;
        int count=0;
        while(i>=0){
            if(s[i]!=' '){
                count++;
                is_last=true;
            }
            else if(s[i]==' '&&is_last){

            
             break;
            }


            i--;
        }
        
        return count;
    }
};

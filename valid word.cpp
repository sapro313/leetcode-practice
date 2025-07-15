class Solution {
public:
    bool isValid(string word) {
        if(word.size()<3){
            return false;
        }
        int vowel=0;
        int consonant=0;
     int charot=0;
        for(char it:word){
            if(isalnum(it)){
                charot++;
                if(isalpha(it)){
                    char x=tolower(it);
                    if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'){
                        vowel++;
                    }else{
                        consonant++;
                    }
                }

            }
            else{
                return false;
            }

      

        }
        if(charot>=3&&vowel>=1&&consonant>=1){
            return true;
        }
        return false;
        
    }
};

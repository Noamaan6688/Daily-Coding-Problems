class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int count = 0;
        unordered_set<char> broken;
        for(int i = 0 ; i< brokenLetters.length() ; i++){
            broken.insert(brokenLetters[i]);
        }
        int i = 0;
        
        while(i < text.length()){
            bool found = false;
            while(i < text.length() && text[i] != ' '){
                if(broken.find(text[i]) != broken.end()){
                    found = true;
                }
                i++;
            }
            if(!found){
                count++;
            }
            i++;
        }
        return count;
    }
};
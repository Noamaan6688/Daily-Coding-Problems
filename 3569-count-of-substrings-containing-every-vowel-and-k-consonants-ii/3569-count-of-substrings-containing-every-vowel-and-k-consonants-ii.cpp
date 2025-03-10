class Solution {
public:
    typedef long long ll;
    ll countOfSubstrings(string word, int k) {
        int n = word.length(),vowels[5]={0};
        int cons=0;
        int i=0,j=0;
        ll ans=0;
        int lead=0;

        while (j<n)
        {
            if (word[j]=='a') vowels[0]+=1;
            else if (word[j]=='e') vowels[1]+=1;
            else if (word[j]=='i') vowels[2]+=1;
            else if (word[j]=='o') vowels[3]+=1;
            else if (word[j]=='u') vowels[4]+=1;
            else cons+=1;

            while (cons>k)
            {
                lead=0;
                if (word[i]=='a') vowels[0]-=1;
                else if (word[i]=='e') vowels[1]-=1;
                else if (word[i]=='i') vowels[2]-=1;
                else if (word[i]=='o') vowels[3]-=1;
                else if (word[i]=='u') vowels[4]-=1;
                else cons-=1;
                i+=1;
            }

            if (cons==k)
            {
                bool flag=true;
                if (vowels[0]==0 || vowels[1]==0 || vowels[2]==0 || vowels[3]==0 || vowels[4]==0) flag = false;

                if (flag)
                {
                    while(cons==k && i<=j)
                    {
                        if (word[i]=='a' && vowels[0]>1) vowels[0]-=1;
                        else if (word[i]=='e' && vowels[1]>1) vowels[1]-=1;
                        else if (word[i]=='i' && vowels[2]>1) vowels[2]-=1;
                        else if (word[i]=='o' && vowels[3]>1) vowels[3]-=1;
                        else if (word[i]=='u' && vowels[4]>1) vowels[4]-=1;
                        else break;
                        i+=1;
                        lead+=1;
                    }
                    ans+=lead+1;
                }
            }
            j+=1;
        }
        return ans;  
    }
};
class Solution {
public:
    int minFlips(int a, int b, int c) {
        int c1=0,c2=0,c3=0,d=0;
        for (int i=0;i<32;i+=1)
        {
            c1=a%2;
            c2=b%2;
            c3=c%2;
            if (c3==0)
            {
                if (c1==1) d+=1;
                if (c2==1) d+=1;
            }
            else
            {
                if (c1==0 && c2==0) d+=1;
            }
            a/=2;
            b/=2;
            c/=2;
        }
        // string s1,s2,s3;
        // while (a>0)
        // {
        //     s1+=((a%2)+'0');
        //     a/=2;
        // }
        // while (b>0)
        // {
        //     s2+=((b%2)+'0');
        //     b/=2;
        // }
        // while (c>0)
        // {
        //     s3+=((c%2)+'0');
        //     c/=2;
        // }
        // int n=max(s1.size(),max(s2.size(),s3.size()));
        // while (s1.size()<n) s1+='0';
        // while (s2.size()<n) s2+='0';
        // while (s3.size()<n) s3+='0';
        // // reverse(s1.begin(),s1.end());
        // // reverse(s2.begin(),s2.end());
        // // reverse(s3.begin(),s3.end());
        // int d=0;
        // for (int i=0;i<s1.size();i+=1)
        // {
        //     if (s3[i]=='0')
        //     {
        //         if (s1[i]=='1') d+=1;
        //         if (s2[i]=='1') d+=1;
        //     }
        //     else
        //     {
        //         if (s1[i]=='0' && s2[i]=='0') d+=1;
        //     }
        // }
        // cout<<s1<<"\n";
        // cout<<s2<<"\n";
        // cout<<s3<<"\n";
        return d;
    }
};
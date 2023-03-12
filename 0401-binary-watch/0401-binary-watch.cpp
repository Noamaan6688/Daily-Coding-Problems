class Solution {
public:
    int df(int k)
    {
        int c=0;
        while (k)
        {
            k=k&k-1;
            c+=1;
        }
        return c;
    }
    
    vector<string> readBinaryWatch(int to) {
        vector<string>v;
        string s;
        for (int i=0;i<12;i+=1)
        {
            for (int j=0;j<60;j+=1)
            {
                if (df(i)+df(j)==to)
                {
                    string s1=to_string(i),s2;
                    if (j>9) s2=to_string(j);
                    else s2="0"+to_string(j);
                    s=s1+":"+s2;
                    v.push_back(s);
                }
            }
        }
        return v;
    }
};
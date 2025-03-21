class Solution {
public:
vector<string> findAllRecipes(vector<string>& recipes, vector<vector<string>>& ingredients, vector<string>& supplies) {
    unordered_set<string>st(supplies.begin(),supplies.end()); 
    vector<string>ans; 
    bool t=true;  

    while(t)
    {  
        t=false; 
        for (int i=0;i<recipes.size();i+=1)
        {
            if (st.count(recipes[i])) continue;  
            bool t2=true;
            for(const string&s:ingredients[i])
            {
                if (!st.count(s)) 
                { 
                    t2=false; 
                    break;
                }
            }
            if(t2)
            {  
                st.insert(recipes[i]); 
                ans.push_back(recipes[i]);  
                t=true;  
            }
        }
    }
    return ans;
}
};
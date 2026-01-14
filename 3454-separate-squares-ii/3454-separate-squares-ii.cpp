class Solution {
    using ll = long long;
public:
    double separateSquares(vector<vector<int>>& squares) {
        // Change the squares meaning to [x, y, +-l], +l mean lower bound of square.
        int squSize = squares.size();
        squares.reserve(2 * squSize);
        for(int i=0; i<squSize; ++i){
            squares.push_back(squares[i]);
            squares.back()[1] += squares.back()[2];
            squares.back()[2] *= -1;
        }
        // Sort line by y-index
        sort(squares.begin(), squares.end(), [&](vector<int>& a, vector<int>& b){
            return a[1] < b[1];
        });
        
        int n = squares.size();
        // x-axis diff array for sweep approach
        map<int, int> diffArr; 
        // area[i] means the total area from between yPos[0] ~ yPos[i]
        // yPos will record the distinct y position for interpolation
        vector<ll> area(1, 0); 
        vector<int> yPos(1, squares[0][1]);
        for(int i=0; i<n-1; ++i){
            auto& event = squares[i];
            int start = event[0], end = event[0] + abs(event[2]);
            int y = event[1];
            int height = squares[i+1][1] - squares[i][1];
            diffArr[start] += event[2] > 0 ? 1 : -1;
            if(diffArr[start] == 0) diffArr.erase(start);
            diffArr[end] -= event[2] > 0 ? 1 : -1;
            if(diffArr[end] == 0) diffArr.erase(end);

            // Important: Only when diff y need to scan the x-axis to save runtime
            if(height != 0){
                int width = 0;
                int cover = 0;
                int prevX = -1;
                for(auto& [x, val] : diffArr){ // O(n) 
                    if(prevX != -1){ // segment of slice is valid
                        width += x - prevX;
                    }
                    cover += val;
                    if(cover){
                        prevX = x;
                    } else {
                        prevX = -1;
                    }
                }
                area.push_back( area.back() + 1LL * width * height ); 
                yPos.push_back(squares[i+1][1]);
            }
        }
        
        ll target = (area.back() + 1) / 2;
        int ind = lower_bound(area.begin(), area.end(), target) - area.begin();
        double ratio = (0.5 * area.back() - area[ind-1]) / (area[ind] - area[ind-1]);
        return yPos[ind-1] + (yPos[ind] - yPos[ind-1]) * ratio;
    }
};
class Solution {
public:
    int gap[3], id[3] = {0, 1, 2};
    int jumpOrShift(int i, const vector<int>& startTime, const vector<int>& endTime) {
        int duration = endTime[i] - startTime[i];
        bool canJump = false;

        for (int k = 0; k < 3; ++k) {
            if (gap[k] >= duration && (id[k] != i && id[k] != i + 1)) {
                canJump = true;
                break;
            }
        }
        int prevEnd = (i == 0) ? 0 : endTime[i - 1];
        int jump = startTime[i + 1] - prevEnd;
        return canJump ? jump : (jump - duration); 
    }
    int maxFreeTime(int eventTime, vector<int>& startTime, vector<int>& endTime) {
        int n = startTime.size();
        startTime.push_back(eventTime);
        gap[0] = startTime[0];
        gap[1] = startTime[1] - endTime[0];
        gap[2] = startTime[2] - endTime[1];
        if (gap[0] < gap[1]) swap(gap[0], gap[1]), swap(id[0], id[1]);
        if (gap[1] < gap[2]) swap(gap[1], gap[2]), swap(id[1], id[2]);
        if (gap[0] < gap[1]) swap(gap[0], gap[1]), swap(id[0], id[1]);

        for (int i = 3; i <= n; ++i) {
            int currentGap = startTime[i] - endTime[i - 1];
            if (currentGap >= gap[0]) {
                gap[2] = exchange(gap[1], gap[0]);
                gap[0] = currentGap;
                id[2] = exchange(id[1], id[0]);
                id[0] = i;
            } else if (currentGap >= gap[1]) {
                gap[2] = exchange(gap[1], currentGap);
                id[2] = exchange(id[1], i);
            } else if (currentGap > gap[2]) {
                gap[2] = currentGap;
                id[2] = i;
            }
        }
        int maxFree = 0;
        for (int i = 0; i < n; ++i) {
            maxFree = max(maxFree, jumpOrShift(i, startTime, endTime));
        }
        return maxFree;
    }
};
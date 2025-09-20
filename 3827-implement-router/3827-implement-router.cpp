struct Packet {
    int source, destination, timestamp;
};

class Router {
    int memoryLimit;
    queue<Packet> q;  
    unordered_set<long long> dupKey; 
    unordered_map<int, vector<int>> desToTime;

    long long makeKey(int s, int d, int t) {
        return (long long)s * 1e10 + (long long)d * 1e5 + t;
    }

public:
    Router(int memoryLimit) {
        this->memoryLimit = memoryLimit;
    }

    bool addPacket(int source, int destination, int timestamp) {
        long long key = makeKey(source, destination, timestamp);
        if (dupKey.count(key)) return false;

        if ((int)q.size() == memoryLimit) {
            Packet old = q.front(); q.pop();
            long long oldKey = makeKey(old.source, old.destination, old.timestamp);
            dupKey.erase(oldKey);

            desToTime[old.destination].erase(desToTime[old.destination].begin());
            if (desToTime[old.destination].empty())
                desToTime.erase(old.destination);
        }

        q.push({source, destination, timestamp});
        dupKey.insert(key);
        desToTime[destination].push_back(timestamp);
        return true;
    }

    vector<int> forwardPacket() {
        if (q.empty()) return {};
        Packet p = q.front(); q.pop();

        long long key = makeKey(p.source, p.destination, p.timestamp);
        dupKey.erase(key);

        desToTime[p.destination].erase(desToTime[p.destination].begin());
        if (desToTime[p.destination].empty())
            desToTime.erase(p.destination);

        return {p.source, p.destination, p.timestamp};
    }

    int getCount(int destination, int startTime, int endTime) {
        if (!desToTime.count(destination)) return 0;
        auto &v = desToTime[destination];
        auto it1 = lower_bound(v.begin(), v.end(), startTime);
        auto it2 = upper_bound(v.begin(), v.end(), endTime);
        return distance(it1, it2);
    }
};
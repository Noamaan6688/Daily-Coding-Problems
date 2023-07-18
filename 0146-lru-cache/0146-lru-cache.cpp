class LRUCache {
private:
	int keyCount;
	int maxKeyCount;
	list<pair<int, int>> dll;   
	map<int, list<pair<int, int>>::iterator> k2it;   

public:

    int cachesize,count;
    set<pair<int,int>>cache;
    unordered_map<int,int>keyvalue;
    unordered_map<int,bool>existsincache;
    unordered_map<int,int>countattachedtokey;

    LRUCache(int capacity) {
        cachesize=capacity;
    }
    
    int get(int key) {
        if(!existsincache[key]) return -1;
        cache.erase({countattachedtokey[key],key});
        cache.insert({count,key});
        countattachedtokey[key]=count;
        count++;
        return keyvalue[key];
    }
    
    void put(int key,int value) {
        if(!existsincache[key])
        {
            if(cache.size()==cachesize)
            {
                existsincache[(*cache.begin()).second]=false;
                cache.erase(cache.begin());
            }
            cache.insert({count,key});
            keyvalue[key]=value;
            countattachedtokey[key]=count;
            existsincache[key]=true;
            count++;
        }
        else
        {
            cache.erase({countattachedtokey[key],key});
            cache.insert({count,key});
            keyvalue[key]=value;
            countattachedtokey[key]=count;
            count+=1;
        }
        return;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
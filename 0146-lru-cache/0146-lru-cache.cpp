class LRUCache {

private:
	int keyCount;
	int maxKeyCount;
	list<pair<int, int>> dll;   
	map<int, list<pair<int, int>>::iterator> k2it;   

public:

    LRUCache(int capacity) 
	{
        keyCount = 0;
		maxKeyCount = capacity;
    }
    
    int get(int key) 
	{
		if(k2it.count(key) == 0) return -1;
		
		dll.splice(dll.begin(), dll, k2it[key]);
		return dll.front().second;
    }
    
    void put(int key, int value) 
	{
		if(k2it.count(key) > 0)
		{
			dll.splice(dll.begin(), dll, k2it[key]);
			dll.front().second = value;
		}	
		else if(keyCount + 1 <= maxKeyCount)
		{
			dll.emplace_front(key, value);
			k2it[key] = dll.begin();
			keyCount++;
		}
		else
		{
			k2it.erase(dll.back().first);
			dll.pop_back();
			dll.emplace_front(key, value);
			k2it[key] = dll.begin();
		}
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
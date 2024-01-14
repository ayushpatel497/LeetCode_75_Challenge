class SmallestInfiniteSet {
    unordered_set<int> us;
    priority_queue<int, vector<int>, greater<int>> small;
    int i;
public:
    SmallestInfiniteSet() {
        i = 1;
    }
    
    int popSmallest() {
        if (us.empty())
            return i++;
        int sm = small.top();
        small.pop();
        us.erase(sm);
        return sm;
    }
    
    void addBack(int num) {
        if (us.count(num) > 0 || num >= i)
            return;
        us.insert(num);
        small.push(num);
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */
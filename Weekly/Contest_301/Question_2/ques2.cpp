// 2336. Smallest Number in Infinite Set


class SmallestInfiniteSet {
public:
    SmallestInfiniteSet() {
        SmallestInfiniteSet* obj = new SmallestInfiniteSet();
        
        for(int i = 1; i<=10000; i++)
        {
            obj.insert(i);
        }
    }
    
    int popSmallest() {
        int min_element = *obj.begin();
        return min_element;
    }
    
    void addBack(int num) {
        if (!obj.count(num))
        {
            obj.insert(num);
        }
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */
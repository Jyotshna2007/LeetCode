class ProductOfNumbers {
public:
vector<int>j;
    ProductOfNumbers() {
        
    }
    void add(int num) {
        j.push_back(num);
    }
    int getProduct(int k) {
        int ans=1;
        for(int i=j.size()-k;i<j.size();i++) ans*=j[i];
        return ans;
     }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0, flowers = 0;
        
        if(flowerbed[0] == 0) flowerbed.insert(flowerbed.begin(), 0);
        if(flowerbed.back() == 0) flowerbed.push_back(0);

        for(int i = 0 ; i <= flowerbed.size(); i++) {
            if(i < flowerbed.size() && flowerbed[i] == 0)
                count ++;
            else {
                flowers += (count-1)/2;
                count = 0;
            }
        }
                
        return flowers >= n;
    }
};

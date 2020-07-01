class Solution:
    def canPlaceFlowers(self, flowerbed: List[int], n: int) -> bool:
        count = 0
        flowers = 0
        
        if flowerbed[0] == 0: flowerbed.insert(0, 0)
        if flowerbed[-1] == 0: flowerbed.append(0)

        for i in range(len(flowerbed)+1):
            if i < len(flowerbed) and flowerbed[i] == 0: 
                count += 1
            else:
                k = 0 if (count-1)//2 < 0 else (count-1)//2
                flowers += k
                count = 0
                
        return flowers >= n

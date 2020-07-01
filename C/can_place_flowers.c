bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n){
    int count = 0, flowers = 0, final = 0;
        
    if(*(flowerbed+0) == 0) count++;
    if(*(flowerbed+(flowerbedSize-1)) == 0) final++;

    for(int i = 0 ; i <= flowerbedSize; i++) {
        if(i < flowerbedSize && *(flowerbed+i) == 0)
            count ++;
        else {
            if(i == flowerbedSize) count += final;  
            flowers += (count-1)/2;
            count = 0;
        }
    }
                
    return flowers >= n;
}

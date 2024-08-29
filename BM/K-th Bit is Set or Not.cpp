    bool checkKthBit(int n, int k) {
      
    //========RIGHT SHIFT==================
    //return (n >> k) & 1;
        
    
    //===============LEFT SHIFT===============
    // Create a mask with only the kth bit
    // set to 1 and all other bits set to 0
    int mask = 1 << (k );
    // Perform bitwise AND operation
    // between n and the mask, which results
    // in a value where only the kth bit
    // is preserved If the result is not zero,
    // then the kth bit is set in n
    return ((n & mask) != 0) ? true : false;


    }
};

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t result = 0;
        for (int i = 0; i < 32; ++i) {
            result = result << 1;   // Shift result to the left by 1 bit
            result |= (n & 1);      // Add the least significant bit of n to result
            n >>= 1;                // Shift n to the right by 1 bit
        }
        return result;
    }
};

n =
00000010100101000001111010011100
Output
   964176192 (00111001011110000010100101000000)
Expected
   964176192 (00111001011110000010100101000000)

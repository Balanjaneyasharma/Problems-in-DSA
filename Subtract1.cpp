int subtractOne(int x)
{
    int m = 1;
 
    // Flip all the set bits
    // until we find a 1
    while (!(x & m))
    {
        x = x ^ m;
        m <<= 1;
    }
 
    // Flip the rightmost 1 bit
    x = x ^ m;
    return x;
}

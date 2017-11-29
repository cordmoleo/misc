
const unsigned long maxshort = 65536L;
const unsigned long multiplier = 1194211693L;
const unsigned long adder = 12345L;


class RandomNumber
{
    public:
        RandomNumber(unsigned long s = 0);
        unsigned short random(unsigned long n);
        double fRandom();
    
    private:
        unsigned long randSeed;
};

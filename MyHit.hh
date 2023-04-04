#ifndef MYHIT_HH
#define MYHIT_HH

class MyHit
{
    /*
    public:
    MyHit() = default;
    ~MyHit();
    */
    
    public:
        //MyHit(); 
        double fEdep; // Energy deposition
        double hitTime; 
        int channelNbr;
        
        double GetEdep();
        void SetEdep(double edep);
        
        double GetHitTime();
        void SetHitTime(double hit_time);
        
        int GetChannelNbr();
        void SetChannelNbr(int channel_number);
};

#endif

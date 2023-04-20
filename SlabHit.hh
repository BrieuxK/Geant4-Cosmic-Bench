#ifndef SLABHIT_HH
#define SLABHIT_HH

class SlabHit
{
    public:
        
        double GetEdep() {return fEdep;};
        void SetEdep(double edep) {fEdep = edep;};
        
        double GetHitTime() {return hitTime;};
        void SetHitTime(double hit_time) {hitTime = hit_time;};
        
        int GetChannelNbr() {return channelNbr;};
        void SetChannelNbr(int channel_number) {channelNbr = channel_number;};
        
        int GetPanelNbr() {return panelNbr;};
        void SetPanelNbr(int panel_number) {panelNbr = panel_number;};
    
    private:
        double fEdep; // Energy deposition
        double hitTime; 
        int channelNbr;
        int panelNbr;
    
};

#endif

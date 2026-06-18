class Solution {
public:
    double angleClock(int hour, int minutes) {
       double h=hour*30;
       double m=minutes*5.5;
       return min(abs(h-m),360-abs(h-m));
    }
};
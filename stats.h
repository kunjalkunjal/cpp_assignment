#include <vector>
#include<stdio.h>

class Stats{
public:
    float average;
    float max;
    float min;
};

namespace Statistics {
    Stats ComputeStatistics(const std::vector<float>& );
}

typedef class IAlerter;

class EmailAlert
{
public:
    bool emailSent;
};

class LEDAlert
{
public:
    bool ledGlows;
};


class StatsAlerter
{
public:
    float l_maxthreshold;
    std::vector<IAlerter*> l_alrerters;
    void checkAndAlert(const std::vector<float>& )
{}

};

Stats computedStats;

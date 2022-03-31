#include <vector>
#include<stdio.h>

class Stats{
public:
float average;
float max;
float min;
};

typedef class IAlerter;

namespace Statistics {
    Stats ComputeStatistics(const std::vector<float>& );
}



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

template<typename T1>
class IAlerter
{
public:
T1 IAlert_p;
};

class StatsAlerter
{
public:
void checkAndAlert(const std::vector<float>&,std::vector<IAlerter*>& )
{}

};
Stats computedStats;

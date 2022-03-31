#include <vector>

namespace Statistics {
    Stats ComputeStatistics(const std::vector<float>& );
}

class EmailAlert
{
public:
int8_t emailSent;
};

class LEDAlert
{
public:
int8_t ledGlows;
};

template<typename T1>
class IAlerter
{
public:
T1* IAlert_p;
}

class StatsAlerter
{
public:
void checkAndAlert(const std::vector<float>&)
{}

};

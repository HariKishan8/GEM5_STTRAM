#ifndef __PARAMS__SrcClockDomain__
#define __PARAMS__SrcClockDomain__

class SrcClockDomain;

#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "params/VoltageDomain.hh"
#include <cstddef>
#include "base/types.hh"
#include <vector>
#include "base/types.hh"

#include "params/ClockDomain.hh"

struct SrcClockDomainParams
    : public ClockDomainParams
{
    SrcClockDomain * create();
    uint32_t init_perf_level;
    VoltageDomain * voltage_domain;
    int32_t domain_id;
    std::vector< Tick > clock;
};

#endif // __PARAMS__SrcClockDomain__

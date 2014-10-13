#ifndef __PARAMS__SnoopFilter__
#define __PARAMS__SnoopFilter__

class SnoopFilter;

#include <cstddef>
#include "params/System.hh"
#include <cstddef>
#include "base/types.hh"

#include "params/SimObject.hh"

struct SnoopFilterParams
    : public SimObjectParams
{
    SnoopFilter * create();
    System * system;
    Cycles lookup_latency;
};

#endif // __PARAMS__SnoopFilter__

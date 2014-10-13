#ifndef __PARAMS__BaseXBar__
#define __PARAMS__BaseXBar__

class BaseXBar;

#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include <cstddef>
#include "base/types.hh"

#include "params/MemObject.hh"

struct BaseXBarParams
    : public MemObjectParams
{
    unsigned width;
    bool use_default_range;
    Cycles header_cycles;
    unsigned int port_default_connection_count;
    unsigned int port_master_connection_count;
    unsigned int port_slave_connection_count;
};

#endif // __PARAMS__BaseXBar__

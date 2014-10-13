#ifndef __PARAMS__BaseSetAssoc__
#define __PARAMS__BaseSetAssoc__

class BaseSetAssoc;

#include <cstddef>
#include <cstddef>
#include "base/types.hh"

#include "params/BaseTags.hh"

struct BaseSetAssocParams
    : public BaseTagsParams
{
    bool sequential_access;
    int assoc;
};

#endif // __PARAMS__BaseSetAssoc__

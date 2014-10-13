#ifndef __PARAMS__TimingExprUn__
#define __PARAMS__TimingExprUn__

class TimingExprUn;

#include <cstddef>
#include "enums/TimingExprOp.hh"
#include <cstddef>
#include "params/TimingExpr.hh"

#include "params/TimingExpr.hh"

#include "enums/TimingExprOp.hh"

struct TimingExprUnParams
    : public TimingExprParams
{
    TimingExprUn * create();
    Enums::TimingExprOp op;
    TimingExpr * arg;
};

#endif // __PARAMS__TimingExprUn__

#ifndef __PARAMS__TimingExprBin__
#define __PARAMS__TimingExprBin__

class TimingExprBin;

#include <cstddef>
#include "params/TimingExpr.hh"
#include <cstddef>
#include "params/TimingExpr.hh"
#include <cstddef>
#include "enums/TimingExprOp.hh"

#include "params/TimingExpr.hh"

#include "enums/TimingExprOp.hh"

struct TimingExprBinParams
    : public TimingExprParams
{
    TimingExprBin * create();
    TimingExpr * right;
    TimingExpr * left;
    Enums::TimingExprOp op;
};

#endif // __PARAMS__TimingExprBin__

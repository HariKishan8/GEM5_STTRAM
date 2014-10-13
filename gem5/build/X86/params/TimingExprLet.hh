#ifndef __PARAMS__TimingExprLet__
#define __PARAMS__TimingExprLet__

class TimingExprLet;

#include <cstddef>
#include "params/TimingExpr.hh"
#include <vector>
#include "params/TimingExpr.hh"

#include "params/TimingExpr.hh"

struct TimingExprLetParams
    : public TimingExprParams
{
    TimingExprLet * create();
    TimingExpr * expr;
    std::vector< TimingExpr * > defns;
};

#endif // __PARAMS__TimingExprLet__

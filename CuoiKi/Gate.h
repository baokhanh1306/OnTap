#ifndef _GATE_H_
#define _GATE_H_

#include "Prince.h"

class Gate{
    public:
    virtual void input()=0;
    virtual bool quaCong(Prince &p)=0;
};
#endif
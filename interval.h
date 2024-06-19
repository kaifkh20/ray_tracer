#ifndef INTERVAL_H
#define INTERVAL_H

#include "rt_const.h"

class interval{
    public:
        double min,max;
        interval():min(+infinity),max(-infinity){}
        interval(double min,double max):min(min),max(max){}

        double size() const{
            return max-min;
        }

        bool contains(double x)const{
            return min<=x && max>=x;
        }
        bool surrounds(double x) const{
            return min<x && max>x;
        }

        static const interval empty,universe;
};

const interval interval::empty = interval(+infinity,-infinity);
const interval interval::universe = interval(-infinity,+infinity);

#endif
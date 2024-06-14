#ifndef COLOR_H
#define COLOR_H

#include "vec3.h"
#include <iostream>

using color = vec3;

void write_color(std::ostream &out,const color& c){
    auto r = c.x();
    auto g = c.y();
    auto b = c.z();

    int rbyte = int(255.999 * r);
    int gbyte = int(255.999 * g);
    int bbyte = int(255.999 * b);

    out<<rbyte<<' '<<gbyte<<' '<<bbyte;
}

#endif
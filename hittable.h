#ifndef HITTABLE_H
#define HITTABLE_H

#include "rt_const.h"

// #include "ray.h"

class hit_record{
    public:
        point3 p;
        vec3 normal;
        double t;
        bool front_face;

    // ng. meaning it's inside ; ps. it's outside

        void set_face_normal(const ray& r,const vec3& outward_normal){
            front_face = dot(r.direction(),outward_normal)<0;
            normal  = front_face?outward_normal:-outward_normal;
        }

};

class hittable{
    public:
        virtual ~hittable() = default;
        virtual bool hit(const ray& r,interval ray_t, hit_record& h) const = 0;
};

#endif
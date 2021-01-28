#ifndef XRAYS_H
#define XRAYS_H

#include "../imaging.h"

struct XRaysDiagnosis
{
    int diagnosis;
};

XRaysDiagnosis XRays(Imaging imaging);

#endif

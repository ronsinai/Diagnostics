#include "../imaging.h"

#ifndef XRAYS_H
#define XRAYS_H

struct XRaysDiagnosis
{
    int diagnosis;
};

XRaysDiagnosis XRays(Imaging imaging);

#endif

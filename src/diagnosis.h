#include <string.h>

#include "algorithms/ct.h"
#include "algorithms/mri.h"
#include "algorithms/us.h"
#include "algorithms/xrays.h"

#ifndef DIAGNOSIS_H
#define DIAGNOSIS_H

struct Diagnosis
{
    std::string imagingId;
    std::string imagingType;
    std::string diagnosis;
};

#endif

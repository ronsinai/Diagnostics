#ifndef DIAGNOSIS_H
#define DIAGNOSIS_H

#include <boost/property_tree/ptree.hpp>

#include "algorithms/ct.h"
#include "algorithms/mri.h"
#include "algorithms/us.h"
#include "algorithms/xrays.h"

struct Diagnosis
{
    CTDiagnosis ctDiagnosis;
    MRIDiagnosis mriDiagnosis;
    USDiagnosis usDiagnosis;
    XRaysDiagnosis xraysDiagnosis;
    boost::property_tree::ptree params;
};

#endif

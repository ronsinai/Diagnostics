#include <boost/property_tree/ptree.hpp>

#include "diagnose.h"
#include "readParams.h"
#include "algorithms/ct.h"
#include "algorithms/mri.h"
#include "algorithms/us.h"
#include "algorithms/xrays.h"

Diagnosis diagnose(Imaging imaging)
{
    boost::property_tree::ptree params = readParams("./parameters.json");

    CTDiagnosis ctDiagnosis = CT(imaging);
    MRIDiagnosis mriDiagnosis = MRI(imaging);
    USDiagnosis usDiagnosis = US(imaging);
    XRaysDiagnosis xraysDiagnosis = XRays(imaging);

    Diagnosis diagnosis = {ctDiagnosis, mriDiagnosis, usDiagnosis, xraysDiagnosis, params};
    return diagnosis;
}

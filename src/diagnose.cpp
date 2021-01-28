#include <string.h>

#include "diagnose.h"

Diagnosis diagnose(Imaging imaging)
{
    Diagnosis diagnosis = {imaging._id, imaging.type};
    return diagnosis;
}

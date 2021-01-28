#include <string.h>

#include "diagnose.h"

Diagnosis diagnose(Imaging imaging)
{
    Diagnosis diagnosis = {"id", "type", "diagnosis"};
    return diagnosis;
}

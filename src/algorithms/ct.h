#ifndef CT_H
#define CT_H

#include "../imaging.h"

struct CTDiagnosis
{
    int diagnosis;
};

CTDiagnosis CT(Imaging imaging);

#endif

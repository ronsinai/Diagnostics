#include "../imaging.h"

#ifndef CT_H
#define CT_H

struct CTDiagnosis
{
    int diagnosis;
};

CTDiagnosis CT(Imaging imaging);

#endif

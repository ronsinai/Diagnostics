#ifndef MRI_H
#define MRI_H

#include "../imaging.h"

struct MRIDiagnosis
{
    int diagnosis;
};

MRIDiagnosis MRI(Imaging imaging);

#endif

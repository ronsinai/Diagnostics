#include "../imaging.h"

#ifndef MRI_H
#define MRI_H

struct MRIDiagnosis
{
    int diagnosis;
};

MRIDiagnosis MRI(Imaging imaging);

#endif

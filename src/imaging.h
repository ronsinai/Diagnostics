#ifndef IMAGING_H
#define IMAGING_H

#include <string>

#include "metadata.h"

struct Imaging
{
    std::string _id;
    std::string type;
    std::string bodyPart;
    Metadata metadata;
    std::string path;
};

#endif

#include <string>

#include "metadata.h"

#ifndef IMAGING_H
#define IMAGING_H

struct Imaging
{
    std::string _id;
    std::string type;
    std::string bodyPart;
    Metadata metadata;
    std::string path;
};

#endif

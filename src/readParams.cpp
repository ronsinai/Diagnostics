#include <boost/property_tree/json_parser.hpp>

#include "readParams.h"

boost::property_tree::ptree readParams(std::string path)
{
    boost::property_tree::ptree params;
    boost::property_tree::read_json(path, params);

    return params;
}

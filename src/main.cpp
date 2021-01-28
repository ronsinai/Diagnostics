#include "diagnose.h"
#include "diagnosis.h"
#include "imaging.h"

int main()
{
    Imaging imaging;
    Diagnosis diagnosis = diagnose(imaging);
    return 0;
}

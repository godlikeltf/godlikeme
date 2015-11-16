#pragma once
#include <QString>

#ifdef WIN32
#   define TR QString::fromLocal8Bit
#else
#   define TR QString::fromUtf8
#endif

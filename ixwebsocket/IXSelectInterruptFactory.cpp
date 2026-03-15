/*
 *  IXSelectInterruptFactory.cpp
 *  Author: Benjamin Sergeant
 *  Copyright (c) 2019 Machine Zone, Inc. All rights reserved.
 */

#include "IXSelectInterruptFactory.h"

#include "IXUniquePtr.h"
#if defined(_WIN32) || defined(__WIIU__)
#include "IXSelectInterruptEvent.h"
#else
#include "IXSelectInterruptPipe.h"
#endif

namespace ix
{
    SelectInterruptPtr createSelectInterrupt()
    {
#if defined(_WIN32) || defined(__WIIU__)
        return ix::make_unique<SelectInterruptEvent>();
#else
        return ix::make_unique<SelectInterruptPipe>();
#endif
    }
} // namespace ix

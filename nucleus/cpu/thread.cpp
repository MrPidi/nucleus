/**
 * (c) 2015 Nucleus project. All rights reserved.
 * Released under GPL v2 license. Read LICENSE for more details.
 */

#include "thread.h"
#include "nucleus/common.h"
#include "nucleus/emulator.h"

void CellThread::join()
{
    m_thread->join();
}

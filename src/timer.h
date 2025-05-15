#pragma once
#include "Arduino.h"
namespace micont{
    namespace timer{
        int create_timer_freq(double f);
        int create_timer_intervall_millis(long unsigned int millis);
        int create_timer_intervall_nanons(long unsigned int nanos);
        bool has_fired(int i);
        bool consume(int i);
    }
}
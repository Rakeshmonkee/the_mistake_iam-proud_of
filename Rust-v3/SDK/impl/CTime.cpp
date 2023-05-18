#include "../structs.h"
#include "../Offsets.h"
#include "../globals.h"
#include "../../Kotlar/Kotlar.h"

// Impl : CTime

float CTime::GetTime()
{
    static auto off = OFF(Offsets::UnityEngine_Time::StaticMethods::get_time);
    return ((float (*)())(G::baseGameAssemlby + off))();
}

float CTime::GetRealTime()
{
    static auto off = OFF(Offsets::UnityEngine_Time::StaticMethods::get_realtimeSinceStartup);
    return ((float (*)())(G::baseGameAssemlby + off))();
}

float CTime::GetDeltaTime()
{
    static auto off = OFF(Offsets::UnityEngine_Time::StaticMethods::get_deltaTime);
    return ((float (*)())(G::baseGameAssemlby + off))();
}

float CTime::GetFixedDeltaTime()
{
    static auto off = OFF(Offsets::UnityEngine_Time::StaticMethods::get_fixedDeltaTime);
    return ((float (*)())(G::baseGameAssemlby + off))();
}

float CTime::GetSmoothDeltaTime()
{
    static auto off = OFF(Offsets::UnityEngine_Time::StaticMethods::get_smoothDeltaTime);
    return ((float (*)())(G::baseGameAssemlby + off))();
}

float CTime::GetFixedTime()
{
    static auto off = OFF(Offsets::UnityEngine_Time::StaticMethods::get_fixedTime);
    return ((float (*)())(G::baseGameAssemlby + off))();
}

float CTime::GetTimeScale()
{
    static auto off = OFF(Offsets::UnityEngine_Time::StaticMethods::get_timeScale);
    return ((float (*)())(G::baseGameAssemlby + off))();
}

void CTime::SetTimeScale(float value)
{
    static auto off = OFF(Offsets::UnityEngine_Time::StaticMethods::set_timeScale_System_Single_value);
    return ((void (*)(float))(G::baseGameAssemlby + off))(value);
}
#include "log.h"

namespace NE
{
    std::shared_ptr<spdlog::logger> Log::s_CoreLogger;

    void Log::Init()
    {
        spdlog::set_pattern("%^[%T] %n: %v%$");
        s_CoreLogger = spdlog::stdout_color_mt("My SPECIAL APP YEYE");
        s_CoreLogger->set_level(spdlog::level::trace);
    }
}
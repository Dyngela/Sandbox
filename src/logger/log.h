//
// Created by Ben Erwan on 25/02/2023.
//

#pragma once

#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"

namespace NE
{

    class Log
        {
            public:
            static void Init();

            inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
            private:
            static std::shared_ptr<spdlog::logger> s_CoreLogger;
        };

}

// core log macro
#define NE_CORE_TRACE(...)   ::NE::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define NE_CORE_INFO(...)    ::NE::Log::GetCoreLogger()->info(__VA_ARGS__)
#define NE_CORE_WARN(...)    ::NE::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define NE_CORE_ERROR(...)   ::NE::Log::GetCoreLogger()->error(__VA_ARGS__)
#define NE_CORE_FATAL(...)   ::NE::Log::GetCoreLogger()->fatal(__VA_ARGS__)




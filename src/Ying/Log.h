#pragma once
#include "Core.h"
#include "spdlog/spdlog.h"
#include<memory>
namespace Ying
{
	class YING_DLL_API Log
	{
	public:
		static void Init();		

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }		// & µÄ×÷ÓÃ£¿
		inline static std::shared_ptr<spdlog::logger> GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

// Core log macros
#define Y_CORE_TRACE(...)	Ying::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define Y_CORE_INFO(...)	Ying::Log::GetCoreLogger()->info(__VA_ARGS__)
#define Y_CORE_WARN(...)	Ying::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define Y_CORE_ERROR(...)	Ying::Log::GetCoreLogger()->error(__VA_ARGS__)
#define Y_CORE_FATAL(...)	Ying::Log::GetCoreLogger()->fatal(__VA_ARGS__)

//Client log macros
#define Y_TRACE(...)		Ying::Log::GetClientLogger()->trace(__VA_ARGS__)
#define Y_INFO(...)			Ying::Log::GetClientLogger()->info(__VA_ARGS__)
#define Y_WARN(...)			Ying::Log::GetClientLogger()->warn(__VA_ARGS__)
#define Y_ERROR(...)		Ying::Log::GetClientLogger()->error(__VA_ARGS__)
#define Y_FATAL(...)		Ying::Log::GetClientLogger()->fatal(__VA_ARGS__)
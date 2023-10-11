#pragma once
#include "Core.h"
namespace Ying 
{
	class YING_DLL_API Application		//Sandbox需要的时候会从Ying.dll 导出，因此这里需要dllexport
	{
	public:
		Application();
		virtual  ~Application();

		void Run();
	};

	//To be defined in client
	Application* CreateApplication();		
}



#pragma once
#include "Core.h"
namespace Ying 
{
	class YING_DLL_API Application		//Sandbox��Ҫ��ʱ����Ying.dll ���������������Ҫdllexport
	{
	public:
		Application();
		virtual  ~Application();

		void Run();
	};

	//To be defined in client
	Application* CreateApplication();		
}



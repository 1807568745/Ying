#pragma once
#ifdef YING_PLATFORM_WINDOWS

extern Ying::Application* Ying::CreateApplication();

int main(int argc, char** argv)
{
	Ying::Log::Init();
	Y_CORE_WARN("Initialized Log!");
	int a = 6;
	Y_INFO("Hello! var={0}", a);

	auto app = Ying::CreateApplication();
	app->Run();
	delete app;
}

#endif // YING_PLATFORM_WINDOWS


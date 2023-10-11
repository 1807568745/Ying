#pragma once
#ifdef YING_PLATFORM_WINDOWS

extern Ying::Application* Ying::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Ying::CreateApplication();
	app->Run();
	delete app;
}

#endif // YING_PLATFORM_WINDOWS

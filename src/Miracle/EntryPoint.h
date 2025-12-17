#pragma once

#ifdef MIRACLE_PLATFORM_WINDOWS

extern Miracle::Application* Miracle::CreateApplication();

int main(int argc, char** argv)
{
	printf("Miracle Engine\n");
	auto app = Miracle::CreateApplication();
	app->Run();
	delete app;
}

#endif
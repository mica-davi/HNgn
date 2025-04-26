#pragma once

#ifdef HN_PLATFORM_WINDOWS

extern HNgn::Application* HNgn::CreateApp();
int main(int argc, char** argv) {
	printf("HNgn Started!");
	auto app = HNgn::CreateApp();
	app->Run();
	delete app;
}
#else
	#error HN only supports windows
#endif
#pragma once

#include "core.h"

namespace HNgn {
	class HN_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	Application* CreateApp();
}


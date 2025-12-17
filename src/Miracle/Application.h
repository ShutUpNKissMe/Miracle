#pragma once

#include "Core.h"

namespace Miracle {

	class MIRACLE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();

} 
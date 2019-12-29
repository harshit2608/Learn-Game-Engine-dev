#include "hzpch.h"
#include "Application.h"

//tets new
#include "Hazel/Events/ApplicationEvent.h"
#include "Hazel/Log.h"
//------------

namespace Hazel
{
	Application::Application()
	{

	}

	Application::~Application()
	{

	}

	void Application::Run()
	{
		//test
		WindowResizeEvent e(1280, 720);
		HZ_TRACE(e);
		//--------------

		while (true);
	}
}
#include "HNgn.h"

class Sandbox : public HNgn::Application {
public:
	Sandbox() {

	}

	~Sandbox() {

	}
};

HNgn::Application* HNgn::CreateApp() {
	return new Sandbox();
}
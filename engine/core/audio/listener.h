#pragma once
#include <memory>

namespace audio
{
struct listener_impl;

class listener
{
public:
	listener();
	void gain(const float gain);
	void position(const float* position3);
	void velocity(const float* velocity3);
	void direction(const float* direction3);

private:
	std::unique_ptr<listener_impl> _impl;
};
}

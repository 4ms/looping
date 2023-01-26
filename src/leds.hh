#pragma once
#include "controls.hh"
#include "modes.hh"

namespace LDKit
{

struct Leds {
	Controls &controls;
	ChannelMode &modes;

	Leds(Controls &controls, ChannelMode &modes)
		: controls{controls}
		, modes{modes} {}

	void update() {
		if (modes.inf == InfState::TransitioningOn)
			controls.inf_led.high();
		else if (modes.inf == InfState::TransitioningOff)
			controls.inf_led.low();

		controls.reverse_led.set(modes.reverse);
	}
};

} // namespace LDKit

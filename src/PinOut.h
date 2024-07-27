#ifndef EasyIO_PinOut_h
#define EasyIO_PinOut_h

#include "Arduino.h"

namespace EasyIO {
	class PinOut {
		public:
			PinOut(byte pin);
			virtual void setup();
			void off();
			void on();
			void toggle();
			byte status();

		private:
			byte _pin;
	};
};

#endif
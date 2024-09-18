#ifndef EasyIO_StatusLed_h
#define EasyIO_StatusLed_h

#include "PinOut.h"

namespace EasyIO {
	class StatusLed : private EasyIO::PinOut {
		public:
			StatusLed(byte pin, unsigned long onTime = 200, unsigned long offTime = 800);
			void setup();
			void update();

		private:
			unsigned long _onTime;
			unsigned long _offTime;
			unsigned long _previousMillis;
	};
};

#endif
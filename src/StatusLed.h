#ifndef EasyIO_StatusLed_h
#define EasyIO_StatusLed_h

#include "PinOut.h"

namespace EasyIO {
	class StatusLed : private EasyIO::PinOut {
		public:
			StatusLed(byte pin, long onTime = 200, long offTime = 800);
			void setup();
			void update();

		private:
			long _onTime;
			long _offTime;
			unsigned long _previousMillis;
	};
};

#endif
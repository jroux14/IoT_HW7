#define LED_PATH "/sys/class/leds/beaglebone:green:usr"

class LED{
   	private:
      		std::string path;
      		int number;
      		virtual void writeLED(std::string filename, std::string value);
      		virtual void removeTrigger();
   	public:
      		LED(int number);
      		virtual void turnOn();
      		virtual void turnOff();
      		virtual void flash(std::string delayms);
      		virtual void outputState();
     		virtual ~LED();
};

# INTRODUCTION
   Smart Dustbin, as its name suggests, functions intelligently or can be described as an automatic dustbin. It works like this: when you walk up to this dustbin, it will automatically open thanks to a servo motor. As a result, some sensor work is required to detect the object in front of the trash can.
# OBJECTIVE
   To design and develop a prototype for an automated open dustbin that can open the lid automatically when it recognises persons who wish to throw rubbish out. It can also detect the amount of trash within the dustbin.
# COMPONENTS REQUIRED
   * ATMEGA328
   * ULTRA SONIC SENSOR
   * SERVO MOTOR
   * DUSTBIN
# CATEGORY
  * An automatic open-close lid for convenience and to reduce physical contact, preventing the spread of germs.
  * Separation of dry and wet waste

# WORKING PRINCIPLE
   After wiring and connecting all of the devices and connecting them to the Smart Dustbin, double-check all of the necessary setups to see if anything is missing. Following the connection setup, the next step is to submit/upload code to the microcontroller and power up the circuit. When the system is turned on, the Atmega328 Controller keeps an eye out for anything that comes within a certain range of the sensor. When an Ultrasonic sensor detects an object, such as a hand or other, the MicroController evaluates its distance and if it is less than a certain value, the servo motor is activated first, with the help of the extended arm of the lid. The lid will open for a set period of time before closing on its own.
# ADVANTAGE
  * The "smart bin" provides information about fill levels and guarantees that the trash is only collected when it is completely filled.
  * Fewer collection visits mean less traffic congestion and disruption, as well as cleaner and safer streets.
# DISADVANTAGE
  * As the city's population grows, the system will require more garbage bins for separate waste collection.
  * The memory size of the sensor nodes utilised in the dustbins is restricted.
## INACTION
# OFF MODE
![off mode](https://user-images.githubusercontent.com/74193913/164608496-9a1717c5-5d83-4835-be52-1350fd41b0ca.png)

# ON MODE
![on mode](https://user-images.githubusercontent.com/74193913/164608533-f36dd7e9-aee8-4b18-a685-eaf001b89061.png)

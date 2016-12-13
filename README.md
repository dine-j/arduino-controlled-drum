# Arduino Controlled Drum

2nd year, Introduction to Robotics project

## Tasks

We had two tasks:
The first task was to play any rhythm on the drum, and the second one was to add a sensor (we chose a piezo) so that the drum could react to user inputs.

As a bonus task, we also decided to couple this to a song analyser for the drum to play alongside a song.

[Task 1](https://github.com/dine-j/arduino-controlled-drum/blob/master/Drummer.ino): In order to control the DC motors, we followed the Arduino documentation, which indicates that three pins per
motor are needed and declared as “OUTPUT”: one for the direction (“HIGH” brings the drumsticks down, “LOW” brings the drumstick up), one for the speed and one for the brakes. When launching the programme, we made sure both of the drumsticks were up. The highest speed was used for the motors. 
[Task 2](https://github.com/dine-j/arduino-controlled-drum/blob/master/DrummerPiezo.ino): Transmits instructions to the drummer via the piezo sensor. At each execution of the loop, the Arduino reads input from the piezo and if the input if over a certain threshold (to avoid the noise), then the right drumstick hits the drum.
[Bonus task](https://github.com/dine-j/arduino-controlled-drum/blob/master/DrummerSongPlayer.pde): Transmits beats from a song to the drummer. We used Processing in order to achieve this. By running the StandardFirmata programme on the Arduino, it allowed us to run the Processing programme. It analyses the frequencies of a given song and if it picks a reading above a certain threshold, we instruct the Arduino to hit the drum.

## Resources

The bonus task was based on [How to Make LEDs Flash to Music with an Arduino](http://www.instructables.com/id/How-to-Make-LEDs-Flash-to-Music-with-an-Arduino/?ALLSTEPS) tutorial and we used Kimi no Akari interpreted by Ayano Yasuda from Taiko no Tatsujin Original Soundtrack as a background song.

## Contributors

* **Maksymilian Gajowniczek** - [codemaks](https://github.com/codemaks)
* **Nina Hasebe** - [nhasebe](https://github.com/nhasebe)
* **Amandine Jala** - [dine-j](https://github.com/dine-j)

import processing.serial.*;
import ddf.minim.*;
import ddf.minim.analysis.*;
import cc.arduino.*;

Minim minim;
AudioPlayer song;
BeatDetect beat;
BeatListener bl;
Arduino arduino;

int direcR = 12;
int brakeR = 9;
int spdR = 3;

float kickSize;

void setup() {
  size(512, 200, P3D);
  
  minim = new Minim(this);
  arduino = new Arduino(this, Arduino.list()[0], 57600);
  
  song = minim.loadFile("KimiNoAkari.mp3", 2048);
  song.play();
  beat = new BeatDetect(song.bufferSize(), song.sampleRate());
  beat.setSensitivity(200);  
  kickSize = 16;
  bl = new BeatListener(beat, song);  
  textFont(createFont("Helvetica", 16));
  textAlign(CENTER);
  
  arduino.pinMode(direcR, Arduino.OUTPUT);
  arduino.pinMode(brakeR, Arduino.OUTPUT);

  arduino.digitalWrite(direcR, Arduino.LOW);
  arduino.digitalWrite(brakeR, Arduino.LOW);
  arduino.analogWrite(spdR, 255);
}

void draw() {
  background(0);
  fill(255);
  if(beat.isKick()) {
      arduino.digitalWrite(direcR, Arduino.HIGH);
      arduino.digitalWrite(brakeR, Arduino.LOW);
      arduino.analogWrite(spdR, 255);
      delay(100);
      kickSize = 32;
  }
  
  arduino.digitalWrite(direcR, Arduino.LOW);
  arduino.digitalWrite(brakeR, Arduino.LOW);
  arduino.analogWrite(spdR, 255);
  delay(100);
  textSize(kickSize);
  text("KICK", width/4, height/2);
  
  kickSize = constrain(kickSize * 0.95, 16, 32);
  
  arduino.digitalWrite(brakeR, Arduino.HIGH);
  delay(5);
}

void stop() {
  // always close Minim audio classes when you are finished with them
  song.close();
  // always stop Minim before exiting
  minim.stop();
  // this closes the sketch
  super.stop();
}
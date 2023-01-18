#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioMixer4              SNchaosMix; //xy=312.9521713256836,423.07763290405273
AudioSynthWaveformModulated HHtone2; //xy=328.4460983276367,604.4035682678223
AudioSynthWaveformModulated HHtone; //xy=330.5030708312988,566.1591539382935
AudioMixer4              HHchaosMix; //xy=330.45215606689453,660.6995277404785
AudioSynthWaveformModulated SNtone2; //xy=471.77429580688477,445.7515478134155
AudioSynthWaveformModulated SNtone; //xy=475.50808334350586,408.6183099746704
AudioMixer4              HHtoneMix; //xy=504.21376037597656,618.625696182251
AudioSynthWaveformDc     BDpitchAmt;            //xy=518.9891395568848,85.54450511932373
AudioMixer4              BDchaosMix; //xy=617.3225708007812,145.85568809509277
AudioMixer4              SNtoneMix; //xy=654.7743301391602,427.7515468597412
AudioSynthNoiseWhite     HHnoise; //xy=654.8361740112305,614.13694190979
AudioEffectEnvelope      HHtoneEnv; //xy=654.7249908447266,658.285083770752
AudioEffectEnvelope      BDpitchEnv;      //xy=660.0334815979004,85.54450416564941
AudioSynthNoiseWhite      SNnoise;          //xy=689.5333557128906,329.9333305358887
AudioEffectEnvelope      SNtoneEnv; //xy=690.8411026000977,372.9664239883423
AudioSynthWaveformModulated BDsaw; //xy=792.2559547424316,176.54447269439697
AudioSynthWaveformModulated BDsine;   //xy=792.7001800537109,120.10003566741943
AudioMixer4              SNMix; //xy=814.6188278198242,421.39605140686035
AudioMixer4              HHMix; //xy=819.6137809753418,660.0479793548584
AudioEffectEnvelope      SNenv; //xy=933.3966598510742,421.39609718322754
AudioEffectEnvelope      HHenv; //xy=938.3916130065918,660.0480251312256
AudioMixer4              BDMix;         //xy=953.2557106018066,157.54448223114014
AudioFilterStateVariable SNfilt;        //xy=1054.73002243042,428.0627498626709
AudioFilterStateVariable HHfilt; //xy=1059.7249755859375,666.714677810669
AudioEffectEnvelope      BDenv; //xy=1079.2557182312012,157.54447174072266
AudioFilterStateVariable SnFilter; //xy=1189.0530586242676,422.0302906036377
AudioFilterStateVariable HhFilter; //xy=1205.8260078430176,659.5530071258545
AudioFilterStateVariable BdFilter; //xy=1209.166633605957,164.16666793823242
AudioMixer4              SnFilterMix; //xy=1336.3862342834473,437.0302906036377
AudioMixer4              HhFilterMix; //xy=1353.704689025879,672.462085723877
AudioMixer4              BdFilterMix; //xy=1356.4998092651367,176.16666793823242
AudioMixer4              VoiceMixer;     //xy=1496.3878593444824,443.90918159484863
AudioSynthWaveformDc     WavefolderDC;            //xy=1740.6667098999023,544.666669845581
AudioEffectWaveFolder    Wavefolder;    //xy=1746.6667175292969,500.66666984558105
AudioMixer4              WavefoldMixer; //xy=1747.6667556762695,445.6666679382324
AudioEffectFreeverb      reverb;      //xy=1985.7884712219238,512.757848739624
AudioMixer4              ReverbMixer; //xy=2008.8490142822266,455.8486099243164
AudioEffectDelay         Delay;         //xy=2216.9697914123535,459.6970329284668
AudioMixer4              DelayMixR; //xy=2417.7881813049316,632.4243068695068
AudioMixer4              DelayMixL; //xy=2422.424289703369,294.2425174713135
AudioFilterStateVariable DelayFilterR; //xy=2426.060718536377,568.787914276123
AudioFilterStateVariable DelayFilterL;        //xy=2430.6063499450684,352.424280166626
AudioMixer4              OutR; //xy=2586.970115661621,514.2425136566162
AudioMixer4              OutL; //xy=2590.606517791748,416.96984672546387
AudioOutputI2S2          i2s2;         //xy=2733.996482849121,466.7095832824707
AudioConnection          patchCord1(SNchaosMix, 0, SNtone, 0);
AudioConnection          patchCord2(SNchaosMix, 0, SNtone2, 0);
AudioConnection          patchCord3(HHtone2, 0, HHchaosMix, 0);
AudioConnection          patchCord4(HHtone2, 0, HHtoneMix, 1);
AudioConnection          patchCord5(HHtone, 0, HHtoneMix, 0);
AudioConnection          patchCord6(HHchaosMix, 0, HHtone, 0);
AudioConnection          patchCord7(HHchaosMix, 0, HHtone2, 0);
AudioConnection          patchCord8(SNtone2, 0, SNchaosMix, 0);
AudioConnection          patchCord9(SNtone2, 0, SNtoneMix, 1);
AudioConnection          patchCord10(SNtone, 0, SNtoneMix, 0);
AudioConnection          patchCord11(HHtoneMix, HHtoneEnv);
AudioConnection          patchCord12(BDpitchAmt, BDpitchEnv);
AudioConnection          patchCord13(BDchaosMix, 0, BDsine, 0);
AudioConnection          patchCord14(BDchaosMix, 0, BDsaw, 0);
AudioConnection          patchCord15(BDchaosMix, 0, BDsaw, 1);
AudioConnection          patchCord16(SNtoneMix, SNtoneEnv);
AudioConnection          patchCord17(HHnoise, 0, HHMix, 0);
AudioConnection          patchCord18(HHtoneEnv, 0, HHMix, 1);
AudioConnection          patchCord19(BDpitchEnv, 0, BDchaosMix, 0);
AudioConnection          patchCord20(SNnoise, 0, SNMix, 0);
AudioConnection          patchCord21(SNtoneEnv, 0, SNMix, 1);
AudioConnection          patchCord22(BDsaw, 0, BDMix, 1);
AudioConnection          patchCord23(BDsaw, 0, BDchaosMix, 1);
AudioConnection          patchCord24(BDsine, 0, BDMix, 0);
AudioConnection          patchCord25(SNMix, SNenv);
AudioConnection          patchCord26(HHMix, HHenv);
AudioConnection          patchCord27(SNenv, 0, SNfilt, 0);
AudioConnection          patchCord28(HHenv, 0, HHfilt, 0);
AudioConnection          patchCord29(BDMix, BDenv);
AudioConnection          patchCord30(SNfilt, 1, SnFilter, 0);
AudioConnection          patchCord31(HHfilt, 1, HhFilter, 0);
AudioConnection          patchCord32(BDenv, 0, BdFilter, 0);
AudioConnection          patchCord33(SnFilter, 0, SnFilterMix, 0);
AudioConnection          patchCord34(SnFilter, 2, SnFilterMix, 1);
AudioConnection          patchCord35(HhFilter, 0, HhFilterMix, 0);
AudioConnection          patchCord36(HhFilter, 2, HhFilterMix, 1);
AudioConnection          patchCord37(BdFilter, 0, BdFilterMix, 0);
AudioConnection          patchCord38(BdFilter, 2, BdFilterMix, 1);
AudioConnection          patchCord39(SnFilterMix, 0, VoiceMixer, 1);
AudioConnection          patchCord40(HhFilterMix, 0, VoiceMixer, 2);
AudioConnection          patchCord41(BdFilterMix, 0, VoiceMixer, 0);
AudioConnection          patchCord42(VoiceMixer, 0, Wavefolder, 0);
AudioConnection          patchCord43(VoiceMixer, 0, WavefoldMixer, 0);
AudioConnection          patchCord44(WavefolderDC, 0, Wavefolder, 1);
AudioConnection          patchCord45(Wavefolder, 0, WavefoldMixer, 1);
AudioConnection          patchCord46(WavefoldMixer, 0, ReverbMixer, 0);
AudioConnection          patchCord47(WavefoldMixer, reverb);
AudioConnection          patchCord48(reverb, 0, ReverbMixer, 1);
AudioConnection          patchCord49(ReverbMixer, Delay);
AudioConnection          patchCord50(ReverbMixer, 0, OutL, 0);
AudioConnection          patchCord51(ReverbMixer, 0, OutR, 0);
AudioConnection          patchCord52(Delay, 0, DelayMixL, 0);
AudioConnection          patchCord53(Delay, 1, DelayMixR, 0);
AudioConnection          patchCord54(Delay, 2, DelayMixL, 1);
AudioConnection          patchCord55(Delay, 3, DelayMixR, 1);
AudioConnection          patchCord56(Delay, 4, DelayMixL, 2);
AudioConnection          patchCord57(Delay, 5, DelayMixR, 2);
AudioConnection          patchCord58(DelayMixR, 0, DelayFilterR, 0);
AudioConnection          patchCord59(DelayMixL, 0, DelayFilterL, 0);
AudioConnection          patchCord60(DelayFilterR, 1, OutR, 1);
AudioConnection          patchCord61(DelayFilterL, 1, OutL, 1);
AudioConnection          patchCord62(OutR, 0, i2s2, 1);
AudioConnection          patchCord63(OutL, 0, i2s2, 0);
// GUItool: end automatically generated code



















//potentiometers turncheck

float tresh = 5;

int probPot;
int oldProbPot;

float volPot;
float oldVolPot;

float filtPot;
float oldFiltPot;

float randomPot;
float oldRandomPot;




//instrument select
bool kickSelected;
bool snareSelected;
bool hihatSelected;
bool allSelected = true;

int kickLed = 70;
int kickLedTimer;
int snareLed = 70;
int snareLedTimer;
int hihatLed = 70;
int hihatLedTimer;



//instrument volume
float kickVol = 1;
float snareVol = 1;
float hihatVol = 1;

//probability of playing
int kickProb = 1024;
int snareProb = 1024;
int hihatProb = 1024;


// random values
int Inst[65];
int Prob[65];
float Velocity[65];

float kickVelocity[65];


// Sound randomness
float BDvariation;
float SNvariation;
float HHvariation;

float kickVariationPot;
float snareVariationPot;
float hihatVariationPot;


// makes instrument only play once per step
bool BDon; //is the BASE DRUM on?
bool SNon; //is the SNARE on?
bool HHon; //is the HI HAT on?



//what happens when a drum is played
void BDnoteOn() {
  BDenv.noteOn();
  BDpitchEnv.noteOn();
}

void SNnoteOn() {
  SNenv.noteOn();
  SNtoneEnv.noteOn();
}

void HHnoteOn() {
  HHenv.noteOn();
  HHtoneEnv.noteOn();
}


// Clock stuff
int tempo = 130;
int timer = 1;
int SeqLen = 32;
int Step = 1;

bool playState = false;
bool currentPlayBtn;
bool lastPlayBtn;



float delayTime;
float delayVol;

float swing;









///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void setup() {

  Serial.begin(9600);
  AudioMemory(1900);


  pinMode(5, INPUT_PULLDOWN); // select all
  pinMode(6, OUTPUT); // select kick LED
  pinMode(7, INPUT_PULLDOWN); // select kick
  pinMode(8, OUTPUT); // select snare LED
  pinMode(9, INPUT_PULLDOWN); // select snare
  pinMode(10, OUTPUT); // select hihat LED
  pinMode(11, INPUT_PULLDOWN); // select hihat
  pinMode(12, INPUT_PULLDOWN); // generate sequence
  pinMode(28, INPUT_PULLDOWN); // snare type 1
  pinMode(29, INPUT_PULLDOWN); // snare type 3
  pinMode(30, INPUT_PULLDOWN); // hihat type 1
  pinMode(31, INPUT_PULLDOWN); // hihat type 3
  pinMode(32, OUTPUT); //PlayState on/off
  pinMode(33, INPUT_PULLDOWN); // kick type 1
  pinMode(34, INPUT_PULLDOWN); // kick type 3
  pinMode(35, INPUT_PULLDOWN); // kick type 1
  pinMode(36, INPUT_PULLDOWN); // kick type 3
  pinMode(37, INPUT_PULLDOWN); // PLAY/PAUSE
  pinMode(PIN_A1, INPUT);
  pinMode(PIN_A2, INPUT);
  pinMode(PIN_A3, INPUT);
  pinMode(PIN_A4, INPUT);
  pinMode(PIN_A5, INPUT);
  pinMode(PIN_A6, INPUT);
  pinMode(PIN_A7, INPUT);
  pinMode(PIN_A8, INPUT);
  pinMode(PIN_A9, INPUT);
  pinMode(PIN_A10, INPUT);
  pinMode(PIN_A11, INPUT);
  pinMode(PIN_A12, INPUT);
  pinMode(PIN_A13, INPUT);
  pinMode(PIN_A14, INPUT);
  pinMode(PIN_A15, INPUT);
  pinMode(PIN_A16, INPUT);
  pinMode(PIN_A17, INPUT);

  //BD parameters
  BDsine.begin(0.7, 100, WAVEFORM_SINE);
  BDsaw.begin(0.4, 100, WAVEFORM_TRIANGLE);
  BDenv.sustain(0);
  BDpitchEnv.sustain(0);

  //SN parameters
  SNenv.sustain(0);
  SNfilt.frequency(1000);
  SNnoise.amplitude(0.5);
  SNtone.begin(0.8, 700, WAVEFORM_SINE);
  SNtone2.begin(0.8, 700, WAVEFORM_SINE);
  SNtoneEnv.sustain(0);
  SNfilt.resonance(2);
  SNchaosMix.gain(1, 0);
  SNtone.frequencyModulation(0);

  //HH parameters
  HHenv.sustain(0);
  HHfilt.frequency(6000);
  HHnoise.amplitude(0.6);
  HHtone.begin(0.8, 700, WAVEFORM_SQUARE);
  HHtone2.begin(0.8, 700, WAVEFORM_SQUARE);
  HHtoneEnv.sustain(0);
  HHfilt.resonance(2);
  HHchaosMix.gain(1, 0);
  HHtone.frequencyModulation(6);
  HHtone2.frequencyModulation(6);


  //fx setup
  WavefolderDC.amplitude(1);
  reverb.damping(0.8);
  Delay.disable(6);
  Delay.disable(7);
  DelayFilterL.frequency(5000);
  DelayFilterL.frequency(5000);


  for (int i = 0; i < 65; i++) {

    Inst[i] = random(0, 20);
    Prob[i] = random(0, 1024);
    Velocity[i] = random(300, 1024);
    kickVelocity[i] = random(300, 1024);
  }


}















/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



void loop() {

  // play - pause
  lastPlayBtn = currentPlayBtn;
  currentPlayBtn = digitalRead(37);

  if (lastPlayBtn == false && currentPlayBtn == true) {

    if (playState == false) {
      playState = true;
      digitalWrite(32, true);
    }
    else {
      playState = false;
      digitalWrite(32, false);
    }
  }





  //////////////////// POT PARAMETERS //////////////////////////////////////////////////////////////////////////////////////
  //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  ////// BASE DRUM/KICK PARAMETERS ///////////////////////////////////////////////////////////////////////////////

  BDsine.frequency((float)analogRead(A1) / 1023 * 100 + 10 * BDvariation);
  BDsaw.frequency((float)analogRead(A1) / 1023 * 100 + 10 * (float)analogRead(A3) / 300 * BDvariation);
  BDenv.decay(analogRead(A2)* BDvariation);
  BDMix.gain(1, (float)analogRead(A3) / 1024 / 3 * BDvariation);
  BDMix.gain(0, 1 - ((float)analogRead(A3) / 1024 / 2)* BDvariation);

  //kick type//////////////////////
  if (digitalRead(33) == 1) {
    BDsine.begin(WAVEFORM_SINE);
    BDsaw.begin(WAVEFORM_TRIANGLE);
    BDpitchEnv.decay(analogRead(A2) / 6 * BDvariation);
    BDpitchAmt.amplitude((float)analogRead(A3) / 1024 / 1.2 * BDvariation);
    BDchaosMix.gain(1, (float)analogRead(A3) / 1300);
    BDsine.frequencyModulation(5);

  } else if (digitalRead(33) == 0 && digitalRead(34) == 0) {
    BDsine.begin(WAVEFORM_TRIANGLE);
    BDsaw.begin(WAVEFORM_TRIANGLE);
    BDpitchEnv.decay(analogRead(A2) / 4 * BDvariation);
    BDpitchAmt.amplitude((float)analogRead(A3) / 1024 / 1.5 * BDvariation);
    BDchaosMix.gain(1, (float)analogRead(A3) / 2300);
    BDsine.frequencyModulation(2);

  } else if (digitalRead(34) == 1) {
    BDsine.begin(WAVEFORM_SINE);
    BDsaw.begin(WAVEFORM_SINE);
    BDpitchEnv.decay(analogRead(A2) / 10 * BDvariation);
    BDpitchAmt.amplitude((float)analogRead(A3) / 1024 / 3 * BDvariation);
    BDchaosMix.gain(1, (float)analogRead(A3) / 1000);
    BDsine.frequencyModulation(12);
  }





  ////// SNARE PARAMETERS ///////////////////////////////////////////////////////////////////////////////////////
  SNMix.gain(1, 1 - ((float)analogRead(A4) / 1024 * SNvariation)); //blend between noise and tone
  SNMix.gain(0, (float)analogRead(A4) / 1024 * SNvariation); //blend between noise and tone
  SNenv.decay((float)analogRead(A5)* SNvariation); // noise decay


  SNfilt.frequency(analogRead(A6) * 3 + 1000 * SNvariation); // filter freq

  SNtoneMix.gain(0, 1 - (float)analogRead(A6) / 1850 * SNvariation); // reduce volume when fm
  SNtoneMix.gain(1, 1 - (float)analogRead(A6) / 1850 * SNvariation); // reduce volume when fm

  //Snare type////////////////
  if (digitalRead(29) == 1) {
    SNtone.begin(WAVEFORM_SINE);
    SNtone2.begin(WAVEFORM_SINE);
    SNtone.amplitude(0.8);
    SNtone2.amplitude(0.8);
    SNchaosMix.gain(0, (float)analogRead(A4) / 1024 * SNvariation); // fm Amt
    SNtone.frequency(analogRead(A6) / 2.2 + 50 * SNvariation); // tone 1 freq
    SNtone2.frequency(analogRead(A6)  + 100 * SNvariation); // tone 2 freq
    SNtoneEnv.decay((float)analogRead(A5) / 3 * SNvariation); // shorter tone decay
    SNtone.frequencyModulation(0);

  } else if (digitalRead(28) == 0 && digitalRead(29) == 0) {
    SNtone.begin(WAVEFORM_TRIANGLE);
    SNtone2.begin(WAVEFORM_TRIANGLE);
    SNtone.amplitude(0.8);
    SNtone2.amplitude(0.8);
    SNchaosMix.gain(0, (float)analogRead(A4) / 2000 * SNvariation); // fm Amt
    SNtone.frequency(analogRead(A6) / 1.5 + 50 * SNvariation); // tone 1 freq
    SNtone2.frequency(analogRead(A6)  + 200 * SNvariation); // tone 2 freq
    SNtoneEnv.decay((float)analogRead(A5) / 2 * SNvariation); // shorter tone decay
    SNtone.frequencyModulation(1);

  } else if (digitalRead(28) == 1) {
    SNtone.begin(WAVEFORM_SQUARE);
    SNtone2.begin(WAVEFORM_SAWTOOTH);
    SNtone.amplitude(0.7);
    SNtone2.amplitude(0.7);
    SNchaosMix.gain(0, (float)analogRead(A4) / 500 * SNvariation); // fm Amt
    SNtone.frequency(analogRead(A6) / 1.5 + 50 * SNvariation); // tone 1 freq
    SNtone2.frequency(analogRead(A6) / 2  + 100 * SNvariation); // tone 2 freq
    SNtoneEnv.decay((float)analogRead(A5) / 1 * SNvariation); // shorter tone decay
    SNtone.frequencyModulation(2);
  }







  ////////HIHIAT parameters /////////////////////////////////////////////////////////////////////////////////////
  HHMix.gain(1, 1 - ((float)analogRead(A9) / 1500 * HHvariation)); //blend between noise and tone
  HHMix.gain(0, (float)analogRead(A9) / 2000 * HHvariation); //blend between noise and tonea
  HHfilt.frequency(analogRead(A7) * 22 + 2000 * HHvariation); // filter freq
  HHchaosMix.gain(0, (float)analogRead(A9) / 1024 * HHvariation); // fm Amt
  HHtoneMix.gain(0, 1 - (float)analogRead(A9) / 2300 * HHvariation); // reduce volume when fm
  HHtoneMix.gain(1, 1 - (float)analogRead(A9) / 2300 * HHvariation); // reduce volume when fm

  //Hihat type//////////////////////
  if (digitalRead(31) == 1) {
    HHtone.begin(WAVEFORM_SQUARE);
    HHtone2.begin(WAVEFORM_SQUARE);
    HHtone.frequencyModulation(6);
    HHtone2.frequencyModulation(6);
    HHenv.attack(10);
    HHtone.frequency(analogRead(A7) * 4 + 300 * HHvariation); // tone 1 freq
    HHtone2.frequency(analogRead(A7) * 7 + 100 * HHvariation); // tone 2 freq
    HHenv.decay((float)analogRead(A8) / 2 * HHvariation); // noise decay
    HHtoneEnv.decay((float)analogRead(A8) / 1.5 * HHvariation); // shorter tone decay

  } else if (digitalRead(30) == 0 && digitalRead(31) == 0) {
    HHtone.begin(WAVEFORM_TRIANGLE);
    HHtone2.begin(WAVEFORM_TRIANGLE);
    HHtone.frequencyModulation(8);
    HHtone2.frequencyModulation(8);
    HHenv.attack((float)analogRead(A8) / 3);
    HHtone.frequency(analogRead(A7) * 6 + 300 * HHvariation); // tone 1 freq
    HHtone2.frequency(analogRead(A7) * 10 + 100 * HHvariation); // tone 2 freq
    HHenv.decay((float)analogRead(A8) / 2.5 * HHvariation); // noise decay
    HHtoneEnv.decay((float)analogRead(A8) / 2.5 * HHvariation); // tone decay


  } else if (digitalRead(30) == 1) {
    HHtone.begin(WAVEFORM_TRIANGLE);
    HHtone2.begin(WAVEFORM_SQUARE);
    HHtone.frequencyModulation(3);
    HHtone2.frequencyModulation(2);
    HHenv.attack(10);
    HHtone.frequency(analogRead(A7) * 8 + 300 * HHvariation); // tone 1 freq
    HHtone2.frequency(analogRead(A7) * 12 + 100 * HHvariation); // tone 2 freq
    HHenv.decay((float)analogRead(A8) * 1.5 * HHvariation); // noise decay
    HHtoneEnv.decay((float)analogRead(A8) * 1.5 * HHvariation); // tone decay

  }









  //Filter knob
  filtPot = (float)analogRead(A11) / 1024;

  if (oldFiltPot + tresh / 1024 < filtPot || oldFiltPot - tresh / 1024 > filtPot) {

    if (kickSelected == true) {
      BdFilterMix.gain(0, 1 - filtPot);
      BdFilterMix.gain(1, filtPot);
      BdFilter.frequency(13000 * filtPot);
    }

    if (snareSelected == true) {
      SnFilterMix.gain(0, 1 - filtPot);
      SnFilterMix.gain(1, filtPot);
      SnFilter.frequency(13000 * filtPot);
    }
    if (hihatSelected == true) {
      HhFilterMix.gain(0, 1 - filtPot);
      HhFilterMix.gain(1, filtPot);
      HhFilter.frequency(13000 * filtPot);
    }
    if (allSelected == true) {
      BdFilterMix.gain(0, 1 - filtPot);
      BdFilterMix.gain(1, filtPot);
      BdFilter.frequency(13000 * filtPot);

      SnFilterMix.gain(0, 1 - filtPot);
      SnFilterMix.gain(1, filtPot);
      SnFilter.frequency(13000 * filtPot);

      HhFilterMix.gain(0, 1 - filtPot);
      HhFilterMix.gain(1, filtPot);
      HhFilter.frequency(13000 * filtPot);
    }
    Serial.println("filter turn");
    oldFiltPot = filtPot + (tresh / 2 / 1024);

  }








  // volume knob + volumes of instruments
  volPot = (float)analogRead(A12) / 1024;

  if (oldVolPot + tresh / 1024 < volPot || oldVolPot - tresh / 1024 > volPot) {

    if (kickSelected == true) {
      kickVol = volPot;
    }
    if (snareSelected == true) {
      snareVol = volPot;
    }
    if (hihatSelected == true) {
      hihatVol = volPot;
    }
    if (allSelected == true) {
      OutL.gain(0, (float)volPot);
      OutL.gain(1, (float)volPot);
      OutR.gain(0, (float)volPot);
      OutR.gain(1, (float)volPot);
    }
    Serial.println("volume turn");
    oldVolPot = volPot + (tresh / 2 / 1024);

  }


  //Instrument Volume
  VoiceMixer.gain(0, 0.7 * (kickVelocity[Step] / 1023) * kickVol); //kick volume
  VoiceMixer.gain(1, 0.6 * (Velocity[Step] / 1023) * snareVol); // snare volume
  VoiceMixer.gain(2, 0.2 * (Velocity[Step] / 1023) * hihatVol); // hihat volume










  // probability knob
  probPot = analogRead(A16);
  if (oldProbPot + tresh < probPot || oldProbPot - tresh > probPot) {

    if (kickSelected == true) {
      kickProb = probPot;
    }
    if (snareSelected == true) {
      snareProb = probPot;
    }
    if (hihatSelected == true) {
      hihatProb = probPot;
    }
    if (allSelected == true) {
      kickProb = probPot;
      snareProb = probPot;
      hihatProb = probPot;
    }
    Serial.println("probability turn");
    oldProbPot = probPot + (tresh / 2);

  }






  // Randomness knob
  randomPot = analogRead(A17);
  if (oldRandomPot + tresh < randomPot || oldRandomPot - tresh > randomPot) {

    if (kickSelected == true) {
      kickVariationPot  = randomPot;
    }
    if (snareSelected == true) {
      snareVariationPot = randomPot;
    }
    if (hihatSelected == true) {
      hihatVariationPot  = randomPot;
    }
    if (allSelected == true) {
      kickVariationPot  = randomPot;
      snareVariationPot  = randomPot;
      hihatVariationPot  = randomPot;
    }
    Serial.println("randomness turn");
    oldRandomPot = randomPot + (tresh / 2);

  }



  ////////// Wavefolder/distortion/drive//////////////////////////////
  WavefoldMixer.gain(0, 1 - (float)analogRead(A13) / 1024);
  WavefoldMixer.gain(1, (float)analogRead(A13) / 8000);


  /////////// REVERB /////////////////////////////////////////////////
  ReverbMixer.gain(0, 1 - (float)analogRead(A10) / 2000);
  ReverbMixer.gain(1, (float)analogRead(A10) / 2500);
  reverb.roomsize(0.8 + (float)analogRead(A10) / 5200);







  delayVol = (float)analogRead(A14) / 1400;

  Delay.delay(0, delayTime);
  Delay.delay(1, delayTime * 2);
  Delay.delay(2, delayTime * 3);
  Delay.delay(3, delayTime * 4);
  Delay.delay(4, delayTime * 5);
  Delay.delay(5, delayTime * 6);



  if ((delayVol - 0.2) > 0) {
    DelayMixL.gain(0, delayVol - 0.25);
  } else {
    DelayMixL.gain(0, 0);
  }

  if ((delayVol - 0.4) > 0) {
    DelayMixL.gain(1, delayVol - 0.45);
  } else {
    DelayMixL.gain(1, 0);
  }

  if ((delayVol - 0.6) > 0) {
    DelayMixL.gain(2, delayVol - 0.65);
  } else {
    DelayMixL.gain(2, 0);
  }

  if ((delayVol - 0.3) > 0) {
    DelayMixR.gain(0, delayVol - 0.3);
  } else {
    DelayMixR.gain(0, 0);
  }

  if ((delayVol - 0.5) > 0) {
    DelayMixR.gain(1, delayVol - 0.5);
  } else {
    DelayMixR.gain(1, 0);
  }

  if ((delayVol - 0.7) > 0) {
    DelayMixR.gain(2, delayVol - 0.7);
  } else {
    DelayMixR.gain(2, 0);
  }












  /////////////// MOVING STEPS FORWARD & SWING //////////////////////////////////////////////////////
  ///////////////////////////////////////////////////////////////////////////////////////////////////

  swing = ((float)analogRead(A15) / 1024) + 1;


  if (Step % 2 == 0) {
    tempo = analogRead(A0) / 4 + 70 * swing;
  } else {
    tempo = analogRead(A0) / 4 + 70 * (2 - swing);
  }


  if (playState == true) {

    if (millis() -  tempo > timer) {

      if (Step < SeqLen) {
        Step ++;
      } else {
        Step = 1;
      }

      BDon = false;
      SNon = false;
      HHon = false;

      timer = millis();
      Serial.println(analogRead(A0));

      /////////// DELAY //////////////////////////////////////////////////
      switch (analogRead(A0)) {
        case 0 ... 150:
          delayTime = (analogRead(A0) / 4 + 70) * 4;
          break;

        case 151 ... 300:
          delayTime = (analogRead(A0) / 4 + 70) * 3;
          break;

        case 301 ... 500:
          delayTime = (analogRead(A0) / 4 + 70) * 2;
          break;

        case 501 ... 700:
          delayTime = (analogRead(A0) / 4 + 70) * 1.5;
          break;

        case 701 ... 850:
          delayTime = analogRead(A0) / 4 + 70;
          break;

        case 851 ... 1024:
          delayTime = (analogRead(A0) / 4 + 70) / 1.5;
          break;

      }

    }
  } else if (playState == false) {
    Step = 1;
  }






  ////////////////// RANDOMIZE SEQUENCE + PROB /////////////////////////////////////////////////////////
  //////////////////////////////////////////////////////////////////////////////////////////////////////
  if (digitalRead(12) == 1) {
    if (Step < SeqLen) {
      Inst[Step + 1] = random(0, 20);
      Prob[Step + 1] = random(0, 1024);
      Velocity[Step + 1] = random(300, 1024);
    } else if (Step == SeqLen) {
      Inst[1] = random(0, 20);
      Prob[1] = random(0, 1024);
      Velocity[1] = random(300, 1024);
    }
  }






  ///////////////// PLAY DRUMS /////////////////////////////////////////////////////////////////////////
  //////////////////////////////////////////////////////////////////////////////////////////////////////

  //  1 - 4 kick
  //  5 - 8 snare
  //  9 - 13 hihat
  //  14 - 16 kick + hihat
  //  17 - 19 snare + hihat
  //  20 kick + snare


  //// KICK ////////////////////
  if ( (Inst[Step] <= 4 || (Inst[Step] >= 14 && Inst[Step] <= 16) || (Inst[Step] == 20)) && Prob[Step] < kickProb) {
    if (BDon == false) {
      BDvariation = 1 + (((float)random(-10, 10) / 10) * (float)kickVariationPot / 1024) ;

      if (digitalRead(12) == 1) {
        kickVelocity[Step] = random(300, 1024);
      }

      // led
      if (kickSelected == true || allSelected == true) {
        digitalWrite(6, 0);
      } else {
        digitalWrite(6, 1);
      }

      BDnoteOn();
      BDon = true;
    }
  }
  else {
    kickVelocity[Step] = kickVelocity[Step - 1];
  }


  //// SNARE ////////////////////
  if ( ( (Inst[Step] >= 5 && Inst[Step] <= 8) || (Inst[Step] >= 17 && Inst[Step] <= 20) ) && Prob[Step] < snareProb) {
    if (SNon == false) {
      SNvariation = 1 + (((float)random(-10, 10) / 10) * (float)snareVariationPot / 1024) ;

      // led
      if (snareSelected == true || allSelected == true) {
        digitalWrite(8, 0);
      } else {
        digitalWrite(8, 1);
      }

      SNnoteOn();
      SNon = true;
    }
  }

  //// HIHAT ////////////////////
  if ( (Inst[Step] >= 9 && Inst[Step] <= 19) && Prob[Step] < hihatProb) {
    if (HHon == false) {
      HHvariation = 1 + (((float)random(-10, 10) / 10) * (float)hihatVariationPot / 1024) ;

      // led
      if (hihatSelected == true || allSelected == true) {
        digitalWrite(10, 0);
      } else {
        digitalWrite(10, 1);
      }

      HHnoteOn();
      HHon = true;
    }
  }


  //////////////// INSTRUMENT SELECT /////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////

  if (digitalRead(5) == 1) {
    allSelected = true;
    kickSelected = false;
    snareSelected = false;
    hihatSelected = false;
    digitalWrite(6, 1);
    digitalWrite(8, 1);
    digitalWrite(10, 1);
  }

  if (digitalRead(7) == 1) {
    allSelected = false;
    kickSelected = true;
    snareSelected = false;
    hihatSelected = false;
    digitalWrite(6, 1);
    digitalWrite(8, 0);
    digitalWrite(10, 0);
  }

  if (digitalRead(9) == 1) {
    allSelected = false;
    kickSelected = false;
    snareSelected = true;
    hihatSelected = false;
    digitalWrite(6, 0);
    digitalWrite(8, 1);
    digitalWrite(10, 0);
  }

  if (digitalRead(11) == 1) {
    allSelected = false;
    kickSelected = false;
    snareSelected = false;
    hihatSelected = true;
    digitalWrite(6, 0);
    digitalWrite(8, 0);
    digitalWrite(10, 1);
  }




  ////////// SEQUENCE LENGTH ///////////////////////////////////////////////////////////////
  if (digitalRead(35) == 1) {
    SeqLen = 16;
  }

  if (digitalRead(36) == 1) {
    SeqLen = 28;
  }

  else if (digitalRead(35) == 0 && digitalRead(36) == 0) {
    SeqLen = 32;
  }


  ////////// LED LED LED ///////////////////////////////////////////////////////////////////
  if (millis() - kickLed > kickLedTimer) {
    if (kickSelected == true || allSelected == true) {
      digitalWrite(6, 1);
    } else {
      digitalWrite(6, 0);
    }
    kickLedTimer = millis();
  }

  if (millis() - snareLed > snareLedTimer) {
    if (snareSelected == true || allSelected == true) {
      digitalWrite(8, 1);
    } else {
      digitalWrite(8, 0);
    }
    snareLedTimer = millis();
  }

  if (millis() - hihatLed > hihatLedTimer) {
    if (hihatSelected == true || allSelected == true) {
      digitalWrite(10, 1);
    } else {
      digitalWrite(10, 0);
    }
    hihatLedTimer = millis();
  }
}

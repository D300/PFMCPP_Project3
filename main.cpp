 /*
 Project 3 - Part 2 / 5
 Video: Chapter 2 Part 6
 Implementations tasks

Create a branch named Part2

 tasks
 0) delete all of the plain english pseudo-code you added in Part1.
   - you should be left with only your UDTs.

 1) write the definition for the Type that leftFoot and rightFoot are instantiations of.
    don't forget to define and implement the member functions 'stepForward()' and 'stepSize()'
    you should be able to deduce the return type of those functions based on their usage in Person::run()
    You'll need to insert the Person struct from the video in the space below.
 */

struct Foot
{
    float footSize;
    int numSteps = 0;   

    void stepForward();
    int stepSize(int size);
};

int Foot::stepSize(int size_)
{
    return size_;
}

void Foot::stepForward()
{
    numSteps++;
}


struct Person
{
    int age;
    int heigth;
    float hairlength;
    float GPA;
    unsigned int SATScore;

    int distanceTraveled;

    void run(int stepSize, bool startWithLeftFoot);

    Foot leftFoot;
    Foot rightFoot;
};


void Person::run(int stepSize, bool startWithLeftFoot)
{
    if (startWithLeftFoot)
    {
        leftFoot.stepForward();
        rightFoot.stepForward();
    }
    else
    {
        rightFoot.stepForward();
        leftFoot.stepForward();
    }

    distanceTraveled += leftFoot.stepSize(stepSize) + rightFoot.stepSize(stepSize);
}

 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
 x

 3) be sure to write the correct full qualified name for the nested type's member functions.
 x
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 x
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */

/*
 Checkpoint 1:
 Fill in #1 - 4 with a random UDT in plain english
 These 4 UDTs do not need to be related.
 For each plain-english UDT, write out 3 things it can do, and 5 traits or properties.
 */



struct Aquarium
{
    int size = 40;
    int waterFilters = 1;
    int plantTypes = 3;
    float glassThickness = 0.8f;
    bool light = true;
    
    void accomodateFishes();
    void inspireHumans();
    void suckEnergy();
};

void Aquarium::accomodateFishes() {}

void Aquarium::inspireHumans() {}

void Aquarium::suckEnergy(){}

//=========================================================

struct Oven
{
    bool clean = false;
    bool used = false;
    float temperatur = 180.0f;
    int heatingStyle = 3;
    bool ovenDoorOpen = false;
    
    void heatUp();
    void startTimer();
    void foodReady();
};


void Oven::heatUp() {}

void Oven::startTimer() {}

void Oven::foodReady() {}

//=========================================================

struct Cat
{
    float hairLen = 0.3f;
    int teethStyle;
    bool healthy = true;
    int age = 4;
    float mood = 0.5f;
    
    void jump();
    void chill();
    void purrrr();
};

void Cat::jump() {}
void Cat::chill() {}
void Cat::purrrr() {}

//=========================================================

struct Cup 
{
    int color = 1;
    int material = 0;
    float size = 1.5f;
    bool dirty = false;
    float weigth = 5.0f;
    
    void stand();
    void breakCup();
    void fallFromTable();
};

void Cup::stand() {}
void Cup::breakCup() {}
void Cup::fallFromTable() {}

//=========================================================

struct AudioInterface
{
    bool on = false;
    int audioInputAmnt = 2;
    int audioOutputAmnt = 2; 
    int bufSize = 512;
    int activeConnections = 2;
    
    struct Audio
    {
        int bufSize = 256;
        double sampleRate = 44.1;
        
        void streamAudio(int bufSize = 512);
        Audio getSample();
    };
    
    Audio receiveAudio(int bufSize = 512, double sampleRate = 44.1);
    void sendAudio(Audio audio);
    void routeAudio(Audio audio);
    
    Audio getAudio()
    {
        Audio audio;
        return audio;
    }
};

void AudioInterface::sendAudio(Audio audio) 
{
    audio.streamAudio(512);
}
void AudioInterface::routeAudio(Audio audio) 
{
    audio.streamAudio(512);
}
void AudioInterface::Audio::streamAudio(int bufSize_) 
{
    bufSize = bufSize_;   
}

//=========================================================
struct DrumPads
{
    float padSize = 5.0f;
    float triggerResponse = 0.7f;
    float ledBrightness = 0.5f;
    bool activated = true;
    int playMode = 1;
    
    void triggerSampler();
    void muteTrack();
    void selectSample();
};

void DrumPads::triggerSampler() {}
void DrumPads::muteTrack() {}
void DrumPads::selectSample() {}

//=========================================================
struct ParamDials
{
    float rangeScalerMin = 0.1f;
    float rangeScalerMax = 0.9f;
    int valueMapperTarget = 3;
    bool activated = false;
    bool recordMode = false;
    
    void ctrlOneParam();
    void ctrlTwoParams();
    void ctrlTwoParamsDiffScalings();
};

void ParamDials::ctrlOneParam() {}
void ParamDials::ctrlTwoParams() {}
void ctrlTwoParamsDiffScalings() {}

//=========================================================
struct MicrotonalPitcher
{
    bool on = true;
    int notesPerOctave = 100;
    float dynamicPitchDeviationRange = 200.0f;
    float maximumShiftingInterval = 100;
    float defaultFormantFilterDryWet = 0.0f;
    
    void pitchAnalysis();
    void pitchShifting();
    void formantFiltering();
};

void MicrotonalPitcher::pitchAnalysis() {}
void MicrotonalPitcher::pitchShifting() {}
void MicrotonalPitcher::formantFiltering() {}

//=========================================================
struct TimeWarpFlexThing
{
    float transDetectTresh = 0.2f;
    int maxWarpPoints = 100;
    int grainEngineVoiceAmnt = 8;
    int interpolModeSel = 0;
    float sampleScopeSelector = 0.0f;
    
    struct Pattern
    {
        int patternLen = 5;
        float velocity = 100.0f;
        
        void permutatePatternOverLen(int patterLen_);
    };
    
    void warpToEvenSpreadedSpectralEnergy(Pattern p);
    void cluster(Pattern pattern);
    auto sliceSample(AudioInterface audioInterface);
};

void TimeWarpFlexThing::warpToEvenSpreadedSpectralEnergy(Pattern p) 
{
    p.patternLen = 10;
}

void TimeWarpFlexThing::cluster(Pattern p)
{
    p.patternLen = 14;
}

auto TimeWarpFlexThing::sliceSample(AudioInterface audioInterface)
{
    auto sample = audioInterface.getAudio();
    return sample;
}

void TimeWarpFlexThing::Pattern::permutatePatternOverLen(int patternLen_)
{
    patternLen = patternLen_;
}


//=========================================================
struct  InsaneMusicMachine 
{
    AudioInterface ioDevice;
    DrumPads drumPads;
    ParamDials paramDials;
    MicrotonalPitcher microtonalPitcher;
    TimeWarpFlexThing timeWarper;
    
    void play();
    void stop();
    void suprise();
};

//=========================================================
#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

int main()
{
    std::cout << "good to go!" << std::endl;

    // ignoreUnused(audio, unused, bufSize);

    Person p;
    p.run(3, true);
}


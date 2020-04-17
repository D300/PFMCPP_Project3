/*
 Project 3 - Part 4 / 5
 video: Chapter 2 - Part 9
 Member initialization tasks

 Create a branch named Part4
 
 1) initialize some of your member variables either in-class or in the Constructor member initializer list.

 2) make some of your member functions use those initialized member variables via std::cout statements.
 
 3) click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */

#include <iostream>
namespace Example {
struct UDT  
{
    int a; //a member variable

    // why the curly braces and no assignment operator?
    float b { 2.f }; //3) in-class initialization 
    UDT() : a(0) { } //3) 'constructor-initializer-list' member variable initialization
    void printThing()  //the member function
    {
        std::cout << "UDT::printThing() a:" << a << " b: " << b << std::endl;  //4) printing out something interesting
    }
};

int main()
{
    UDT foo; //instantiating a Foo in main()
    foo.printThing(); //calling a member function of the instance that was instantiated.
    return 0;
}
} // end namespace 

//call Example::main()

/*
using namespace std; FIXME never use the 'using namespace' hack. it's the quickest way to create really difficult bugs that are really hard to solve.
*/

struct Aquarium
{
    // do you put the member variables which you instatiate in the constructor above the ctor for readability?
    
    float size;
    float glassThickness;
    int waterFilters { 3 };

    Aquarium()
    :
    size(39),
    glassThickness(5)
    {
        std::cout << "aquarium ctor" << std::endl;
    }

    int plantTypes = 3;
    bool light = true;
    
    void accomodateFishes();
    void inspireHumans();
    int suckEnergy();
};

void Aquarium::accomodateFishes() 
{
    std::cout << "accommodateFishes" << std::endl;
}

void Aquarium::inspireHumans() 
{
    auto sizeOverWaterFilter = size / waterFilters;
    
    std::cout << "sizeOVerWAterFilters: " << sizeOverWaterFilter << "\n" << std::endl;
}

int Aquarium::suckEnergy()
{
    return 100;
}

//=========================================================

struct Oven
{
    bool clean;
    float temperatur;
    
    Oven()
    :
    clean(true),
    temperatur(234.f)
    {
        std::cout << "oven ctor" << std::endl;
    } 
    
    int heatingStyle = 3;
    bool used = false;
    bool ovenDoorOpen = false;
    
    bool checkCondition();
    void heatUp();
    void setTemperature(bool condition);


    void startTimer();
    void foodReady();
};

bool Oven::checkCondition()
{
    bool condition = false;

    if (clean == true)
    {
        std::cout << "heated Up - lets make some cookies" << std::endl;
        condition = true;
    }
    else
    {
        std::cout << "clean your oven" << std::endl;
    }

    return condition;
}

void Oven::heatUp() 
{
    setTemperature(checkCondition());
}

void Oven::setTemperature(bool condition)
{
    if (condition == true)
    {
        temperatur = 200.f;
    }
    else
    {
        temperatur = 0.f;
    }
}


void Oven::startTimer() 
{
    std::cout << "startTimer" << std::endl;
}

void Oven::foodReady() 
{
    std::cout << "foodReady - Everything you can imagine is real.\n" << std::endl;
}

//=========================================================

struct Cat
{
    float hairLen = 0.3f;

    Cat() { hairLen = 0.5f; }

    int teethStyle;
    bool healthy = true;
    int age = 4;
    float mood = 0.5f;
    
    void jump();
    void chill();
    void purrrr();
};

void Cat::jump() 
{
    std::cout << "jump - Art washes away from the soul the dust of everyday life.\n" << std::endl;
}
void Cat::chill() 
{
    std::cout << "chill" << std::endl;
}
void Cat::purrrr() 
{
    std::cout << "purrrr" << std::endl;
}

//=========================================================

struct Cup 
{
    int color = 1;

    Cup() { color = 2; }

    int material = 0;
    float size = 1.5f;
    bool dirty = false;
    float weigth = 5.0f;
    
    void stand();
    void breakCup();
    void fallFromTable();
};

void Cup::stand() 
{
    std::cout << "stand" << std::endl;
}
void Cup::breakCup() 
{
    std::cout << "breakCup" << std::endl;
}
void Cup::fallFromTable() 
{
    std::cout << "fallFromTable - Art is a lie that makes us realize truth.\n" << std::endl;
}

//=========================================================

struct AudioInterface
{
    bool on = false;

    AudioInterface() { on = true; }

    int audioInputAmnt = 2;
    int audioOutputAmnt = 0; 
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
    std::cout << "audio sending - Action is the foundational key to all success.\n" << std::endl;
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

    DrumPads() { padSize = 10.0f; }

    float triggerResponse = 0.7f;
    float ledBrightness = 0.5f;
    bool activated = true;
    int playMode = 1;
    
    void triggerSampler();
    void muteTrack();
    void selectSample();
};

void DrumPads::triggerSampler() 
{
    std::cout << "triggerSamples - Every act of creation is first of all an act of destruction.\n" << std::endl;
}
void DrumPads::muteTrack() 
{
    std::cout << "muteTrack" << std::endl;
}
void DrumPads::selectSample() 
{
    std::cout << "selectSample" << std::endl;
}

//=========================================================
struct ParamDials
{
    float rangeScalerMin = 0.1f;

    ParamDials() { rangeScalerMin = 0.2f; }

    float rangeScalerMax = 0.9f;
    int valueMapperTarget = 3;
    bool activated = false;
    bool recordMode = false;
    
    void ctrlOneParam();
    void ctrlTwoParams();
    void ctrlTwoParamsDiffScalings();
};

void ParamDials::ctrlOneParam() 
{
    std::cout << "ctrlOneParam - It takes a long time to become young.\n" << std::endl;
}
void ParamDials::ctrlTwoParams() 
{
    std::cout << "ctrlTwoParams" << std::endl;
}
void ctrlTwoParamsDiffScalings() 
{
    std::cout << "ctrlTwoParamsDiffScalings" << std::endl;
}

//=========================================================
struct MicrotonalPitcher
{
    bool on = true;

    MicrotonalPitcher() { on = false; }

    int notesPerOctave = 100;
    float dynamicPitchDeviationRange = 200.0f;
    float maximumShiftingInterval = 100;
    float defaultFormantFilterDryWet = 0.0f;
    
    void pitchAnalysis();
    void pitchShifting();
    void formantFiltering();
};

void MicrotonalPitcher::pitchAnalysis() 
{
    std::cout << "pitchAnalysis" << std::endl;
}
void MicrotonalPitcher::pitchShifting() 
{
    std::cout << "pitchShifting - Inspiration does exist, but it must find you working.\n" << std::endl;
}
void MicrotonalPitcher::formantFiltering() 
{
    std::cout << "formantFiltering" << std::endl;
}

//=========================================================
struct TimeWarpFlexThing
{
    float transDetectTresh = 0.2f;

    TimeWarpFlexThing() { transDetectTresh = 0.3f; }

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
    std::cout << "cluster - Every child is an artist. The Problem is how to retain an artist once we grow up\n" << std::endl;
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
struct InsaneMusicMachine 
{
    InsaneMusicMachine() { ioDevice.audioInputAmnt = 2; }

    AudioInterface ioDevice;
    DrumPads drumPads;
    ParamDials paramDials;
    MicrotonalPitcher microtonalPitcher;
    TimeWarpFlexThing timeWarper;
    
    void play()
    {
        std::cout << "Good artists copy, great artists steal. - Picasso" << std::endl;
    }

    void stop();
    void suprise();
};

//=========================================================

int main()
{
    Aquarium aquarium;
    Oven oven;
    Cat cat;
    Cup cup;
    AudioInterface audioInterface;
    DrumPads drumPads;
    ParamDials paramDials;
    MicrotonalPitcher microtonalPitcher;
    TimeWarpFlexThing timeWarper;

    InsaneMusicMachine iMM;


    aquarium.inspireHumans();
    oven.heatUp();
    oven.foodReady();
    cat.jump();
    cup.fallFromTable();

    AudioInterface::Audio someAudio;
    audioInterface.sendAudio(someAudio);

    drumPads.triggerSampler();
    paramDials.ctrlOneParam();
    microtonalPitcher.pitchShifting();
    
    TimeWarpFlexThing::Pattern pattern;
    timeWarper.cluster(pattern);

    
    iMM.play();

    std::cout << "\naquarium plant types: " << aquarium.plantTypes << std::endl;
    std::cout << "oven temperature: " << oven.temperatur << std::endl;
    std::cout << "current warp points amount: " << timeWarper.maxWarpPoints << "\n" << std::endl;


    // print returning values
    std::cout << "\n energy sucked: " << aquarium.suckEnergy() << std::endl;


    Example::main();
    std::cout << "good to go!" << std::endl;
}


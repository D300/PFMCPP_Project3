/*
 Project 3 - Part 3 / 5
 video: Chapter 2 - Part 8
 Constructors tasks

 Create a branch named Part3

 On a new branch:

 1) Add a constructor for each User-Defined-Type.
 
 2) amend some of your UDT's member functions to print out something interesting via std::cout
 
 3) Instantiate 1 or 2 instances of each of your user-defined types in the main function at the bottom of that file,

 4) call some of your UDT's amended member functions in main().
 
 5) add some std::cout statements in main() that print out your UDT's member variable values or values returned from your UDT member functions (if they return values)
 
 After you finish defining each type/function:
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 Make a pull request after you make your first commit and pin the pull request link to our DM thread.

 send me a DM to check your pull request

 Wait for my code review.
 
 example:
 */

#include <iostream>
namespace Example 
{
struct UDT  // my user defined type named 'UDT'
{
    int a; //a member variable
    UDT() { a = 0; }             //1) the constructor
    void printThing()            //the member function
    {
        std::cout << "UDT::printThing() " << a << std::endl;  //2) printing out something interesting
    }
};

int main()
{
    UDT foo;              //3) instantiating a UDT named 'foo' in main()
    foo.printThing();     //4) calling a member function of the UDT instance.
    
    //5) a std::cout statement accessing foo's member variable.
    //It also demonstrates a 'ternary expression', which is syntactic shorthand for an 'if/else' expression
    std::cout << "Is foo's member var 'a' equal to 0? " << (foo.a == 0 ? "Yes" : "No") << "\n";
    
    return 0;
}
} // end namespace

//insert Example::main() into main() of user's repo.

#include <iostream>
using namespace std;

struct Aquarium
{
    // do you put the member variables which you instatiate in the constructor above the ctor for readability?
    
    int size;
    
    Aquarium() { size = 40; }

    int waterFilters = 1;
    int plantTypes = 3;
    float glassThickness = 0.8f;
    bool light = true;
    
    void accomodateFishes();
    void inspireHumans();
    void suckEnergy();
};

void Aquarium::accomodateFishes() 
{
    cout << "accommodateFishes" << endl;
}

void Aquarium::inspireHumans() 
{
    cout << "\nLearn the Rules Like a Pro, So You Can Break Them Like an Artist.\n" << endl;
}

void Aquarium::suckEnergy()
{
    cout << "suckEnergy" << endl;
}

//=========================================================

struct Oven
{
    bool clean;
    
    Oven() { clean = true; }

    bool used = false;
    float temperatur = 180.0f;
    int heatingStyle = 3;
    bool ovenDoorOpen = false;
    
    void heatUp();
    void startTimer();
    void foodReady();
};


void Oven::heatUp() 
{
    cout << "heatUp" << endl;
}

void Oven::startTimer() 
{
    cout << "startTimer" << endl;
}

void Oven::foodReady() 
{
    cout << "foodReady - Everything you can imagine is real.\n" << endl;
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
    cout << "jump - Art washes away from the soul the dust of everyday life.\n" << endl;
}
void Cat::chill() 
{
    cout << "chill" << endl;
}
void Cat::purrrr() 
{
    cout << "purrrr" << endl;
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
    cout << "stand" << endl;
}
void Cup::breakCup() 
{
    cout << "breakCup" << endl;
}
void Cup::fallFromTable() 
{
    cout << "fallFromTable - Art is a lie that makes us realize truth.\n" << endl;
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
    cout << "audio sending - Action is the foundational key to all success.\n" << endl;
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
    cout << "triggerSamples - Every act of creation is first of all an act of destruction.\n" << endl;
}
void DrumPads::muteTrack() 
{
    cout << "muteTrack" << endl;
}
void DrumPads::selectSample() 
{
    cout << "selectSample" << endl;
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
    cout << "ctrlOneParam - It takes a long time to become young.\n" << endl;
}
void ParamDials::ctrlTwoParams() 
{
    cout << "ctrlTwoParams" << endl;
}
void ctrlTwoParamsDiffScalings() 
{
    cout << "ctrlTwoParamsDiffScalings" << endl;
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
    cout << "pitchAnalysis" << endl;
}
void MicrotonalPitcher::pitchShifting() 
{
    cout << "pitchShifting - Inspiration does exist, but it must find you working.\n" << endl;
}
void MicrotonalPitcher::formantFiltering() 
{
    cout << "formantFiltering" << endl;
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
    cout << "cluster - Every child is an artist. The Problem is how to retain an artist once we grow up\n" << endl;
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
        cout << "Good artists copy, great artists steal. - Picasso" << endl;
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

    Example::main();
    std::cout << "good to go!" << std::endl;
}

